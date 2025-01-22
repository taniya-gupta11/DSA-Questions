#include <iostream>
#include <vector>
#include <queue> // For priority_queue
using namespace std;

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4}; // Example array
    int k = 2; // Find the 2nd largest element
    
    // Min-heap to store the k largest elements
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    // Insert the first k elements into the min-heap
    for (int i = 0; i < k; i++) {
        minHeap.push(nums[i]);
    }

    // Process the remaining elements of the array
    for (int i = k; i < nums.size(); i++) {
        if (nums[i] > minHeap.top()) {
            minHeap.pop();        // Remove the smallest element
            minHeap.push(nums[i]); // Add the current element
        }
    }

    // The top of the heap is the kth largest element
    cout << "The " << k << "th largest element is: " << minHeap.top() << endl;

    return 0;
}
