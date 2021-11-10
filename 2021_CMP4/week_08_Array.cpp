//
//  week_08_Array.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/27.
//

#include "week_08_Array.hpp"
#include "common_lib.h"
#include <array>
#include <math.h>

void run_08() {
    
    //    cout << "hello" << endl;
    const int len = 10;
    //    float fs [10] = {3.14, 2.0, 4.2};
    string strAry [len] = {"hi", "hello", "mtk"};
    //    char str [20];
    
    //    cout << fs << endl;
    
    //    for (int i = 0; i < 10; i++) {
    //        cout << fs[i] << endl;
    //    }
    
    for (int i = len - 1; i >= 0; i--) {
        cout << strAry[i] << endl;
    }
    
//    array<double, 100> arr;
//
//    for (int i = 0; i < arr.size(); i++) {
//        arr[i] = sin(i/arr.size() * 2 * M_PI);
//        cout << "\t\t\t\t" + to_string(arr[i]) << endl;
//    }
    
    int myAry [100];
    
    for (int i = 0; i < 100; i++) {
        myAry[i+1] = ++myAry[i];
//        ++myAry[i];
    }
    
//    for (int e : myAry) {
//        cout << e << endl;
//    }
    
}
