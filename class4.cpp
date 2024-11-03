#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> findDisappearedNumbers(vector<int> nums) {
    int n = nums.size();

    // create a mask vector to track the presence of numbers
    vector<int> mask(n+1, 0); // create a vector with size n+1 and each value initially is zero

    // mark the numbers that appear in nums
    for(int i = 0; i < n; i++) {
        int value = nums[i];
        mask[value] = 1;
    }

    // collect missing numbers based on the mask
    vector<int> result;
    for(int i = 1; i < n; i++) {
        if (mask[i] == 0) {
            result.push_back(i);
        }
    }

    return result;
}

bool find(vector<int> numbers, int target) {
    for(int num: numbers) {
        if (num == target){
            return true;
        }
    }
    return false;
}

vector<int> findCommon(vector<int> num1, vector<int> num2) {
    vector<int> result;

    for(int num: num1) {
        // check if num is in num2
        // auto iterator = find(num2.begin(), num2.end(), num);
        // if (iterator != num2.end()) {
        //     result.push_back(num);
        // }
        if (find(num2, num)) {
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    // // bit mask
    // vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    // vector<int> res = findDisappearedNumbers(nums);

    // for (int n: res) {
    //     cout << n << " ";
    // }

    // collection

    vector<int> numbers = {-10, -40, -30, -20};
    int max = numbers[0];

    // for(int i = 0; i < numbers.size(); i++) {
    //     if (numbers[i] > max) {
    //         max = numbers[i];
    //     }
    // }

    // cout << max << endl;

    // for (int num: numbers){
    //     cout << num << endl;
    // }

    // for (auto it = numbers.begin(); it != numbers.end(); it++) {
    //     cout << *it << endl;
    // }

    // sorting
    sort(numbers.begin(), numbers.end());
    // reverse(numbers.begin(), numbers.end());

    // for (int num: numbers){
    //     cout << num << endl;
    // }

    auto it = find(numbers.begin(), numbers.end(), 10);
    if (it != numbers.end()) {
        cout << "found" << endl;
    }else {
        cout << "not found" << endl;
    }

    vector<int> new_numbers = numbers;

    /*
    Given two vectors num1 and num2, return a vector that contains the intersection of the two vector

    e.g. num1 = {4, 9, 5}, num2 = {9, 4, 4, 9, 8}
    output = {4, 9}
    */

    /*
    Given two vectors num1 and num2, return a vector that contains the unique of the two vector

    e.g. num1 = {4, 9, 5}, num2 = {9, 4, 4, 9, 8}
    output = {5, 8}
    */
    return 0;
}