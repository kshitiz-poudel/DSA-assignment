#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, result = "";
    cout << "Enter string: ";
    cin >> s;
    for (char c : s) {
        if (string("aeiouAEIOU").find(c) == string::npos)
            result += c;
    }
    cout << "Without vowels: " << result << endl;
    return 0;
}
