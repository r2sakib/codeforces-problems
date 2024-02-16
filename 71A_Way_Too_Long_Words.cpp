#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string words[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    string new_word;
    for (int i = 0; i < n; i++)
    {
        new_word = words[i];
        int word_len = words[i].length();

        if (word_len > 10) {
            new_word = words[i][0] + to_string((word_len-2)) + words[i][word_len-1];
        }

        cout << new_word << endl;
    }
    
    return 0;
}