//
//  week_03_operators.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/09/15.
//

#include "common_lib.h"
#include "week_03_operators.hpp"
#include <bitset> // 2진수를 표기하기 위한 라이브러리

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
    
    
    // bit 연산자
    int b = 3; // 0000 0011
    int c = b & 2; // 0000 0010 -> 00000010
    std::cout << c << std::endl;

    b &= 6; // 00000110
    std::cout << b << std::endl;

    b <<= 1;
    std::cout << b << std::endl;


    // 타입에 따라 달라질 수 있는 bit shift의 결과
    int d = 0b10000110; // 32bit type, 00000000 00000000 00000000 10000110
    std::cout << "before - int: " << (int)d << std::endl;
    
    d <<= 1; // 00000000 00000000 00000001 00001100
    std::cout << "after - int: " << (int)d << std::endl;
    std::cout << "NOT - int: " << std::bitset<sizeof(d) * 8>(~d) <<  std::endl;

    unsigned char e = 0b10000110; // 8bit type, 10000110
    std::cout << "before - uchar: " << (int)e << std::endl;

    e <<= 1; // 00001100
    std::cout << "after - uchr: " << (int)e << "/" << std::bitset<8>(e) << std::endl;
    std::cout << "NOT - uchr: " << std::bitset<sizeof(e) * 8>(~e) <<  std::endl;
    


    
        
}
