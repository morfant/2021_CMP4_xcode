//
//  week_03_quiz.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/13.
//

#include "common_lib.h"
#include "week_03_quiz.hpp"

void run_quiz_03() {
    cout << "============== Quiz 03 ==============" << endl;
    
    /*
    cout << "--------4--------" << endl;
    cout << "위 코드의 실행결과 x, y, z, a의 값은?" << endl;

    int x, y, z = 11;
    y = ++z;
    x = y++;
    z = --x;
    x %= 3;

    int a;
    a = ((x + z) >= y);
    
    cout << x << "/ " << y << "/ " << z << "/ " << a << endl;
    */

    
    /*
    cout << "--------8--------" << endl;
    cout << "c 의 값은?" << endl;

    int a, b, c = 0;
    a = (b = 3, --b);
    c = (a += b++, a * b);

    cout << c << endl;
    */
    
    
    cout << "--------9--------" << endl;
    cout << "a의 값을 이진수로 나타내시오." << endl;
    unsigned char a, b, c = 0b01101101;
    b = ~c; // b = 10010010, c = 01101101
    b <<= 1; // b =                       00100100
    a = b ^ c; // 01001001

    cout << bitset<sizeof(a) * 8>(a) << endl;

}
