// ProjectTutorial12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

struct Squirl
{
private:
    int a;
    
public:
    
    void EnteringData(){
        cout << "Enter a: " << endl;
        cin >> a;
        Processing(a);
    }

    void Processing(int a) {
        cout << "Perimetr is: " << endl;
        cout << a * 4 << endl;
        cout << "Square is: " << endl;
        cout << a * a;
    }

};


struct Rectangle {

private:
    int a;
    int b;

public:
    void EnteringData() {
        cout << "Enter a: " << endl;
        cin >> a;
        cout << "Enter b: " << endl;
        cin >> b;
        Processing(a, b);
    }

    void Processing(int a, int b) {
        cout << "Perimetr is: " << endl;
        cout << (a * a) + (b * b) << endl;
        cout << "Square is: " << endl;
        cout << a * b;
    }
};

struct Romb 
{
private:
    int a;
    int d1;
    int d2;
public:

    void EnteringData() {
        cout << "Enter a: " << endl;
        cin >> a;
        cout << "Enter d1: " << endl;
        cin >> d1;
        cout << "Enter d2: " << endl;
        cin >> d2;
        Processing(a);
    }

    void Processing(int a) {
        cout << "Perimetr is: " << endl;
        cout << a * 4 << endl;
        cout << "Square is: " << endl;
        cout << 1 / 2 * (d1 * d2);
    }

};

struct Trapezoid {
private:
    int a;
    int b;
    int h;
    int c;
    int d;
public:
    void EnteringData() {
        cout << "Enter a: " << endl;
        cin >> a;
        cout << "Enter b: " << endl;
        cin >> b;
        cout << "Enter h: " << endl;
        cin >> h;
        cout << "Enter c: " << endl;
        cin >> c;
        cout << "Enter d: " << endl;
        cin >> d;
        Processing(a,b,h,c,d);
    }   

    void Processing(int a,int b, int h ,int c , int d) {
        cout << "Perimetr is: " << endl;
        cout << a + b + c + d << endl;
        cout << "Square is: " << endl;
        cout << (a + b) * h / 2;
    }

};

int main()
{
    Squirl obj1;
    Rectangle obj2;
    Romb obj3;
    Trapezoid obj4;
    int choose;
    cout << "Enter number for choose , 1 is Square , 2 is rectangle , 3 is Romb and 4 is trapezoid" << endl;
    cin >> choose;
    if (choose == 1) {
        obj1.EnteringData();
    }
    else if (choose == 2) {
        obj2.EnteringData();
    }
    else if (choose == 3) {
        obj3.EnteringData();
    }
    else if (choose == 4) {
        obj4.EnteringData();

    }
    else {
        cout << "Something goes wrong , restart and try again.";
    }
    

}

    
