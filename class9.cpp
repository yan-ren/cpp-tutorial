#include <iostream>

using namespace std;


int power(int a, int b) {
    if(b == 0) {
        return 1;
    }

    return power(a, b-1) * a;
}

/*
n! = n * (n-1) * (n-2) ... * 1
5! = 5 * 4 * 3 * 2 * 1

n! = (n-1)! * n
(n-1)! = (n-2)! * n-1
...
1! = 1

*/

// non recursion solution - looping
// int factorial(int n) {
//     int result = 1;
//     for (int i = 1; i <= n; i++) {
//         result = result * i;
//     }

//     return result;
// }

// recursion
int factorial(int n) {
    if (n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

/*
fibonacci(5) -> 3
*/
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int fibonacci_non_recursion(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev1 = 0, prev2 = 1, current = 0;
    for(int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    return current;
}

int main() {
    /*
    recursion: function calls itself

    base case: the condition under which the recursion stops
    recursive case: the part of the function where it calls itself
    */
    // f1();
    power(2, 2);

    factorial(3);

    return 0;
}
