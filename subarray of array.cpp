
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4},n=4;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }

    return 0;
}

//max sum array

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1,2,3,-1,4},n=5;
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
           // cout<<endl
           maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;

    return 0;
}