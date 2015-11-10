//============================================================================
// Name        : Testing.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Word in C++, Ansi-style
//============================================================================

#include <iostream>

#include <string>

#include <cstdlib>

using namespace std;

class STUDENT

{

public:

void readStudent();

string readInfo(int index);

void printInfo();

private:

string buff;

string name,id;

int age;

int gra1,gra2,gra3,gra4;

int avegra;

};

void STUDENT::printInfo(){

avegra=(gra1+gra2+gra3+gra4)/4;

cout<<name<<','<<age<<','<<id<<','<<avegra<<endl;

}

void STUDENT::readStudent(){

cin >> buff;

name=readInfo(0);

age=std::atoi(readInfo(1).c_str());

id=readInfo(2);

gra1=std::atoi(readInfo(3).c_str());

gra2=std::atoi(readInfo(4).c_str());

gra3=std::atoi(readInfo(5).c_str());

gra4=std::atoi(readInfo(6).c_str());

}

string STUDENT::readInfo(int index){

string newbuff=buff;

for(int i=1;i<=index;i++){

int pos=newbuff.find(',',0);

newbuff.erase(0,pos+1);

}

int pos=newbuff.find(',',0);

return newbuff.substr(0,pos);

}

int main(){

STUDENT A;

A.readStudent();

A.printInfo();

}
