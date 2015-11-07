//============================================================================
// Name        : Homework1-Testing.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Testing in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student
{
private:
	char name[10];
	int age, number, score[4];
public:
	Student(char myname[], int myage, int mynumber, int score1, int score2, int score3, int score4)
	{
		strcpy(name, myname);
		age = myage;
		number = mynumber;
		score[0] = score1;
		score[1] = score2;
		score[2] = score3;
		score[3] = score4;
	}

	char *getName()
	{ return name; }

	int getAge()
	{ return age; }

	int getNumber()
	{ return number; }

	int aveScore()
	{ return (score[0] + score[1] + score[2] + score[3]) / 4; }
};

int main() {
	char name[10], a;
	int age, number, score[4];
	cin.getline(name, 10, ',');
	cin >> age >> a >> number >> a >> score[0] >> a >> score[1] >> a >> score[2] >> a >> score[3];
	Student b(name, age, number, score[0], score[1], score[2], score[3]);
	cout << b.getName() << ',' << b.getAge() << ',' << b.getNumber() << ',' << b.aveScore() << endl;
	return 0;
}
