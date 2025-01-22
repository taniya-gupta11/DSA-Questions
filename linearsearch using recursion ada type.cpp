// linearsearch using recursion ada type
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n,int i, int key) {
    //int i = 0;
    while (1) {
        //base case
        if(i>=n){
            break;
        }
        if (arr[i] == key) {
            return 1;
        }
        return linearSearch(arr, n, i+1, key);
    }
    
}

int main() {
    int arr[] = {2, 3, 4, 6, 0};
    int n = 5;
    int key = 6;
    int i = 0;
    int ans = linearSearch(arr, n,i, key);
    
    if (ans) {
        cout << "present";
    } else {
        cout << "absent";
    }
    
    return 0;
}
