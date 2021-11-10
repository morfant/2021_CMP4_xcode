//
//  week_05_quiz.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/07.
//

#include "common_lib.h"

void run_quiz_05() {
    cout << "============== Quiz 05 ==============" << endl;
    
    int selected [] = {6,7};
    string space = "\n\n";
    
    for (int i : selected) {
        switch (i) {
            case 1:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                int x;
                cout << "x = " ;
                cin >> x;
                if (x < 10)
                    cout << "XS" << "\n" << endl;
                else if (x < 20)
                    cout << "S" << endl;
                else if (x < 30)
                    cout << "M" << endl;
                else
                    cout << "L" << endl;
            }
                cout << space << endl;
                break;
                
            case 2:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                int a = 0;
                while (a <= 100) {
                    cout << a << ", ";
                    ++a;
                };
            }
                cout << space << endl;
                break;
                
            case 3:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                for (int n = 0; n < 101; n++) {
                    if (n%2 == 0){
                        cout << n << endl;
                        
                    }
                }
                
            }
                cout << space << endl;
                break;
                
            case 4:
            {
                cout << "--------"+to_string(i)+"--------" << endl;
                int i;
                cout << "Please enter the number : ";
                cin >> i;
                if (i%2 == 0) {
                    cout << "/" << endl;
                } else if (i%2 == 1) {
                    cout << R"(\)" << endl;
                    
                }
            }
                cout << space << endl;
                break;
                
            case 5:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                for (int i=0, n=1; n<101; n++)
                {
                    //        cout << n << ", ";
                    if (n%3 == 0) i++;
                    //        cout << i << endl;
                    if (n == 100) {
                        cout << "the number of multiples of '3' between 0~100 is "
                        << i << endl;
                        //            break;
                    }
                }
                
            }
                cout << space << endl;
                break;
                
            case 6:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                string str {"Hello, World!"};
                for (int c : str)
                {
                    cout << "[" << c << "]";
                    
                }
                cout << '\n';
                
            }
                cout << space << endl;
                break;
                
            case 7:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
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
                cout << space << endl;
                break;
                
            case 8:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
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
