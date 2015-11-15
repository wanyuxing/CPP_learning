//============================================================================
// Name        : Homework4-Warriors.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Warriors in C++, Ansi-style
//============================================================================
#include <iostream>
#include <iomanip>
using namespace std;

class Warrior
{
private:
	int num, life, attack;
	string type, weapon;
	const static string CHOICE[5], WEAPON[3];
public:
	Warrior(int l, int i = 0, int j = 0, int k = 0)
	{ num = i; life = j; attack = k; type = CHOICE[l]; }
	friend class Foundation;
	int getNum() { return num; }
	int getLife() { return life; }
	int getAtt() { return attack; }
	string getWeapon() { return weapon; }
	string getWeapon(int i) { return WEAPON[i]; }
	void setWeapon(int i) { weapon = WEAPON[i]; }
	string getName() { return type; }
};

class DragonW: public Warrior
{
public:
	float morale;
	DragonW(int headquarter, int i = 0, int j = 0, int k = 0): Warrior(0, i, j, k)
	{
		setWeapon(i % 3);
		morale = (float) headquarter / j;
	}
	void print()
	{ cout << "It has a " << getWeapon() << ",and it's morale is " << setprecision(3) << morale; }
};

class NinjiaW: public Warrior
{
public:
	string weapon[2];
	string get1Weapon() { return weapon[0]; }
	string get2Weapon() { return weapon[1]; }
	void setWeapon(int i, int j) { weapon[0] = getWeapon(i); weapon[1] = getWeapon(j); }
	NinjiaW(int i = 0, int j = 0, int k = 0): Warrior(1, i, j, k)
	{ setWeapon(i % 3, (i + 1) % 3); }
	void print()
	{ cout << "It has a " << weapon[0] << " and a " << weapon[1]; }
};

class IcemanW: public Warrior
{
public:
	float morale;
	IcemanW(int i = 0, int j = 0, int k = 0): Warrior(2, i, j, k)
	{ setWeapon(i % 3); }
	void print()
	{ cout << "It has a " << getWeapon(); }
};

class LionW: public Warrior
{
public:
	int loyalty;
	LionW(int hdq, int i = 0, int j = 0, int k = 0): Warrior(3, i, j, k)
	{ loyalty = hdq; }
	void print()
	{ cout << "It's loyalty is " << loyalty; }
};

class WolfW: public Warrior
{
public:
	WolfW(int i = 0, int j = 0, int k = 0): Warrior(4, i, j, k) {};
};

class Foundation
{
private:
	int type, resource;
	const static string CHOICE[2], SEQ[2];
public:
	Foundation(int i = 0, int j = 0): type(i), resource(j) {};
	string getName() { return CHOICE[type]; }
	int getRes() { return resource; }
	void produceWar(Warrior& war)
	{ resource = max(resource - war.getLife(), 0); }
};

const string Warrior::CHOICE[5] = {"dragon", "ninja", "iceman", "lion", "wolf" };
const string Warrior::WEAPON[3] = {"sword", "bomb", "arrow" };
const string Foundation::CHOICE[2] = {"blue", "red"};
const string Foundation::SEQ[2] = {"blue", "red"};

int findNext(int start, Foundation a, Warrior b[5])
{
	int pos = -1;
	for (int i = 0; i < 5; i++)
	{
		int next = (start + i) % 5;
		if (a.getRes() >= b[next].getLife())
		{ pos = next; break; }
	}
	return pos;
}

int main() {
	int trial;
	cin >> trial;
	int test[trial][6];
	for (int i = 0; i < trial; i++)
	{
		for (int j = 0; j < 6; j++)
		{ cin >>  test[i][j]; }
	}
	for (int i = 0; i < trial; i++)
	{
		cout << "Case:" << i + 1 << endl;
		Warrior Dragon(0, 0, test[i][1], 0);
		Warrior Ninja(1, 0, test[i][2], 0);
		Warrior Iceman(2, 0, test[i][3], 0);
		Warrior Lion(3, 0, test[i][4], 0);
		Warrior Wolf(4, 0, test[i][5], 0);
		Warrior blueseq[5] = {Lion, Dragon, Ninja, Iceman, Wolf};
		Warrior redseq[5] = {Iceman, Lion, Wolf, Ninja, Dragon};
		int number[2][5] = {0};
		Foundation Blue(0, test[i][0]);
		Foundation Red(1, test[i][0]);
		int posBlue = findNext(0, Blue, blueseq), posRed = findNext(0, Red, redseq), count = 0;
		bool flagRed = true, flagBlue = true;
		while (true)
		{
			if (posRed != -1)
			{
				posRed = findNext(posRed, Red, redseq);
				number[0][posRed]++;
				cout << setfill('0') << setw(3) << count << " red " << redseq[posRed].getName() << ' ' << count + 1 << " born with strength " << redseq[posRed].getLife()
										<< ',' << number[0][posRed] << ' ' << redseq[posRed].getName() << " in red headquarter" << endl;
				if (redseq[posRed].getName() == "iceman")
				{
					Red.produceWar(redseq[posRed]);
					IcemanW iceman(count + 1, test[i][3]);
					iceman.print(); cout << endl;
				}
				else if (redseq[posRed].getName() == "dragon")
				{
					Red.produceWar(redseq[posRed]);
					DragonW dragon(Red.getRes(), count + 1, test[i][1], 0);
					dragon.print(); cout << endl;
				}
				else if (redseq[posRed].getName() == "ninjia")
				{
					Red.produceWar(redseq[posRed]);
					NinjiaW ninjia(count + 1, test[i][2], 0);
					ninjia.print(); cout << endl;
				}
				else if (redseq[posRed].getName() == "lion")
				{
					Red.produceWar(redseq[posRed]);
					LionW lion(Red.getRes(), count + 1, test[i][4], 0);
					lion.print(); cout << endl;
				}
				else
				{ Red.produceWar(redseq[posRed]); }
				posRed = findNext((posRed + 1) % 5, Red, redseq);
			}
			else if (flagRed == true)
			{
				cout << setfill('0') << setw(3) << count << " red headquarter stops making warriors" << endl;
				flagRed = false;
			}
			if (posBlue != -1)
			{
				posBlue = findNext(posBlue, Blue, blueseq);
				number[1][posBlue]++;
				cout << setfill('0') << setw(3) << count << " blue " << blueseq[posBlue].getName() << ' ' << count + 1 << " born with strength " << blueseq[posBlue].getLife()
						<< ',' << number[1][posBlue] << ' ' << blueseq[posBlue].getName() << " in blue headquarter" << endl;
				if (blueseq[posBlue].getName() == "iceman")
				{
					Blue.produceWar(blueseq[posBlue]);
					IcemanW iceman(count + 1, test[i][3]);
					iceman.print(); cout << endl;
				}
				else if (blueseq[posBlue].getName() == "dragon")
				{
					Blue.produceWar(blueseq[posBlue]);
					DragonW dragon(Blue.getRes(), count + 1, test[i][1], 0);
					dragon.print(); cout << endl;
				}
				else if (blueseq[posBlue].getName() == "ninjia")
				{
					Blue.produceWar(blueseq[posBlue]);
					NinjiaW ninjia(count + 1, test[i][2], 0);
					ninjia.print(); cout << endl;
				}
				else if (blueseq[posBlue].getName() == "lion")
				{
					Blue.produceWar(blueseq[posBlue]);
					LionW lion(Blue.getRes(), count + 1, test[i][4], 0);
					lion.print(); cout << endl;
				}
				else
				{ Blue.produceWar(blueseq[posBlue]); }
				posBlue = findNext((posBlue + 1) % 5, Blue, blueseq);
			}
			else if (flagBlue == true)
			{
				cout << setfill('0') << setw(3) << count << " blue headquarter stops making warriors" << endl;
				flagBlue = false;
			}
			if (flagBlue == false && flagRed == false) break;
			count++;
		}
	}
	return 0;
}
