#include <iostream>
using namespace std;


class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"a "<<a<<endl;
            cout<<"b "<<b<<endl;
            cout<<"c "<<c<<endl;
            cout<<"d "<<d<<endl;
            cout<<"e "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

// class Employee
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int a1, int b1, int c1); // Declaration
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

int main(){
    Employee harry;
    // harry.a = 1 <- Error 'cause a is private;
    harry.d = 9;
    harry.e = 12;
    harry.setData(1, 2, 4);
    harry.getData();
    return 0;
}