#include <iostream>
using namespace std;

// string reverseString(string str) {
//     string reversed = "";

//     for(int i = str.length() - 1; i >= 0; i--) {
//         reversed += str[i];
//     }

//     return reversed;
// }

string reverseString(string str) {
    if(str.length() <= 1) {
        return str;
    }

    return str[str.length()-1] + reverseString(str.substr(0, str.length() - 1));
}

int main()
{
    // cout << reverseString("abc") << endl;

    string s = "abc";
    cout << s.substr(1) << endl;
    return 0;
}

