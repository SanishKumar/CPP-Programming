#include <iostream>
#include <vector>

using namespace std;

int needVehicles(vector<int>& w, int mw) {
    int vn = 0;
    int cv = 0;

    for (int weight : w) {
        if (cv + weight <= mw) {
            cv += weight;
        } else {
            cv = weight;
            vn++;
        }
    }

    if (cv > 0) {
        vn++;
    }

    return vn;
}

int main() {
    ios_base::sync_with_stdio(false);

    const int n = 7;

    vector<int> w(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }

    int mw;
    cin >> mw;

    int result = needVehicles(w, mw);
    cout << result << endl;

    return 0;
}
