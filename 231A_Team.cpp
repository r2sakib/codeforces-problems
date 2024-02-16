#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string line;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        getline(cin >> ws, line);
        int sum = 0;

        for (int i = 0; i < 5; i=i+2)
        {
            string x;
            x += line[i];
            sum = sum + stoi(x);
        }

        if (sum >= 2)
        {
            count++;
        }
    }

    cout << count;
    
    
    return 0;
}