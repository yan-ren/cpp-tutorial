#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    // stack<int> s;

    // s.push(3);
    // s.push(2);
    // s.push(1);

    // while (!s.empty()) {
    //     // get the value that is going to be popped
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    // queue<int> order;
    // order.push(1);
    // order.push(2);
    // order.push(3);
    // while(!order.empty()) {
    //     cout << order.front() << endl;
    //     order.pop();
    // }

    /*
    Balanced Parentheses Check
Write a C++ program to determine if a given string of parentheses is balanced. 
The string contains only the characters (, ), {, }, [ and ].

A string is considered balanced if:

Every opening bracket has a corresponding closing bracket.
The brackets are closed in the correct order.

Example
Inputs and Outputs:
Input: "({[()]]})" → Output: Balanced
Input: "({[([)])]}" → Output: Not Balanced
Input: "{}[]" → Output: Balanced
    */

    // string str = "({[()]]})";
    // stack<char> s;

    // for (char ch: str) {
    //     if(ch == '(' || ch == '{' || ch == '[') {
    //         s.push(ch);
    //     } else {
    //         // if the character is a closing bracket
    //         if (s.empty()) {
    //             cout << "Not match" << endl;
    //             break;
    //         }

    //         // pop the top of the stack
    //         char top= s.top();
    //         s.pop();

    //         if ((ch==')' && top != '(') || (ch == '}' && top != '{') 
    //         || (ch == ']' && top != '[')) {
    //             cout << "Not matching" << endl;
    //             break;
    //         }
    //     }
    // }
    // if (s.empty()) {
    //     cout << "Matching";
    // } else {
    //     cout << "Not matching";
    // }

    int n;
    cin >> n;

    vector<int> dayCounts(5, 0);

    for(int i = 0; i < n; ++i) {
        string availability;
        cin >> availability;

        for(int j = 0; j < 5; j++) {
            if(availability[j] == 'Y') {
                dayCounts[j]++;
            }
        }
    }

     // Find the maximum count
    int maxCount = 0;
    for (int count : dayCounts) {
        if (count > maxCount) {
            maxCount = count;
        }
    }

    // Collect all days with the maximum count
    vector<int> bestDays;
    for (int i = 0; i < 5; ++i) {
        if (dayCounts[i] == maxCount) {
            bestDays.push_back(i + 1); // Convert 0-based index to 1-based
        }
    }

    // Print all best days
    for (size_t i = 0; i < bestDays.size(); ++i) {
        if (i > 0) cout << ",";
        cout << bestDays[i];
    }
    return 0;
}

