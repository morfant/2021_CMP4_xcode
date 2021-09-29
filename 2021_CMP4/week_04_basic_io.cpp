//
//  week_04_basic_io.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/09/29.
//

#include "common_lib.h"
#include "week_04_basic_io.hpp"

using namespace std;


void run_04() {
    cout << "============ Week 04 ============" << endl;

    // cin 의 사용
    int age;
    cout << "age: ";
    cin >> age;
    cout << age << endl;

    // getline()의 사용
    string myStr;
    cout << "name? ";
    getline(cin, myStr);
    cout << myStr << endl;
    
    // streamstring
    string sstr = "1024";
    int myInt;
//    myInt = int (sstr); (x)
    stringstream(sstr) >> myInt;
    cout << myInt + 10 << endl;


}
