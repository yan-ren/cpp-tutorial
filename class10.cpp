#include <iostream>
#include <string>
#include <utility>

using namespace std;

/*
power
factorial
fibonacci

today:
reverse string
- give a string create a function that generate a reversed string
- e.g. input: "abc", output: "cba"

non recursive solution
recursive solution
*/
// string reverse(string input) {
//     string reversed = input; // create a copy of the input

//     for(int i = 0; i < reversed.length() / 2; i++) {
//         swap(reversed[i], reversed[reversed.length() - i - 1]);
//     }

//     return reversed;
// }

/*
reverse("welcome") => reverse("elcome") + "w"
reverse("elcome") => reverse("lcome") + "e"
reverse("come") => reverse("ome") + "l"
reverse("ome") => reverse("me") + "o"
reverse("me") => reverse("e") + "m"
reverse("e") => e
*/
string reverse(string input) {
    if(input.empty() || input.size() == 1) {
        return input;
    }

    return reverse(input.substr(1)) + input[0];
}

bool isPalindrome(string input) {
    if(input.size() <= 1) {
        return true;
    }

    // check the first and last character
    if (input.front() != input.back()) {
        return false;
    }

    // check the remaining part except for first and last letter
    return isPalindrome(input.substr(1, input.size() - 2));
}
int main() {
    // string s = "hello";
    // string s_new = s.substr(1);

    // cout << s_new << endl;

    // string s1 = "Racecar";

    /*
    length() / size(): return the number of characters in string
    substr(start, length): extract a substring start atn `start` and of length `length`
    */

    // find(string): find the first occurrence of a substring, returns the index or string::npos if not found
    string str = "hi hello world";
    // size_t: [0, 2^64-1]
    size_t pos = str.find("hello", 5); // second variable means find "hello" after index 5
    // cout << pos << endl;
    if (pos != string::npos) {
        // "hello" is found in "hello world"
        cout << pos << endl;
    }else {
        // not found
    }
    // insert(index, str): insert a substring at the specified index
    str.insert(6, "no");
    cout << str << endl;
    return 0;
}

/*
Given a string "hi hellohiworld", find how many "hi" from given string
hint: using find and while loop
*/
// solve 2024 j2 and 2023 j2
