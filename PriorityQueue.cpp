#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int q;
    cin >> q;

    // Create a vector to represent the heap
    vector<int> heap;

    // Initialize the heap as a min-heap using greater<int>() as the comparison function
    make_heap(heap.begin(), heap.end(), greater<int>());

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            // Insert element into the heap
            int element;
            cin >> element;
            heap.push_back(element);
            // Maintain the heap property after insertion
            push_heap(heap.begin(), heap.end(), greater<int>());
        } else if (type == 2) {
            // Delete element from the heap
            int element;
            cin >> element;
            // Find the element in the heap
            auto it = find(heap.begin(), heap.end(), element);
            // Erase the element from the heap
            heap.erase(it);
            // Maintain the heap property after deletion
            make_heap(heap.begin(), heap.end(), greater<int>());
        } else if (type == 3) {
            // Print the minimum value (front of the heap)
            cout << heap.front() << endl;
        }
    }

    return 0;
}
