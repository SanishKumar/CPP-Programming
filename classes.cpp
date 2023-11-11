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
    Employee sanish;
    // sanish.a = 1 <- Error 'cause a is private;
    sanish.d = 9;
    sanish.e = 12;
    sanish.setData(1, 2, 4);
    sanish.getData();
    return 0;
}