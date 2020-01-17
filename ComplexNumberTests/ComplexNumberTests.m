//
//  ComplexNumberTests.m
//  ComplexNumberTests
//
//  Created by Eduard Dzhumagaliev on 1/18/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "ComplexNumber.hpp"
#include "NSExceptionWrapper.m"

@interface ComplexNumberTests : XCTestCase

@end

@implementation ComplexNumberTests

- (void)testAddition {
    ComplexNumber a{2, 2}, b{4, 4};
    XCTAssertEqual(a + a, b);
    ComplexNumber c{6, 6};
    XCTAssertEqual(a + b, c);
    b = {-2, -2};
    ComplexNumber z{0, 0};
    XCTAssertEqual(a + b, z);
}

- (void)testSubtraction {
    ComplexNumber a{2, 2}, b{4, 4}, c{-2, -2}, z{0, 0};
    XCTAssertEqual(a - b, -a);
    XCTAssertEqual(a - b - c, z);
}

- (void)testMultiplication {
    ComplexNumber a{3, 2}, b{1, 7}, c{-11, 23}, z{0, 0};
    XCTAssertEqual(a * b, c);
    XCTAssertEqual(b * a, c);
    XCTAssertEqual(a * z, z);
    XCTAssertEqual(z * a, z);
}

- (void)testDivision {
    ComplexNumber a{3, 4}, b{2, 1}, c{2, 1}, z{0, 0};
    // rounding operator
    XCTAssertEqual(a / b, c);
}

- (void)testEq {
    ComplexNumber a{-2, 2}, b{-2, 2};
    XCTAssertTrue(a == b);
    XCTAssertTrue(a == a);
}

- (void)testIneq {
    ComplexNumber a{-2, 2}, b{-2, 3};
    XCTAssertTrue(a != b);
}

- (void)testLess {
    ComplexNumber a{-2, 2}, b{4, 2};
    XCTAssertTrue(a < b);
}

- (void)testLessEq {
    ComplexNumber a{-2, 2}, b{-2, 3};
    XCTAssertTrue(a <= b);
}

- (void)testGreater {
    ComplexNumber a{4, 2}, b{3, 2};
    XCTAssertTrue(a > b);
}

- (void)testGreaterEq {
    ComplexNumber a{4, 2}, b{4, 3};
    XCTAssertTrue(a >= b);
}

@end
