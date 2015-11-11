//============================================================================
// Name        : Testing.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Word in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Warrior
{
private:
	int num, life, attack, pos;
	string type;
	const static string CHOICE[5];
	static int count[5];
public:
	Warrior(int l, int i = 0, int j = 0, int k = 0)
	{
		num = i; life = j; attack = k; type = CHOICE[l]; pos = l;
		count[l]++;
	}
	Warrior(Warrior& a)
	{
		num = a.getNum(); life = a.getLife(); attack = a.getAtt();
		pos = a.getPos(); type = a.getName();
		count[pos]++;
	}
	friend class Foundation;
	int getNum() { return num; }
	int getTot() { return count[pos]; }
	int getLife() { return life; }
	int getAtt() { return attack; }
	int getPos() { return pos; }
	string getName() { return type; }
	~Warrior() { count[pos]--; }
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

int Warrior::count[5] = {0};
const string Warrior::CHOICE[5] = {"dragon", "ninja", "iceman", "lion", "wolf" };
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
		cout << test[i][1] << endl;
		cout << Dragon.getName() << endl;
		cout << Dragon.getLife() << endl;
		Warrior Ninja(1, 0, test[i][2], 0);
		Warrior Iceman(2, 0, test[i][3], 0);
		Warrior Lion(3, 0, test[i][4], 0);
		Warrior Wolf(4, 0, test[i][5], 0);
		Warrior blueseq[5] = {Lion, Dragon, Ninja, Iceman, Wolf};
		Warrior redseq[5] = {Iceman, Lion, Wolf, Ninja, Dragon};
		Foundation Blue(0, test[i][0]);
		Foundation Red(1, test[i][0]);
		int posBlue = 0, posRed = 0, count = 0;
		for (int m = 1; m < 3; m++)
		{
			if (findNext(posRed, Red, redseq) != -1)
			{
				posRed = findNext(posRed, Red, redseq);
				Red.produceWar(redseq[posRed]);
				cout << count << " red " << redseq[posRed].getName() << ' ' << count + 1 << " born with strength " << redseq[posRed].getLife() << endl;
				posRed = (posRed + 1) % 5;
			}
			if (findNext(posBlue, Blue, blueseq) != -1)
			{
				posBlue = findNext(posBlue, Blue, blueseq);
				Blue.produceWar(blueseq[posBlue]);
				cout << Blue.getRes();
				cout << count << " blue " << blueseq[posBlue].getName() << ' ' << count + 1 << " born with strength " << redseq[posBlue].getLife() << endl;
				posBlue = (posBlue + 1) % 5;
			}
			count++;
		}
	}
	return 0;
}
