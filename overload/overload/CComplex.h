
#ifndef CCOMPLEX_H
#define CCOMPLEX_H


class CComplex {
public:
    CComplex();
    CComplex(int r, int i);
    ~CComplex();
    const CComplex operator+(CComplex& o2);
    const CComplex operator+(int r);
    void operator+=(CComplex& o2);
    friend CComplex operator+(int r, CComplex& o1);
    friend CComplex operator-(CComplex& o1);
    const void display();
private:
    int real;
    int imag;
};


#endif // CCOMPLEX_H
