#include <iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int n , int m){
    for (int i = 0; i < 3; i++) {   //for row wise
        for (int j = 0; j < 4; j++) {
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[3][4];  

    for (int i = 0; i < 3; i++) {   //for row wise
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    
    cout<<"enter the ele to search:";
    int target;
    cin>>target;
    
    if(isPresent(arr,target,3,4)){
    cout<<"ele is found"<<endl;
    }
    else{
        cout<<"not found";
    }

    return 0;
}
//Or

#include <iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int n , int m){
    for (int i = 0; i < 3; i++) {   //for row wise
        for (int j = 0; j < 4; j++) {
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12},n=3,m=4; 

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    
    cout<<"enter the ele to search:";
    int target;
    cin>>target;
    
    if(isPresent(arr,target,3,4)){
    cout<<"ele is found"<<endl;
    }
    else{
        cout<<"not found";
    }

    return 0;
}
