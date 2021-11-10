//
//  week_07_quiz.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/30.
//

#include "common_lib.h"
#include "week_07_quiz.hpp"

namespace myNamespace
{
    int a, b;
    int value() { return 5; };
    const double pi = 3.1416;

    namespace inner_myNamespace {
        int c = 10;
    }
}

namespace foo
{
    int value() { return 5; };
}

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}

namespace abcdefgHikklmn_123456
{
    int v = 221;
}


void run_quiz_07() {
    cout << "============== Quiz 07 ==============" << endl;
    
    int selected [] = {1,2,3,4,5,6,7};
    string space = "\n\n";
    
    for (int i : selected) {
        switch (i) {
            case 1:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                
            }
                cout << space << endl;
                break;
                
            case 2:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                int a = 10;
                
                {
                    int b = 100;
                    
                    cout << a << endl;
                    
                    float a = 3.14f;
                    
                    cout << a + b << endl;
                }
                cout << a << endl;
                
            }
                cout << space << endl;
                break;
                
            case 3:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                cout <<
                myNamespace::pi *
                myNamespace::inner_myNamespace::c +
                myNamespace::value() /
                foo::value()
                << endl;
                
                
            }
                cout << space << endl;
                break;
                
            case 4:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                using first::x;
                using second::y;
                
                cout << (x * second::x) + (first::y * y) << endl;
                
            }
                cout << space << endl;
                break;
                
            case 5:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                  {
                    using namespace first;
                    cout << x << '\n';
                  }
                
                  {
                    using namespace second;
                    cout << x << '\n';
                  }

                
            }
                cout << space << endl;
                break;
                
            case 6:
            {   cout << "--------"+to_string(i)+"--------" << endl;
 

                namespace abc = abcdefgHikklmn_123456;
                cout << abc::v << endl;

                
            }
                cout << space << endl;
                break;
                
            case 7:
            {   cout << "--------"+to_string(i)+"--------" << endl;
                
                
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
