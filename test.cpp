#include <iostream>
using namespace std;

int main() {
    string s = "Hello";
    string s1;
    s1 += s[0];
    string s2 = s.substr(0, 2);

    cout << s1;
    
    
    return 0;
}