#include <iostream>

using namespace std;

// class Vehicle {
// public:
//     string type;

//     void showType() {
//         cout << "Vehicle Type: " << type << endl;
//     }
// };

// class Car: public Vehicle {
// public:
//     string brand;

//     void showDetails() {
//         cout << "brand: " << brand << endl;
//     }
// };

// void f1() {
//     cout << "f1 function" << endl;
//     f1();
// }

void count(int n) {
    // base case: when function should stop calling itself
    if (n == 0) {
        return;
    }

    cout << n << endl;
    // recursive case: function calls itself
    count(n-1);
}

int power(int a, int b) {
    if(b == 0) {
        return 1;
    }

    return power(a, b-1) * a;
}

int main() {
    /*
    recursion: function calls itself
    */
    // f1();
    power(2, 2);
    count(10);

    // a^b
    int a = 2;
    int b = 4;
    
    int result = 1;
    for (int i = 0; i < b; i++) {
        result = result * a;
    }

    cout << result << endl;


    // while (true) {
    //     cout << "f1 function" << endl;
    // }

    // Car myCar;
    // myCar.type = "Sedan";
    // myCar.brand = "Honda";

    // myCar.showDetails();
    // myCar.showType();

    // int red;
    // int green;
    // int blue;

    // cin >> red;
    // cin >> green;
    // cin >> blue;

    // cout << red * 3 + green * 4 + blue * 5;

    // int dusa;

    // cin >> dusa;

    // while(true) {
    //     int yobis;
    //     cin >> yobis;

    //     if (yobis > dusa) {
    //         break;
    //     }

    //     dusa += yobis;
    // }

    // cout << dusa;
    
    return 0;
}
