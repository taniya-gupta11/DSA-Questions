// binary to decimal
#include <iostream>
using namespace std;

// Driver code
int main()
{
	int n;
	
	 cout<<"enter any value:"<<" ";
	 cin>>n;
	int arr[32];

	int i = 0;
	while (n > 0) {
		
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << arr[j];
	return 0;
}


// 2nd form
#include <iostream>
using namespace std;

// Driver code
int main()
{
	int n;
	
	 cout<<"enter any value:"<<" ";
	 cin>>n;
	int arr[32];

	int i = 0;
	while (1) {
	    //base case
	    if(n<=0){
	        break;
	    }
		
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << arr[j];
	return 0;
}


// third form
#include <iostream>
using namespace std;

int decimal_to_binary(int arr[], int n, int i) {
  //base case
    if (n == 0) {
        return i;
    }
    arr[i] = n % 2;
    
    return decimal_to_binary(arr, n / 2, i + 1);
}

int main() {
    int n = 5;
    int arr[32];
    int i = 0;

    int length = decimal_to_binary(arr, n, i);

    for (int j = length - 1; j >= 0; j--) {
        cout << arr[j];
    }
    cout << endl;

    return 0;
}

// power

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,p=1;
    cout<<"enter a base:"<<" ";
    cin>>x;
    cout<<"enter a exp:"<<" ";
    cin>>y;
    for(int i=1; i<=y; i++){
        p=p*x;
        
    }
    cout<<"result is:"<<p<<" ";
    

    return 0;
}