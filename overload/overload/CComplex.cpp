#include <iostream>
#include "CComplex.h"

CComplex::CComplex() {
    real = 0;
    imag = 0;
}

CComplex::CComplex(int r, int i) {
    real = r;
    imag = i;
}

CComplex::~CComplex() {
}

const CComplex CComplex::operator+(CComplex& o2) {
    CComplex t;
    t.real = real + o2.real;
    t.imag = imag + o2.imag;
    return t;
}

const CComplex CComplex::operator+(int r) {
    CComplex t;
    t.real = real + r;
    t.imag = imag;
    return t;
}

const void CComplex::display() {
    std::cout << "(" << real << "," << imag << ")" << std::endl;
}

void CComplex::operator+=(CComplex& o2) {
    real += o2.real;
    imag += o2.imag;
}

//overloading as friend functions
CComplex operator+(int r, CComplex& o1) {
    CComplex t;
    t.real = r + o1.real;
    t.imag = o1.imag;
    return t;
}

CComplex operator-(CComplex& o1) {
    return CComplex(-o1.real, -o1.imag);
}

//overloading as i/o stream
std::ostream& operator<<(std::ostream& out, CComplex& c) {
    out << "(" << c.real << "," << c.imag << "i)" << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, CComplex& c) {
    in >> c.real >> c.imag;
    return in;
}
