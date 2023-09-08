// Write a C++ class called "Employee" that has three private member variables: "name", "salary", and "employeeCode". 
// The class should have a constructor that initializes these member variables and a public member function called 
// "displayInfo" that prints out the employee's name, salary, and employeeCode.

// #include <iostream>
// #include <string>

// using namespace std;

// class Employee {
//     string name;
//     double salary;
//     int employeeCode;

// public:
//     Employee(string empName, double empSalary, int empCode) {
//         name = empName;
//         salary = empSalary;
//         employeeCode = empCode;
//     }

//     void displayInfo() {
//         cout << "Employee Name: " << name << endl;
//         cout << "Salary: " << salary << endl;
//         cout << "Employee Code: " << employeeCode << endl;
//     }
// };

// int main() {
//     Employee emp("Sanish", 50000000.0, 1);
//     emp.displayInfo();

//     return 0;
// }


// Write a C++ class called "Rectangle" that has two private member variables: "length" and "width". 
// The class should have a constructor that initializes these member variables and public member functions called 
// "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.

#include <iostream>

using namespace std;

class Rectangle {
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double getArea() const {
        return length * width;
    }

    double getPerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    Rectangle rect(length, width);

    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;

    return 0;
}
