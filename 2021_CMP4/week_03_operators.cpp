//
//  week_03_operators.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/09/15.
//

#include "common_lib.h"
#include "week_03_operators.hpp"

#include <bitset>

using namespace std;

void run_03() {
    cout << "============ Week 03 ============" << endl;
    
    // 대입 연산자
    int x, y, z;
    x = y = z = 3;
    cout << x << y << z << endl;

    y = 2 + (x = 5);
    cout << y << endl;

    // 복합대입 연산자
    x = 10;
    x = x + 1;
    x += 1;
    cout << x << endl; // ??


    // 증감 연산자의 접두사prefix 사용과 접미사suffix 사용의 차이점
    x = 3;
    y = ++x;
    cout << "prefix y: " << y << endl;
    
    x = 3;
    y = x++;
    cout << "suffix y: " << y << endl;
    
    
    
    
        
}
