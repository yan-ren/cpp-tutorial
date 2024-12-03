#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // set<int> numbers;

    // numbers.insert(0);
    // numbers.insert(1);
    // numbers.insert(0);

    // for(int num: numbers) {
    //     cout << num << " ";
    // }

    // // check if an element exists
    // if(numbers.find(20) != numbers.end()) {
    //     // find
    // } else {
    //     // not find
    // }

    // // erase an element
    // numbers.erase(0);


    vector<int> data = {2, 1, 1, 0};
    set<int> unique_data(data.begin(), data.end());
    // for(int num: unique_data) {
    //     cout << num << " ";
    // }

    // covert set to vector
    vector<int> vec(unique_data.begin(), unique_data.end());

    // iterate through set in reverse order

    for(auto it = unique_data.rbegin(); it != unique_data.rend(); ++it) {
        cout << *it << " ";
    }

    // 2024 J3
    int N;
    cin >> N;

    vector<int> scores(N);
    // Read each score
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }

    // Use set to find unique scores
    set<int> unique_scores(scores.begin(), scores.end());

    // Convert set to vector
    
    vector<int> unique_scores_v(unique_scores.begin(), unique_scores.end());
    
    // Sort vector in descending order
    // Sort scores vector in descending order
    sort(unique_scores_v.rbegin(), unique_scores_v.rend());

    int bronzeScore = unique_scores_v[2];

    // Count how many bronze score from the original vector
    int bronzeCount = count(scores.begin(), scores.end(), bronzeScore);

    cout << bronzeScore << " " << bronzeCount;
    return 0;
}
