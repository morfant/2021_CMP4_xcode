//
//  week_09_quiz.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/31.
//

#include "common_lib.h"
#include "week_09_quiz.hpp"

void increase (void* data, int psize)
{
  if ( psize == sizeof(char) )
  { char* pchar; pchar=(char*)data; ++(*pchar); }
  else if (psize == sizeof(int) )
  { int* pint; pint=(int*)data; ++(*pint); }
}

void run_quiz_09() {
    // n을 주차에 맞는 숫자로 바꾸세요.
    cout << "============== Quiz 09 ==============" << endl;
    
    // 실행해 볼 문제의 번호를 적으세요
    int selected [] = {4};
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
                
                int x = 20;
                int * ptr = &x;
                
                cout << *ptr << " -> " << &(*ptr) << " -> " << *(&(*ptr)) << endl;
                
            }
                cout << space << endl;
                break;
                
            case 4:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                

                
                
            }
                cout << space << endl;
                break;
                
            case 5:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                int arr [5] = {1, 2, 3, 4, 5};
                int * p = arr;
                cout << *p++ << endl; // 1
                cout << *++p << endl; // 3
                cout << ++*p << endl; // 4
                cout << (*p)++ << endl; // 4
                
                cout << space << endl;
                
                for (int i : arr) {
                    cout << i << endl;
                }
                
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
                
                  char a = 'x';
                  int b = 1602;
                  increase (&a, sizeof(a));
                  increase (&b, sizeof(b));
                  cout << a << ", " << b << '\n';


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
