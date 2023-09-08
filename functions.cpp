#include <iostream>
using namespace std;

void swapPointers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 2, y = 3;
    cout << x <<" and " << y << endl;
    // swapPointers(&x, &y);
    // cout << "Pointers: " << x <<" and " << y << endl;
    swapReferenceVar(x, y);
    cout << "Reference Variables: " << x <<" and " << y << endl;
}