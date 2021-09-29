//
//  week_02_variable.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/09/08.
//

#include "common_lib.h"
#include "week_02_variable.hpp"
#define NEW_LINE '\n'

using namespace std;

void run_02() {
    cout << "============ Week 02 ============" << endl;

    // view memory 실습
    int myInt = 65536;
    cout << &myInt << endl; // 변수의 메모리상 주소 확인 '&'
    cout << sizeof(myInt) << endl;

    // int 리터럴 10, 8, 16진수 표기법
    int myInt1 = 90; // dec(10진수)
    int myInt2 = 0132; // oct(8진수)
    int myInt3 = 0x5a; // hex(16진수)
    cout << myInt1 << " / " << myInt2 << " / " << myInt3 << endl;

    // int 리터럴의 접미사를 통해서 타입 결정하기
    auto myInt4 = 75;
    auto myInt5 = 75ll;
    cout << sizeof(myInt4) << " / " << sizeof(myInt5) << endl;

    // 'e'의 사용
    int myInt6 = 3.14e3;
    cout << myInt6 << endl;

    // char 리터럴의 접두사로 타입 결정하기
    auto myChar1 = 'a';
    auto myChar2 = u'a';
    cout << sizeof(myChar1) << " / " << sizeof(myChar2) << endl;

    // 전처리구문(#define)을 통해 상수 만들기
    cout << "Hello" << NEW_LINE << "World!" << endl;

    // 특수한 char 리터럴
    auto str = "Left\tRight";
    cout << str << endl;
    str = "one\ntwo\nthree";
    cout << str << endl;
    str = "one\rtwo\rthree";
    cout << str << endl;
    str = "Hello \'MTK\'!";
    cout << str << endl;

    // 문자열 리터럴의 접두사(prefix)
    str = R"(string "with" \tackslash)"; //raw string
    cout << str << endl;
    
    int a = 126;
    int b = 0;
    ((3<=4) || (b = ++a));
    cout << b << endl;

}
