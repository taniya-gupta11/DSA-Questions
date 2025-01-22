#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int is_equi(int arr[],int n){
    int left_s = 0;
    int right_s = 0;
    
    for(int i=0;i<n;i++){
        // left_s;
        for(int j=0;j<i;j++){
            left_s+=arr[j];
        }
        // right_s;
        for(int j=i+1; j<n; j++){
            right_s+=arr[j];
            if(left_s==right_s){
                return i;
            }
        }
        return -1;
    }
}


int main()
{
   int arr[] = {-7,6,3,-4,3};
   int n = sizeof(arr)/sizeof(arr[0]);
   
  cout<<"index is:"<<is_equi(arr,n);

    return 0;
}

//or

#include <iostream>
using namespace std;

int is_equi(int arr[], int n) {
    int right_sum = 0;  
    int left_s = 0;     

    
    for (int i = 0; i < n; i++) {
        right_sum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        right_sum -= arr[i];

        if (left_s == right_sum) {
            return i;
        }

        
        left_s += arr[i];
    }

    
    return -1;
}

int main() {
    int arr[] = {-7, 6, 3, -4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = is_equi(arr, n);
    
    if (result != -1)
        cout << "Equilibrium index is: " << result << endl;
    else
        cout << "No equilibrium index found" << endl;

    return 0;
}
