#ifndef _COMPLEX_H_
#define _COMPLEX_H_ _COMPLEX_H_

#include <iostream>

class Complex {
    double re, im;

    public:
        Complex(double re, double im) : re(re), im(im) {}
        Complex():Complex(0, 0) {}

        double getRe() {
            return this->re;
        }

        double getIm() {
            return this->im;
        }

        Complex operator~() const {
            return Complex(this->re, -(this->im));
        }

        Complex operator+(const Complex& c) const {
            return Complex(this->re + c.getRe(), this->im + c.getIm());
        }

        Complex operator-(const Complex& c) const {
            return Complex(this->re - c.getRe(), this->im - c.getIm());

        }

        Complex operator*(const Complex& c) const {
            return Complex(this->re*c.getRe() - this->im*c.getIm(), 
                           this->re*c.getIm() + this->im*c.getRe());
        }

        Complex operator/(const Complex& c) {
            Complex kc = ~c;
            Complex z = *this * kc;
            Complex n = c * kc;
            return Complex(z.re/n.re, z.im/n.re);
        }
};

#endif //_COMPLEX_H_