#include <iostream>
#include <unordered_map>
using namespace std;

int findLongestSubarray(int a[], int n, int target) {
    unordered_map<int, int> map;  
    int curr_sum = 0;             
    int maxLength = 0;            
    int start = 0, end = -1;     

    for (int i = 0; i < n; i++) {
        curr_sum += a[i];  
        
        if (curr_sum == target) {
            maxLength = i + 1;  
            start = 0;
            end = i;
        }
        if (map.find(curr_sum - target) != map.end()) {
            int length = i - map[curr_sum - target];
            if (length > maxLength) {
                maxLength = length;
                start = map[curr_sum - target] + 1;
                end = i;
            }
        }

        if (map.find(curr_sum) == map.end()) {
            map[curr_sum] = i;
        }
    }

    if (maxLength == 0) {
        cout << "No subarray with given sum found." << endl;
    } else {
        cout << "The longest subarray with sum " << target << " is from index " << start
             << " to " << end << " with length " << maxLength << "." << endl;
        cout << "Subarray elements: { ";
        for (int i = start; i <= end; i++) {
            cout << a[i] << " ";
        }
        cout << "}" << endl;
    }

    return maxLength;
}

int main() {
    int a[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 8;

    findLongestSubarray(a, n, target);

    return 0;
}


//longest subarray
#include <iostream>
#include <unordered_map>
using namespace std;

int findLongestSubarray(int a[], int n, int target) {
    unordered_map<int, int> map;  
    int curr_sum = 0;             
    int maxLength = 0;            
    int start = 0, end = -1;     

    for (int i = 0; i < n; i++) {
        curr_sum += a[i];  
        
        if (curr_sum == target) {
            maxLength = i + 1;  
            start = 0;
            end = i;
        }
        if (map.find(curr_sum - target) != map.end()) {
            int length = i - map[curr_sum - target];
            if (length > maxLength) {
                maxLength = length;
                start = map[curr_sum - target] + 1;
                end = i;
            }
        }

        if (map.find(curr_sum) == map.end()) {
            map[curr_sum] = i;
        }
    }

    if (maxLength == 0) {
        cout << "No subarray with given sum found." << endl;
    } else {
        cout <<  " length " << maxLength << endl;
        cout << "longest subarray elements: { ";
        for (int i = start; i <= end; i++) {
            cout << a[i] << " ";
        }
        cout << "}" << endl;
    }

    return maxLength;
}

int main() {
    int a[] = {5, 6, -5, 5,3, 5, 3, -2, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 8;

    findLongestSubarray(a, n, target);

    return 0;
}
