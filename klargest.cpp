#include <vector>
#include <queue>
#include <iostream>
using namespace std;

// worked with johna

int kth_largest(std::vector<int> values, int k) {
    // defining priority queue
    priority_queue<int> sort;
    int v_size = values.size();
    for (int i = 0; i < v_size; i++) {
        sort.push(values[i]);
    }
    int max;
    for (int i = 1; i < k; i++) {
        sort.pop();
    }
    max = sort.top();
    return max;
}