#include <iostream>
#include "CBase.h"
#include "CDerived.h"

using namespace std;

int main(int argc, char** argv) {
	CDerived b1(12);
	b1.showArea();
	return 0;
}