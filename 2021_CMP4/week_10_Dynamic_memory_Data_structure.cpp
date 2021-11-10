//
//  week_10_Dynamic_memory_Data_structure.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/11/10.
//

#include "week_10_Dynamic_memory_Data_structure.hpp"
#include "common_lib.h"
#include <new>


struct cat {
    int age;
    string name;
    char color; // 255
};

struct dog {
    
};

struct person {
    
};

struct earth {
    dog d;
    cat c;
    person p;
};

void run_10() {
  
    cat cat1;
    cat cat2;
    
    cat * pcat1;
    cat * pcat2;
    
    pcat1 = &cat1;
    pcat2 = &cat2;
    
    cat1.name = "mimi";
    cat1.age = 15;
    cat2.name = "mami";
    cat2.age = 17;
    
    pcat1->name = "mimi";
    pcat1->age = 12;
    pcat2->name = "mami";
    pcat2->age = 13;
    
    cout << cat1.name << " / " << cat1.age << endl;
    cout << pcat1->name << " / " << pcat1->age << endl;
    
    
//
//    cout << "hello!" << endl;
//
//    int * ptr;
//    ptr = new (nothrow) int [10];
//
//    if (ptr == nullptr) {
//        cout << "Error!" << endl;
//    } else {
//
//        ptr[2] = 192;
//        cout << ptr[2] << endl;
//
//        delete[] ptr;
//        cout << ptr[2] << endl;
//    }
//
    
}
