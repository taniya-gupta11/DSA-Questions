#include <iostream>
using namespace std;

bool subsequence(int a1[], int n, int a2[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a1[i] == a2[j]) {
            j++;
        }
        i++;
    }

    // If all elements of a2 are found in a1 in order
    return (j == m);
}

int main() {
    int a1[] = {2, 3, 5, 6, 8};
    int n = 5;
    int a2[] = {2,3,8};
    int m = 3;

    if (subsequence(a1, n, a2, m)) {
        cout << "a2 is a subsequence of a1" << endl;
    } else {
        cout << "a2 is not a subsequence of a1" << endl;
    }

    return 0;
}








#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string arr1[], int n, string arr2[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            i++;
            j++;
        } else {
            i++; // Move to the next element in arr1
        }
    }

    // If all elements of arr2 are found in arr1 in order, return true
    return (i == n);
}

int main() {
    string arr1[] = {"myname"};
    int n = 1; // Length of arr1 is 1
    string arr2[] = {"name"};
    int m = 1; // Length of arr2 is 1

    if (isSubsequence(arr1, n, arr2, m))
        cout << "Yes, arr2 is a subsequence of arr1\n";
    else
        cout << "No, arr2 is not a subsequence of arr1\n";

    return 0;
}


