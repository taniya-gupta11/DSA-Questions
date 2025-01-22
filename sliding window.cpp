#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {100, 200, 300, 400};
    int n = 4;
    int k = 2; // Window size
    int maxSum = INT_MIN;
    int  sum = 0;
    int i = 0, j = 0;
    
    // Sliding window logic
    while (j < n) {
        sum += arr[j]; // Add the current element to the sum

        // If window size is less than k, increment j
        if (j - i + 1 < k) {
            j++;
        } 
        // When window size hits k
        else if (j - i + 1 == k) {
            maxSum = max(maxSum, sum); // Update the maxSum if needed
            sum = sum - arr[i]; // Slide the window: subtract the element at i
            i++; // Move window start
            j++; // Move window end
        }
    }

    cout << "Maximum sum of subarray of size " << k << " is: " << maxSum << endl;

    return 0;
}
