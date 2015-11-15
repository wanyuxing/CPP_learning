//============================================================================
// Name        : Homework6-Fill1.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Fill1 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
class CArray3D {
    // new class
    class CArray2D {
        //new class
        class CArray1D {
            T * ts;
        public:
            CArray1D(int k) {
                ts = new T[k];
            }
            T& operator[](int k) {
                return ts[k];
            }
        };
        // class CAraay1D end
    private:
        CArray1D** ca1Ds;
    public:
        CArray2D(int j, int k) {
            ca1Ds = new CArray1D*[j];
            for (int index = 0; index < j; index++) {
                CArray1D* ca1d = new CArray1D(k);
                ca1Ds[index] = ca1d;
            }
        }
        CArray1D & operator[](int j) {
            return *ca1Ds[j];
        }
    };
    // class CAraay1D end
private:
    CArray2D** ca2Ds;
public:
    CArray3D(int i, int j, int k) {
        ca2Ds = new CArray2D*[i];
        for (int index = 0; index < i; index++) {
            CArray2D* ca2d = new CArray2D(j, k);
            ca2Ds[index] = ca2d;
        }
    }
    CArray2D & operator[](int i) {
        return *ca2Ds[i];
    }
};

int main()
{
    CArray3D<double> a(3, 4, 5);
    double No = 0.5;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            for (int k = 0; k < 5; ++k)
                a[i][j][k] = No++;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            for (int k = 0; k < 5; ++k)
                cout << a[i][j][k] << ",";
    return 0;
}

