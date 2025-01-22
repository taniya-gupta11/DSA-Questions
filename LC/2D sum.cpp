#include <iostream>
using namespace std;

bool isPresent(int arr[][3],int target,int n , int m){
    for (int i = 0; i < 3; i++) {   //for row wise
        for (int j = 0; j < 3; j++) {
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int printSum(int arr[][3],int n , int m){
    cout<<"sum is:"<<endl;
   // int sum = 0;
    for (int i = 0; i < 3; i++) {   //for row wise
      int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum+= arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}


int main() {
    int arr[3][3];  

    for (int i = 0; i < 3; i++) {   //for row wise
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    
    cout<<"enter the ele to search:";
    int target;
    cin>>target;
    
    if(isPresent(arr,target,3,3)){
    cout<<"ele is found"<<endl;
    }
    else{
        cout<<"not found";
    }
    
    cout<<printSum(arr,3,3);

    return 0;
}
