//
//  quiz_template.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/30.
//


/*
 이 파일은 템플릿 파일이므로 수정하지 마세요.
 주차별로 퀴즈 파일을 만드신 후 아래 내용을 붙여넣고 필요한 부분을 수정해서 사용하세요.
*/
#include "common_lib.h"
#include <stdio.h>

// 아래 'n' 을 주차에 맞는 숫자로 바꾸세요. ex) 01, 02.. 10, 11
void run_quiz_n() {
    // n을 주차에 맞는 숫자로 바꾸세요.
    cout << "============== Quiz n ==============" << endl;
    
    // 실행해 볼 문제의 번호를 적으세요
    int selected [] = {1,2,3,4,5,6,7,8,9,10,11};
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
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 8:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 9:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
            }
                cout << space << endl;
                break;
                
            case 10:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                // 이 주석을 지우고 답을 작성 하세요
                
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
                
            default:
            {
                
            }
                break;
        }
    }
 

    
}
