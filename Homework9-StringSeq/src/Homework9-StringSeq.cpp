//============================================================================
// Name        : Homework9-StringSeq.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : String Sequence in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <list>
using namespace std;

class A{
private:
        string name;
public:
        A(string n) :name(n){}
        friend bool operator < (const class A& a1, const class A &a2);
        friend bool operator == (const class A &a1, const class A &a2){
                if (a1.name.size() == a2.name.size())
                        return true;
                else
                        return false;
        }
        friend ostream & operator << (ostream &o, const A &a){
                o << a.name;
                return o;
        }
        string get_name() const{
                return name;
        }
        int get_size() const{
                return name.size();
        }
};
bool operator< (const A& a1, const A &a2) {
    return a1.name.size() < a2.name.size();
};

template <class Iterator, class Function>
void Show(Iterator begin, Iterator end, Function print)
{
	for (Iterator it = begin; it != end; it++)
	{ print(*it); }
}

class Print{
public:
	void operator()(const A &a) { cout << a.get_name() << " "; }
};

template <class T>
struct MyLarge {
    inline bool operator()(const T &a1, const T &a2) {
        return a1.get_name() < a2.get_name();
    }
};

int main(int argc, char* argv[])
{
        list<A> lst;
        int ncase, n, i = 1;
        string s;
        cin >> ncase;
        while (ncase--){
                cout << "Case: "<<i++ << endl;
                cin >> n;
                for (int i = 0; i < n; i++){
                         cin >> s;
                         lst.push_back(A(s));
                }
                lst.sort();
                Show(lst.begin(), lst.end(), Print());

                cout << endl;
                lst.sort(MyLarge<A>());
                Show(lst.begin(), lst.end(), Print());
                cout << endl;
                lst.clear();
        }
        return 0;
}
