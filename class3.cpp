/*
Write a program that reverse an array of integers
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start += 1;
        end -= 1;
    }
}

// int removeDuplicates(int arr[], int n) {

// }

int findIndex(vector<int> vec, int target) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1;
}

int main() {
    // int arr[] = {1, 2, 3, 4, 5};
    // for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    //     cout << arr[i]  << ' ';
    // }

    // reverseArray(arr, sizeof(arr)/sizeof(arr[0]));

    // cout << endl;
    // for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    //     cout << arr[i]  << ' ';
    // }

    // <> generic
    // vector<int> numbers;
    // create vector with initial value
    // vector<int> numbers = {10, 20, 30, 40};

    // add elements to the vector
    // numbers.push_back(10);
    // numbers.push_back(20);
    // cout << &numbers << endl;

    // for(int i = 0; i < numbers.size(); i++) {
    //     cout << numbers[i] << endl;
    // }

    // for (int n: numbers) {
    //     cout << n << endl;
    // }

    // insert a value 15 at index 1
    // numbers.insert(numbers.begin() + 1, 15);

    // for (int n: numbers) {
    //     cout << n << endl;
    // }

    // erase value at index 1
    // numbers.erase(numbers.begin() + 1);

    //
    vector<int> number = {1, 2, 3, 1, 4, 5, 6, 4};

    auto it = find(number.begin(), number.end(), 4);

    if(it != number.end()) {
        cout << distance(number.begin(), it);
    }

    auto it = find(number.begin(), number.end(), 4);
    // if iterator is not reaching the end, meaning the value is found in the vector
    if(it != number.end()) {

    }
}

/*
vector: dynamic array that can grow in size
*/