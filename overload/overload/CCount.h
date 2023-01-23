#ifndef CCOUNT_H
#define CCOUNT_H

class CCount {
public:
	CCount();
	CCount(int);
	void display();
	CCount& operator++();
	CCount operator++(int);
	friend CCount& operator--(CCount&);		//prefix
	friend CCount operator--(CCount&, int); //postfix
private:
	int cnt;
};

#endif