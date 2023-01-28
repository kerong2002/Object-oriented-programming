#ifndef CDERIVED_H
#define CDRIVED_H
#include "CBase.h"

class CBase;

class CDerived : public CBase {
public:
	CDerived(int h = 20);
	~CDerived();
	void showArea() const;
private:
	int high;
};

#endif
