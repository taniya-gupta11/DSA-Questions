#include <iostream>
#include <climits>
using namespace std;

int max_sum(int arr[][3], int n, int m) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < n; i++) {   // for row-wise
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];  // Accumulate row sum
        }
        if (sum > maxi) {
            maxi = sum;  // Update maximum sum
            rowIndex = i;  // Store the row index
        }
    }

    cout << "Maximum row sum is: " << maxi << endl;
    return rowIndex;
}



int main() {
    int arr[3][3];  

    for (int i = 0; i < 3; i++) {   //for row wise
        for (int j = 0; j < 3; j++) {
            cin >> arr[j][i];
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
   int num = max_sum(arr , 3, 3);
    cout<<"max sum is at index "<<num;
    //cout<<endl;
    return 0;
}
