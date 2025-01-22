
#include <iostream>
using namespace std;

int qus_is(int arr[], int n){
    int current_s = 0;
    int max_s = 0;
    for (int i=0; i<n; i++){
        current_s = current_s+arr[i];
        if(current_s>max_s){
            max_s=current_s;
        }
        if(current_s<0){
            current_s=0;
        }
    }
   return max_s;
}

int main()
{
    int arr[] = {5,-4,-2,6,-1},n=5;
 
   int x = qus_is(arr,n);
    cout<<x;
    return 0;
}

//OR

#include <iostream>
using namespace std;
int main()
{   int arr[] = {-2,1,-3,4,-1,2,1,-5,4},n=9;
    int max_c = 0;
    int current_c = 0;
    
    for(int i=0; i<n; i++){
        current_c = current_c + arr[i];
        if(current_c > max_c){
             max_c = current_c;
        }
         if(current_c<0){
        current_c=0;
    }
    }
        cout<<max_c;
    return 0;
}


#include <iostream>
using namespace std;

int max_a(int arr[],int n){
    int curr_s=0;
    int max_s = 0;
    for(int i=0; i<n; i++){
        curr_s+=arr[i];
        if(curr_s>max_s){
            max_s = curr_s;
        }
        if(curr_s<0){
            curr_s=0;
        }
    }
   return max_s;
}

int main()
{
   
   int arr[] = {-2,1,-3,4,-1,2,1,-5,4},n=9;
  // int curr_s =0;
   //int max_s=0;
   int res = max_a(arr,n);
   cout<<res;
    return 0;
}