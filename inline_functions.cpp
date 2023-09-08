#include <iostream>
using namespace std;

inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c = 0; // This executes only once
    // c = c + 1;
    return a * b; // + c
}

int main(){
    int a, b;
    cout << "Enter the Value for a and b:"<<endl;
    cin >> a >> b;
    cout << "The Product is: "<<product(a, b)<<endl;
    return 0;
}
