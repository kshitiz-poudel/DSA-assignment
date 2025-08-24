#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    for (char &c : s) c = tolower(c);
    cout << "Lowercase: " << s << endl;
    return 0;
}
