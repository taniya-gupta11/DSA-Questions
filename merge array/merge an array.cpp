//merge array

#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {2,3,4,5};
    int arr2[] = {7,8,9,10};
    int m = sizeof(arr1)/sizeof(arr1[0]);
     int n = sizeof(arr2)/sizeof(arr2[0]);
    int merge[m+n];
    
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            merge[k++] = arr1[i++];
        }
        else{
            merge[k++] = arr2[j++];
        }
    }
    while(i<m){
        merge[k++] = arr1[i++];
    }
    while(j<n){
        merge[k++] =arr2[j++]; 
    }
    cout<<"merged arrat:";
    for(int i=0;i<m+n; i++){
        cout<<merge[i]<<" ";
    }
    

    return 0;
}


//using function

#include <iostream>
using namespace std;

void meged_array(int arr1[] , int m , int arr2[], int n, int merge[]){
    int i = 0, j=0, k=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            merge[k++] = arr1[i++];
        }
        else{
            merge[k++] = arr2[j++];
        }
    }
    while(i<m){
        merge[k++] = arr1[i++];
    }

    while(j<n){
       merge[k++] = arr2[j++];
}

}

int main()
{
    int arr1[] = {1,3,5};
    int arr2[] = {4,6,7,8};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    int merge[m+n];
    
    meged_array(arr1,m,arr2,n,merge);
    
    cout<<"merge array:";
    for(int i=0; i<m+n; i++){
        cout<<merge[i]<<" ";
    }
    

    return 0;
}