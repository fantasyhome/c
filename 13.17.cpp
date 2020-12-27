#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <initializer_list>
#include <vector> 
#include <string>
#include <cstring>
#include <deque>
#include <list> 
#include <forward_list>
#include <array>
#include <stack>
#include <queue>
#include <algorithm> 
#include <functional>
#include <map>
#include <set> 
#include <cctype>
#include <unordered_map>
#include <unordered_set>
#include <memory> 
#include <new> 
 
using namespace std;
using namespace std::placeholders;

class numbered{
    friend void f(numbered);
    int mysn;
public:
    numbered()
    {
        static int val = 0;
        ++val;
        mysn = val;
    }
    numbered(numbered &num){ mysn = num.mysn + 5; }
}; 

void f(numbered s)
{
    cout << s.mysn << endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
    return 0;
}