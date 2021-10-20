//
//  week_07_name_visibility.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/17.
//

#include "common_lib.h"
#include "week_07_name_visibility.hpp"

int nums [11];

namespace mtk {
    int b = 20;
}

namespace mtk {
    int a = 30;
}

void run_07() {
    
    int dums [11];
    
    cout << mtk::b + mtk::a << endl;
    
    cout << "Array on global scope" << endl;
    for (int i = 0; i < 11; i++) {
        cout << i << ": " << nums[i] << endl;
    }
    
    cout << "Array on local scope" << endl;
    for (int i = 0; i < 11; i++) {
        cout << i << ": " << dums[i] << endl;
    }
    
    
    
    
    
}
