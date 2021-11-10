//
//  week_08_quiz.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/30.
//

#include "common_lib.h"
#include "week_08_quiz.hpp"
#include <array>
#include <cmath>

int eleMult(int arr[], int length) {
    int result = 1;
    for (int i = 0; i < length; i++) {
        result *= arr[i];
    }
    return result;
}

string strRev(string str) {
    string result = "";
    for (int i = ((int)str.size() - 1); i >= 0; i--) {
        result += str[i];
    }
    return result;
}

void run_quiz_08() {
    // n을 주차에 맞는 숫자로 바꾸세요.
    cout << "============== Quiz 08 ==============" << endl;
    
    // 실행해 볼 문제의 번호를 적으세요
    int selected [] = {1,2,3,4,5,6,7,8,9,10,11,12};
    string space = "\n\n";
    
    for (int i : selected) {
        switch (i) {
            case 1:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 2:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 3:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 4:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 5:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 6:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 7:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                int coordinate [3][3];
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        coordinate[i][j] = 3 * i + j + 1 ;
                    }
                }
                                
                
            }
                cout << space << endl;
                break;
                
            case 8:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                int is [] = {4, 5, 2, 7, 1, 5, 7};
                cout << eleMult(is, 7) << endl;
                
            }
                cout << space << endl;
                break;
                
            case 9:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                

                
            }
                cout << space << endl;
                break;
                
            case 10:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                char carr[20] = "sat oct 30";
                
            }
                cout << space << endl;
                break;
            // 11 시작
            case 11:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
            // 11 끝.
                
            // 더 많은 번호가 필요할 경우 '11 시작' - '11 끝' 사이를 복사하고 숫자를 증가시켜 사용하세요.

            case 12:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                string str = "abc123";
                cout << strRev(str) << endl;
                
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
