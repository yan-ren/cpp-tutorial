#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>


using namespace std;

class Person {
public:
    string name;
    int age;
    
    Person() {

    }

    Person(string n, int a) {
        name = n;
        age = a;
    }

};

class Point {
private:
    double x, y;

public:
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // function to calculate distance between two points
    double distanceTo(Point other) {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }

    // function to calculate midpoint between two points
    Point midpoint(Point other) {
        return Point((x + other.x) / 2, (y + other.y) / 2);
    }
};

class Student {
public:
    string name;
    int age;
    double grade;

    Student(string n, int a, double g) {
        name = n;
        age = a;
        grade = g;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

class Classroom {
public:
    vector<Student> students;

    double averageGrade() {
        double totalGrade = 0.0;
        for(Student s: students) {
            totalGrade += s.grade;
        }

        return totalGrade / students.size();
    }

    void displayStudents() {
        for(Student s: students) {
            s.display();
        }
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial) {
        balance = initial;
    }

    double getBalance() {
        return balance;
    }

    void setBalance(double balance) {
        if (balance > 0) {
            this->balance = balance;
        }
    }
};

int main() {

    BankAccount bankAccount(100.0);

    cout << bankAccount.getBalance() << endl;

    bankAccount.setBalance(-100);
    // Point p(1.0, 2.0);
    // cout << p.x << endl;

    // Person person1("Tom", 20);
    
    // Person person2;

    // Person person3("Tom");
    // Point p1(2.0, 3.0);
    // Point p2(1.0, 10.0);

    // cout << p1.distanceTo(p2) << endl;

    // Point mid = p1.midpoint(p2);
    // cout << mid.x << endl;
    // cout << mid.y << endl;
    Classroom classroom;
    classroom.students.push_back(Student("Alice", 20, 85));
    classroom.students.push_back(Student("Bob", 22, 90));

    cout << classroom.averageGrade() << endl;

    return 0;
}

/*
You are given two points in a 2D plane, represented by their 
x and y coordinates. Create a Point class that allows you to:

1. Calculate the distance between the two points.
2. Find the midpoint between the two points.
3. Display the coordinates of each point.
*/