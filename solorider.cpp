#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

int manhattanDistance(pair<int, int> p1, pair<int, int> p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

int minDistanceTraveled(const unordered_map<string, pair<int, int>>& passengers, unordered_map<string, pair<int, int>>& vehicles) {
    unordered_map<string, string> allocation;
    int totalDistance = 0;

    for (const auto& passenger : passengers) {
        int minDistance = INT_MAX;
        string assignedVehicle;

        for (auto& vehicle : vehicles) {
            if (allocation.find(vehicle.first) == allocation.end()) {
                int distance = manhattanDistance(passenger.second, vehicle.second);
                if (distance < minDistance || (distance == minDistance && vehicle.first < assignedVehicle)) {
                    minDistance = distance;
                    assignedVehicle = vehicle.first;
                }
            }
        }

        allocation[passenger.first] = assignedVehicle;
        totalDistance += minDistance;
    }

    return totalDistance;
}

int main() {
    unordered_map<string, pair<int, int>> passengers, vehicles;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        string name;
        int x, y;
        cin >> name >> x >> y;
        passengers[name] = {x, y};
    }

    for (int i = 0; i < m; ++i) {
        string vehicle;
        int x, y;
        cin >> vehicle >> x >> y;
        vehicles[vehicle] = {x, y};
    }

    int result = minDistanceTraveled(passengers, vehicles);
    cout << result << endl;

    return 0;
}
