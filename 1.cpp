#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "front = " << s.front() << endl;
    cout << "back = " << s.back() << endl;
    string s1;
    string s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    cout << "s1.compare(s2) = " << s1.compare(s2) << endl;
    return 0;
}
