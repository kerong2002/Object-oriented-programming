#include <iostream>
#include "CComplex.h"
#include "CCount.h"
using namespace std;

int main(int argc, char** argv) {
	//CComplex overloading binary or unary
	/*
	CComplex c1(12, -20), c2(-5, 9), c3;
	c3 = c1 + c2; c3.display();
	c3 = c1 + 10; c3.display();
	c3 = -8 + c2; c3.display();
	c2 += c1;  c2.display();
	c1 = -c3;  c1.display();
	*/

	//CCount overloading friend or member difference
	/*
	CCount d1(10), d2;
	d2 = d1++;
	d1.display(); d2.display(); cout << endl;
	d2 = ++d1;
	d1.display(); d2.display(); cout << endl;
	++++d1;
	d1.display(); d2.display(); cout << endl;
	*/

	//overloading i/o stream
	CComplex c1(2, 5), c2(-3, -2), c3, c4, c5, c6;
	c3 = c1 + c2;
	cout << c3 << c2;
	cin >> c4 >> c5;
	c6 = c4 + c5;
	cout << c4 << c5 << c6;
	return 0;
}

