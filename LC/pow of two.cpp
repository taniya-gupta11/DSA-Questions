#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    bool is_Power = false;
     int n;
    cout << "Enter a number: ";
    cin >> n;
    
   for(int i=0; i<=30; i++){
       int ans = pow(2,i);
           if(ans==n){
               is_Power = true;
               break;
           }
       }
  if (is_Power) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}