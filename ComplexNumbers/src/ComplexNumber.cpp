//
//  ComplexNumber.cpp
//  ComplexNumbers
//
//  Created by Eduard Dzhumagaliev on 1/18/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "ComplexNumber.hpp"

ComplexNumber ComplexNumber::operator+=(const ComplexNumber &r) {
    a += r.a;
    b += r.b;
    return *this;
}

ComplexNumber ComplexNumber::operator-=(const ComplexNumber &r) {
    a -= r.a;
    b -= r.b;
    return *this;
};

ComplexNumber ComplexNumber::operator~() {
    a = round(a);
    b = round(b);
    return *this;
}

ComplexNumber ComplexNumber::operator*=(const ComplexNumber &r) {
    int l = a * r.a - b * r.b;
    b = a * r.b + b * r.a;
    a = l;
    return *this;
};

ComplexNumber ComplexNumber::operator/=(const ComplexNumber &r) {
    int l = a * r.a + b * r.b;
    int n = r.a * r.a + r.b * r.b;
    b = (b * r.a - a * r.b) / n;
    a = l / n;
    return *this;
}

std::ostream& operator<<(std::ostream & out, const ComplexNumber& x) {
    out << x.a;
    if (x.b != 0)
    out << (x.b > 0 ? "+" : "") << x.b << "i";
    return out;
}

ComplexNumber operator+(const ComplexNumber& x, const ComplexNumber& y) {
    ComplexNumber r = x;
    r += y;
    return r;
}

ComplexNumber operator-(const ComplexNumber& x, const ComplexNumber& y) {
    ComplexNumber r = x;
    r -= y;
    return r;
}
    
ComplexNumber operator-(const ComplexNumber& x) {
    return {-x.a, -x.b};
}

ComplexNumber operator/(const ComplexNumber& x, const ComplexNumber& y) {
    ComplexNumber r = x;
    r /= y;
    return r;
}

ComplexNumber operator*(const ComplexNumber& x, const ComplexNumber& y) {
    ComplexNumber r = x;
    r *= y;
    return r;
}

bool operator==(const ComplexNumber &x, const ComplexNumber &y) {
    return (x.a==y.a) && (x.b==y.b);
}

bool operator!=(const ComplexNumber &x, const ComplexNumber &y) {
    return !(x == y);
}

bool operator<(const ComplexNumber &l, const ComplexNumber &r) {
    /*
     Partial order by real part
     */
    return l.a < r.a;
}

bool operator<=(const ComplexNumber &l, const ComplexNumber &r) {
    return (l < r) or (l.a == r.a);
}

bool operator>(const ComplexNumber &l, const ComplexNumber &r) {
    return !(l <= r);
}

bool operator>=(const ComplexNumber &l, const ComplexNumber &r) {
    return !(l < r);
}
