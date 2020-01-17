//
//  ComplexNumber.hpp
//  ComplexNumbers
//
//  Created by Eduard Dzhumagaliev on 1/18/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef ComplexNumber_hpp
#define ComplexNumber_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>

struct ComplexNumber {
    /*
     A complex number is a number that can be expressed in the form a + bi, where a and b are real numbers, and i is a solution of the equation x² = −1.
     This structure has **lexical order** – *he numbers are sorted by their real part
     */
    float a; // Real part
    float b; // Imaginary part
    
    ComplexNumber operator+=(const ComplexNumber &r);
    ComplexNumber operator-=(const ComplexNumber &r);
    ComplexNumber operator*=(const ComplexNumber &r);
    ComplexNumber operator/=(const ComplexNumber &r);
    ComplexNumber operator~();
    
};

ComplexNumber operator+(const ComplexNumber& x, const ComplexNumber& y);
ComplexNumber operator-(const ComplexNumber& x, const ComplexNumber& y);
ComplexNumber operator-(const ComplexNumber& x);
ComplexNumber operator*(const ComplexNumber& x, const ComplexNumber& y);
ComplexNumber operator/(const ComplexNumber& x, const ComplexNumber& y);

bool operator==(const ComplexNumber &l, const ComplexNumber &r);
bool operator!=(const ComplexNumber &l, const ComplexNumber &r);
bool operator<(const ComplexNumber &l, const ComplexNumber &r);
bool operator<=(const ComplexNumber &l, const ComplexNumber &r);
bool operator>(const ComplexNumber &l, const ComplexNumber &r);
bool operator>=(const ComplexNumber &l, const ComplexNumber &r);

std::ostream& operator<<(std::ostream & out, const ComplexNumber& x);

#endif /* ComplexNumber_hpp */
