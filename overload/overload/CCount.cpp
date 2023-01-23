#include <iostream>
#include "CCount.h"

CCount::CCount() {
	cnt = 0;
}

CCount::CCount(int n){
	cnt = n;
}

void CCount::display() {
	std::cout << cnt << " ";
}

//overloading member function
CCount& CCount::operator++() {
	cnt++;
	return *this;
}

CCount CCount::operator++(int take) {
	CCount tmp = *this;
	(*this).cnt++;
	return tmp;
}

//overloading friend function
CCount& operator--(CCount& o1) {
	o1.cnt--;
	return o1;
}

CCount operator--(CCount& o1,int take) {
	CCount tmp = o1;
	o1.cnt--;
	return tmp;
}
