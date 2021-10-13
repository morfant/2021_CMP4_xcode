//
//  week_05_quiz.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/07.
//

#include "common_lib.h"

void run_quiz_05() {
    cout << "============== Quiz 05 ==============" << endl;
    
    cout << "--------1--------" << endl;
    
    
    
    
    
    cout << "--------2--------" << endl;
    
    cout << "3" << endl;
    
    cout << "4" << endl;
    
    cout << "5" << endl;
    
    cout << "6" << endl;
    
    cout << "7" << endl;
    
    
    
    
    int n = 0;
    
    while(true) {
    
        cout << "input number 1 ~ 3: ";
        cin >> n;
        
        if (n >= 0 && n < 4) {
            switch (n) {
                case 1:
                    cout << "*" << endl;;
                    break;
                    
                case 2:
                    cout << "-" << endl;
                    break;
                    
                case 3:
                    cout << "|" << endl;
                    break;
                    
                default:
                    break;
            }
        } else {
            break;
        }
    }
    
}
