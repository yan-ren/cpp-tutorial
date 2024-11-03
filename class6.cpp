#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

map<char, int> countLetterFrequency(string str) {
    map<char, int> frequency;

    for(char ch: str) {
        frequency[ch]++;
    }

    return frequency;
}

int findUniqueChar(string s) {
    map<char, int> frequency;

    for (char ch: s) {
        frequency[ch]++;
    }

    int count = 0;
    // loop through map, find how many key with value == 1
    for(auto entry: frequency) {
        if (entry.second == 1) {
            count++;
        }
    }

    return count;
}

class Car {
public:
    string brand;
    string model;
    int year;

    Car(string b, string model, int year) {
        brand = b;
        this->model = model;
        this->year = year;
    }

    void displayInfo() {
        cout << "Brand：" << brand << ", Model:" << model << ", Year:" << year << endl;
    }
};

int main() {
    Car car1("Toyota", "Corolla", 2020);
    cout << car1.brand << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;

    // car1.brand = "Toyota";
    // car1.model = "Corolla";
    // car1.year = 2020;
    // car1.displayInfo();

    // Car car2;
    // car2.brand = "Honda";
    // car2.displayInfo();

    // cout << car1.brand << endl;

    // vector<Car> car;
    // car.push_back(car1);
    // car.push_back(car2);
    
    // Car cars[3];
    // cars[0].brand = "Toyota";
    // cars[0].model = "Corolla";

    // cars[1].brand = "Honda";
    // cars[1].model = "Civic";
    // cars[1].year = 2020;


    // string input = "hello";

    // map<char, int> res = countLetterFrequency(input);
    // char sample = 'a';

    // cout << 'a' - 'b' << endl;

    // int frequency[26] = {0};

    // for (char ch: input) {
    //     frequency[ch - 'a']++;
    // }

    // for(int i = 0; i < 26; i++) {
    //     cout << frequency[i] << endl;
    // }

    // give a string with only english letters, there are letters that is unique, find the unique letter
    // loveleetcode -> 3

    // string carBrand = "";
    // string carModel = "";
    // int carYear = 2020;


    return 0;
}