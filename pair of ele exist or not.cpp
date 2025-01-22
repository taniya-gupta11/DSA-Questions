
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,4,5,7,11},n=6;
    int x=9;
    int sum = 0;
    bool found = false;
     for(int i=0; i<n; i++){
         for(int j=i+1; j<n; j++){
             if(arr[i]+arr[j]==x){
                 cout<<"pair found:"<<arr[i]<<" , "<<arr[j]<<endl;
                 found = true;
             }
         }
     }
     if(found){
         cout<<"Yes";
     }

    return 0;
}

// with fun
#include <iostream>
using namespace std;

int is_ele(int arr[], int n, int x) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                cout << "Pair found: " << arr[i] << " , " << arr[j] << endl;
                found = true;
            }
        }
    }
    return found ; 
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 11};
    int n = 6;
    int x = 9;
    int res = is_ele(arr, n, x);
    cout << "Result: " << res << endl;

    return 0;
}
