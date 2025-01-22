//pattern questions

#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the value:";
   cin>>n; 
   
   for(int i=0; i<=n; i++){
       for(int j=0; j<i; j++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}
//n = 5
****
***
**
*

//or with funtion

#include <iostream>
using namespace std;

void pat_is(int i, int j, int n ){
    for(int i=n; i>=0; i--){
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main()
{
    int n,i,j;
    cout<<"enter the value:";
    cin>>n;
    
    pat_is(i,j,n);

    return 0;
}

//second pattern

#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the value:";
   cin>>n; 
   
   for(int i=0; i<=n; i++){
       for(int j=0; j<i; j++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}
//
*
**
***
****
*****
//or with fun


#include <iostream>
using namespace std;

void pat_is(int i, int j, int n ){
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main()
{
    int n,i,j;
    cout<<"enter the value:";
    cin>>n;
    
    pat_is(i,j,n);

    return 0;
}

//third pattern

#include <iostream>
using namespace std;
int main()
{
   
    for(int i=0; i<=5; i++){
        for(int k=5-i; k>0; k--){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

//n=5
     * 
    **
   ***
  ****
 *****
 //OR with funcn

#include <iostream>
using namespace std;

void pat_is(int i, int j, int n ){
    for(int i=0; i<=n; i++){
        for(int k=n-i; k>0; k--){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main()
{
    int n,i,j;
    cout<<"enter the value:";
    cin>>n;
    
    pat_is(i,j,n);

    return 0;
}


//Fourth pattern

#include <iostream>
using namespace std;
int main()
{
   
    for(int i=5; i>0; i--){
        for(int k=5-i; k>0; k--){
            cout<<" ";
        }
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

*****
 ****
  ***
   **
    *
    
//OR with funcn

#include <iostream>
using namespace std;

void pat_is(int i, int j, int n ){
    for(int i=n; i>=0; i--){
        for(int k=5-i; k>0; k--){
            cout<<" ";
        }
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main()
{
    int n,i,j;
    cout<<"enter the value:";
    cin>>n;
    
    pat_is(i,j,n);

    return 0;
}

// fifth pattern

#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the value:";
   cin>>n; 
   
   for(int i=0; i<=n; i++){
       for(int k=n-i; k>0; k--){
           cout<<" ";
       }
       for(int j=0; j<=n; j++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}
    *****
   *****
  *****
 *****

 //OR with fun

#include <iostream>
using namespace std;

void pat_is(int i, int j, int n ){
    for(int i=0; i<n; i++){
        for(int k=n-i; k>0; k--){
            cout<<" ";
        }
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main()
{
    int n,i,j;
    cout<<"enter the value:";
    cin>>n;
    
    pat_is(i,j,n);

    return 0;
}
