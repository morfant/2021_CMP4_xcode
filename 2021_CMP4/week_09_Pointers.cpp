//
//  week_09_Pointers.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/31.
//

#include "week_09_Pointers.hpp"
#include "common_lib.h"

float mult(float a, int b) {
    return a*b;
}

float operation (float x, int y, float (*functocall)(float,int))
{
  float g;
  g = (*functocall)(x,y);
  return (g);
}


void run_09() {
    
    float * f;
    float (*funcptr) (float, int) = mult;
    cout << operation(3.12, 10, funcptr) << endl;
    
    
//    int myvar;
//    int i_arr [10] = {1,2,3};
//    int *foo = &myvar;
//    foo = i_arr;
//    int *bar = foo;
//
//    cout << bar[2] << endl;
//
    
    
    
//    int x = 100;
//    int*y;
////    int *y;
//    double * d;
//
//    y = &x;
//
//    float f = 10.2;
//    int i = 0;
//
//    i = int (f);
//
//    cout << sizeof(y) << sizeof(d) << endl;
//
//    int myvar;
//    int * myptr;
//    *myptr = *(&myvar);
//
//    int x; // 200
//    int y; // 300
    
//
//    int myvar;
//    int i_arr [10];
//    int *foo = &myvar;
//    int *bar = foo;
//    foo = i_arr;
//
  
//    float f = 3.1;
//    int a = (int)f;
//    int a = int (f);
//
//    int arr [5] = {1, 2, 3, 4, 5};
//    int * p = arr;
//    *p++   // *(p++) --> 1
//    *++p   // *(++p) --> 2
//    ++*p   // ++(*p) --> 2
//    (*p)++ // (*p)++ --> 1
    
//    cout << *p++ << endl;
//    cout << *++p << endl;
//    cout << ++*p << endl;
//    cout << (*p)++ << endl;
    
    
//    int* p = nullptr;
//    int* q = 0;
        
    
    
//    if (p == q) {
//        cout << "same!" << endl;
//        cout << *p << endl;
//    }
    
    
//    cout << &sum << endl;
    
    

    
    
    



    
}
