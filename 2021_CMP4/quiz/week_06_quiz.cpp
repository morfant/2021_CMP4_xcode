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

int mod(int a, int b = 7) {
    int result = 0;
    result = a % b;
    return result;
}

int multiply(int a, int b = 2) {
    return a*b;
}

template <class T>
T mult(T a, T b) {
    return a * b;
}

void con(string& a, string& b) {
    cout << a + b << endl;
}

void run_quiz_06() {
    cout << "============== Quiz 06 ==============" << endl;
    
    int selected [] = {1,2,3,4,5,6,7,8,9,10};
    string space = "\n\n";
    
    for (int i : selected) {
        switch (i) {
            case 1:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                cout << mod(9543, 3) << endl;
                
            }
                cout << space << endl;
                break;
                
            case 2:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                string a = "Hello";
                string b = " World!";
                con(a, b);
            }
                cout << space << endl;
                break;
                
            case 3:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                cout << multiply(9543) << endl;
                
            }
                cout << space << endl;
                break;
                
            case 4:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                cout << "1) test() 함수의 선언이 main() 함수 이전이어야 함.\n2) test() 함수의 리턴 타입을 string으로 수정해야 함." << endl;

            }
                cout << space << endl;
                break;
                
            case 5:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                printMinus(5); // "-----"
                
            }
                cout << space << endl;
                break;
                
            case 6:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                cout << fib(10) << endl;
                
            }
                cout << space << endl;
                break;
                
            case 7:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                for (int i = 0; i < 10; i++) {
                    printMinus(fib(i));
                }
            }
                cout << space << endl;
                break;
                
            case 8:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                cout << "c++은 인자의 수나 타입이 다를 경우 같은 이름의 함수 정의(overload)를 허용한다." << endl;
            }
                cout << space << endl;
                break;
                
            case 9:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                cout << "리턴값만 다른 경우의 함수 중복(overload)이 불가능하다." << endl;
                
            }
                cout << space << endl;
                break;
                
            case 10:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                cout << mult(10.2f, 4.5f) << endl;
                
                double a = 3.14, b = 3.6;
                cout << mult(a, b) << endl;
                
            }
                cout << space << endl;
                break;
                
            case 11:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
            }
                cout << space << endl;
                break;
                
            default:
            {
                
            }
                break;
        }
        
    }
 

    
}
