//
//  week_05_flow_control.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/05.
//

#include "common_lib.h"
#include "week_05_flow_control.hpp"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

using namespace this_thread;
using namespace chrono;

void run_05() {
    
//    int n = 10; // 초기화
//
//    while (n > 0) { // 조건
//        cout << n << ", ";
//        --n; // 증감표현식
////        sleep_for (milliseconds(100));
//    }
//
//    cout << endl;
//
//    for (int n = 10; n > 0; --n) { // cpp
//        cout << n << ", ";
//    }
//
//    n = 0;
//    for (;n<10;) {
//        --n;
//    }
//
//    cout << endl;
//
//    string str;
//    do {
//        cout << "Enter text: ";
//        getline(cin, str);
//        cout << "Your entered: " << str << '\n';
//    } while (str != "goodbye");
//
//
//    cout << endl;
    
    string str {"Hello!"}; // ⇒ ‘H’, ‘e’, ‘l’, ‘l’, ‘o’, ‘!’
//    string str = “Hello!”;

    // str이 char의 연속체이므로 그 요소(element)인 char c로 선언이 가능하다.
    // c는 str 안의 모든 char 값을 돌아가며 가지게 된다.
    for (char c : str)
      {
        cout << "[" << c << "]";
      }
    cout << '\n';
    
//    "Hello!".do{|c, i| c.postln; };
    
//    for (var i = 0 ; i < 100 ; i++) {
//
//    }
    
    
//    for (int n = 10; n > 0; n--)
//    {
//        cout << n << ", ";
//        if (n == 3)
//        {
//          cout << "countdown aborted!";
//          break; // 조건과 상관없이 루프를 벗어나게 한다
//        }
//    }
    
    cout << endl;
    
    for (int n = 5; n > 0; n--) {
       if (n == 3) continue;
       cout << n << ", ";
     }
     cout << "liftoff!\n";
    
    
    
    
    
    int n=10;
   mylabel:
     cout << n << ", ";
     n--;
     if (n>0) goto mylabel; // 아무런 조건 없이 정해진 라벨로 점프한다.
     cout << "liftoff!\n";
    
    
    int x = 1;
    
    switch (x) {
        case 1:
            cout << "x = 1" << endl;
//            break;
            
        case 2:
            cout << "x = 2" << endl;
            break;
            
        default:
            cout << "x 값은 반드시 있어야 합니다!";
            break;
    }
    
    
    
    
}
