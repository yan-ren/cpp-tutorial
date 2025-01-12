#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    cin >> input;

    string letters = "";
    string turns = "";
    char operation = ' '; // '+' or '-'

    for (char c: input) {
        if (isalpha(c)) { // check a-z A-Z
            if(!turns.empty() && operation != ' ') {
                cout << letters << " " << (operation == '+' ? "tighten":"loosen") << " " << turns << endl;
                letters = "";
                turns = "";
                operation = ' ';
            }
            letters += c;
        } else if (c == '+' || c == '-') {
            operation = c;
        } else if (isdigit(c)) { // check 0-9
            turns += c;
        }
    }

    // output last instruction
    if(!turns.empty() && operation != ' ') {
        cout << letters << " " << (operation == '+' ? "tighten":"loosen") << " " << turns << endl;
    }

    char lower = 'b';
    char upper = toupper(lower);
    isalnum(lower);
    isspace(lower);
    if (lower == ' ') {

    }
    return 0;
}

bool isAllLetters(string str) {
    for(char c : str) {
        if(!isalpha(c)) {
            return false;
        }
    }

    return true;
}
