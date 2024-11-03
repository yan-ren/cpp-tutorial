#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
/*
Given two vectors num1 and num2, return a vector that contains the unique of the two vector

e.g. num1 = {4, 9, 5}, num2 = {9, 4, 4, 9, 8}
output = {5, 8}
*/

vector<int> findUniqueElements(const vector<int> num1, const vector<int> num2) {
    vector<int> res;

    // check elements in num1 that are not in num2
    for(int n1: num1) {
        if(find(num2.begin(), num2.end(), n1) == num2.end()) {
            res.push_back(n1);
        }
    }

    // check elements in num2 that are not in num1
    for(int n2: num2) {
        if(find(num1.begin(), num1.end(), n2) == num1.end()) {
            res.push_back(n2);
        }
    }

    return res;
}

vector<int> mergeUnique(vector<int> num1, vector<int> num2) {
    vector<int> result = num1;

    // Add elements from num2 that are not already in result
    for(int n2: num2) {
        if(find(result.begin(), result.end(), n2) == result.end()) {
            result.push_back(n2);
        }
    }

    return result;
}

int main() {
    // vector<int> num1 = {4, 9, 5};
    // vector<int> num2 = {9, 4, 4, 9, 8};
    // vector<int> unique = findUniqueElements(num1, num2);

    // for(int n: unique) {
    //     cout << n << ' ';
    // }
    
    map<string, int> ageMap;

    ageMap["Alice"] = 30;
    ageMap["Bob"] = 20;
    ageMap["Kim"] = 25;
    ageMap["Tom"] = 0;

    cout << ageMap["Alice"] << endl;
    ageMap["Alice"] = 31;
    ageMap.erase("Alice");
    // ageMap.erase("Alice");

    // if(ageMap.find("Bob") != ageMap.end()) {
    //     cout << "Bob exists in the map" << endl;
    // }

    // cout << ageMap["Tom"] << endl;

    // for(const auto pair: ageMap) {
    //     cout << pair.first << endl;
    //     cout << pair.second << endl;
    // }

    // for(auto it = ageMap.begin(); it != ageMap.end(); ++it) {
    //     cout << it->first << endl;
    //     cout << it->second << endl;
    // }
    vector<string> text = {"hello", "world", "hello", "hi"};

    map<string, int> wordCount;

    for(string word: text) {
        wordCount[word]++;
    }

    for(auto pair: wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    string mostFrequentWord;
    int maxFrequency = 0;

    for(auto pair: wordCount) {
        if(pair.second > maxFrequency) {
            maxFrequency = pair.second;
            mostFrequentWord = pair.first;
        }
    }

    return 0;
}

/*
Given a vector of strings, count how many times each string appears in the vector
*/

/*
Given a vector of strings, find the longest string (there might be multiple string with same length)
*/