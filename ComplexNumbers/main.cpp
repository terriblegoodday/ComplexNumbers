//
//  main.cpp
//  ComplexNumbers
//
//  Created by Eduard Dzhumagaliev on 1/18/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include <iostream>
#include "ComplexNumber.hpp"

int main(int argc, const char * argv[]) {
    
    // Test for outputting "positive" complex numbers
    ComplexNumber a{3, 1};
    ComplexNumber b{2, -1};
    ComplexNumber c = (a - b);
    std::cout << c << std::endl;
    
    // Test for outputting "negative" complex numbers
    ComplexNumber d{3, 1};
    ComplexNumber e{5, -1};
    std::cout << d - e << std::endl;
    
    // Test for outputting zero complex numbers
    std::cout << d - d << std::endl;
    
    return 0;
}
