#ifndef CBASE_H
#define CBASE_H

class CBase {
public:
	CBase(int l = 10, int w = 50);
	~CBase();
	void showArea() const;
private:
	int length;
	int width;
};

#endif