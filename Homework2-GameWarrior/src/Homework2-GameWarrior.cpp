//============================================================================
// Name        : Homework2-GameWarrior.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Produce Warrior in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

class Warrior
{
private:
	int num, life, attack;
	string type;
	const static string CHOICE[5];
public:
	Warrior(int l, int i = 0, int j = 0, int k = 0)
	{ num = i; life = j; attack = k; type = CHOICE[l]; }
	friend class Foundation;
	int getNum() { return num; }
	int getLife() { return life; }
	int getAtt() { return attack; }
	string getName() { return type; }
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
				Red.produceWar(redseq[posRed]);
				number[0][posRed]++;
				cout << setfill('0') << setw(3) << count << " red " << redseq[posRed].getName() << ' ' << count + 1 << " born with strength " << redseq[posRed].getLife()
						<< ',' << number[0][posRed] << ' ' << redseq[posRed].getName() << " in red headquarter" << endl;
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
				Blue.produceWar(blueseq[posBlue]);
				number[1][posBlue]++;
				cout << setfill('0') << setw(3) << count << " blue " << blueseq[posBlue].getName() << ' ' << count + 1 << " born with strength " << redseq[posBlue].getLife()
						<< ',' << number[1][posBlue] << ' ' << blueseq[posBlue].getName() << " in blue headquarter" << endl;
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
