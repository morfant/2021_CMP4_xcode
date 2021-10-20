//
//  week_06_functions.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/05.
//

#include "common_lib.h"
#include "week_06_functions.hpp"


// 함수 템플릿
template <class T>
T max_(T a, T b) {
    return a > b ? a : b;
}


// 함수의 선언(Declaration)
int addition(int a, int b);
void duplicate_Val (int a, int b, int c); // pass by value
void duplicate_Ref (int& a, int& b, int& c); // pass by ref
string concatenate(const string& a, const string& b);
void countDown(int a);
long factorial(int a);



void run_06() {
    
    // 값으로 전달(pass by value)된 파라미터 확인하기
    addition(255, 5);
    printf("%p\n", &addition);
    
    
    // 값으로 전달 vs 참조로 전달 : 외부 변수와의 연결성 확인
    int x=1, y=3, z=7;
    duplicate_Val (x, y, z);
//    duplicate_Ref(x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl;

    
    // 참조(reference)로 전달
    string str1 = "mtk ";
    string str2 = "hi";
    cout << concatenate(str1, str2) << endl;
    
    
    // 함수 템플릿의 사용
    long a = 20;
    long b = 30;
    cout << max_(a, b) << endl;
    
    
    // 재귀 함수 실행
    countDown(10);
    cout << factorial(10) << endl;

}


// 함수의 정의(Definition)
int addition(int a, int b) {
    int r;
    r = a + b;
    return r;
}

void duplicate_Val (int a, int b, int c) // pass by value
{
  a *= 2; // a = a * 2
  b *= 2;
  c *= 2;
}

void duplicate_Ref (int& a, int& b, int& c) // pass by ref
{
  a *= 2;
  b *= 2;
  c *= 2;
}


string concatenate(const string& a, const string& b) {
    return a + b;
}

// 재귀(recursive) 함수
void countDown(int a) {
    if (a > 0) {
        cout << a << endl;
        countDown(a - 1);
    } else {
        cout << a << endl;
    }
}

// 재귀(recursive) 함수 - factory 구하기
long factorial(int a) {
    if (a > 1) {
        return a * factorial(a - 1);
    } else {
        return 1;
    }
}

