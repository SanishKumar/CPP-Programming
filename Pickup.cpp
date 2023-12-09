#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <limits>
#include <algorithm>

using namespace std;

struct City {
    int goods;
    int tax;
    set<pair<int, string>> neighbors;  // {goods, city}
};

int calculateTax(const vector<string>& route, const unordered_map<string, City>& cities) {
    int totalTax = 0;
    for (size_t i = 1; i < route.size(); ++i) {
        totalTax += cities.at(route[i]).tax;
    }
    return totalTax;
}

void dfs(const string& currentCity, unordered_map<string, City>& cities, vector<string>& route) {
    route.push_back(currentCity);

    set<pair<int, string>> options;  // {goods, city}
    for (const auto& neighbor : cities[currentCity].neighbors) {
        options.insert(make_pair(neighbor.first, neighbor.second));
    }

    for (const auto& option : options) {
        dfs(option.second, cities, route);
    }
}

int main() {
    int n;
    cin >> n;

    unordered_map<string, City> cities;

    for (int i = 0; i < n - 1; ++i) {
        string city1, city2;
        int goods, tax;
        cin >> city1 >> city2 >> goods >> tax;

        cities[city1].neighbors.insert({goods, city2});
        cities[city2].neighbors.insert({goods, city1});
        cities[city2].goods = goods;
        cities[city2].tax = tax;
    }

    vector<string> route;
    dfs("hyderabad", cities, route);

    int minTax = numeric_limits<int>::max();
    vector<string> minRoute;

    do {
        int currentTax = calculateTax(route, cities);
        if (currentTax < minTax) {
            minTax = currentTax;
            minRoute = route;
        }
    } while (next_permutation(route.begin() + 1, route.end() - 1));

    for (size_t i = 0; i < minRoute.size() - 1; ++i) {
        cout << minRoute[i] << "-";
    }
    cout << minRoute.back() << "\n" << minTax << "\n";

    return 0;
}