//linear search
#include <iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[0]==key){
            return 1;
        }
        
    }
    return 0;
}

int main() {
    int arr[] = {2, 4, 3, 1, 0};
    int n = 5;
    int key = 2;
    bool ans = linearSearch(arr,n,key);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"absent"<<" ";
    }
    
    return 0;
}



//second form


#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key) {
    int i = 0;
    while (i < n) {
        if (arr[i] == key) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    int arr[] = {2, 3, 4, 6, 1};
    int n = 5;
    int key = 8;
    
    bool ans = linearSearch(arr, n, key);
    
    if (ans) {
        cout << "present";
    } else {
        cout << "absent";
    }
    
    return 0;
}


//third form
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key) {
    int i = 0;
    while (1) {
        //base case
        if(i>n){
            break;
        }
        if (arr[i] == key) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    int arr[] = {2, 3, 4, 6, 1};
    int n = 5;
    int key = 9;
    
    bool ans = linearSearch(arr, n, key);
    
    if (ans) {
        cout << "present";
    } else {
        cout << "absent";
    }
    
    return 0;
}
