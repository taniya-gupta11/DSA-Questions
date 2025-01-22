//palindrom
#include <iostream>
using namespace std;

void pal_no(int n, int sum, int r, int temp) {
    // Reverse the number
    while (n > 0) {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    // After the reversal, check if the reversed number is equal to the original number
    if (temp == sum) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
}

int main() {
    int n, r = 0;
    cout << "Enter a value: ";
    cin >> n;
    int sum = 0;
    int temp = n;
    
    // Call the palindrome check function
    pal_no(n, sum, r, temp);

    return 0;
}

//or




#include <iostream>
using namespace std;
int main()
{
    int n,temp,sum=0,r;
    cout<<"enter the value:";
    cin>>n;
    
    temp = n;
    while(n>0){
        r = n%10;
        sum = (sum*10)+r;
        n=n/10;
    }
    if(temp == sum){
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"N.P"<<endl;
    }
 
return 0;
}