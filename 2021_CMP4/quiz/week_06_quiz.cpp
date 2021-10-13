//
//  week_06_quiz.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/13.
//

#include "common_lib.h"
#include "week_06_quiz.hpp"

int fib(int n) {
    
    int rslt = 0;
    if (n >= 0) {
        
        if (n == 0) {
            rslt = 0;
        } else if (n == 1) {
            rslt = 1;
        } else {
            rslt = fib(n-1) + fib(n-2);
        }

    }
    
    return rslt;
}

void printMinus(int n) {
    string str = "";
    for (int i = 0; i < n; i++) {
        str += "-";
    }
    cout << str << endl;
}


void run_quiz_06() {
    cout << "============== Quiz 06 ==============" << endl;
    
    cout << "--------1--------" << endl;
    
    // f0 = 0, f1 = 1, fn+2 = fn + fn+1
    
//    cout << fib(6) << endl;
    
    for (int i = 0; i < 10; i++) {
        printMinus(fib(i));
    }
    
    cout << endl;
    cout << "--------2--------" << endl;
    
//    string str = "Hello, World!";
//        
//        for (int c: str)
//        {
//            cout << c << "/";
//        }

    int x = 0;
        
        cout << "1 ~ 3 중 하나의 숫자를 입력하세요." << endl;
        cin >> x;
        
        while(x < 4) {
    switch (x)
    {
        case 1:
            cout << "*******************************" << endl;
            break;
        case 2:
            cout << "-----------------------------------" << endl;
            break;
        case 3:
            cout << "|||||||||||||||||||||||||||||||||||||||||||||" << endl;
    };
            cout << "다른 숫자를 입력해주세요." << endl;
            cin >> x;
        }

    
}
