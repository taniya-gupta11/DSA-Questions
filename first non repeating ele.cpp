#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 4, 9, 6, 7, 4};
    int n = 6;
    int firstNonRepeating = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            firstNonRepeating = arr[i];
            break;
        }
    }

    if (firstNonRepeating != -1) {
        cout << "First non-repeating element: " << firstNonRepeating << endl;
    } else {
        cout << "No non-repeating element found!" << endl;
    }

    return 0;
}
