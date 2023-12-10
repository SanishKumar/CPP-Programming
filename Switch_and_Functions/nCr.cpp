#include <iostream>
using namespace std;

int factorial(int n){
    int ans = 1;

    for(int i = 1; i <= n; i++){
        ans = ans * i;
    }

    return ans;
}

int ncr(int a, int b){
    int num, denom;

    num = factorial(a);
    denom = factorial (b) * factorial(a - b);

    return num/denom;
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << ncr(a, b)<<endl;

    return 0;
}