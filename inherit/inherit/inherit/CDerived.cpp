#include <iostream>
#include "CDerived.h"

CDerived::CDerived(int h)
	:CBase()
{
	high = h;
}

CDerived::~CDerived() {

}

void CDerived::showArea() const {
	std::cout << "high:" << high << std::endl;
}