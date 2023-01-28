#include <iostream>
#include "CBase.h"
CBase::CBase(int l, int w) {
	length = l;
	width = w;
}

CBase::~CBase() {
	
}

void CBase::showArea() const{
	std::cout << "length:" << length << std::endl;
	std::cout << "width" << width << std::endl;
}