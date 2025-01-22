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
           }
       }
  if (is_Power) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}

// with fun

#include <iostream>
#include <cmath>
using namespace std;
bool is_powOfTwo(int n){
     for(int i=0; i<=30; i++){
       int ans = pow(2,i);
           if(ans==n){
              return true;
           }
       }
       return false;
}


int main()
{
    bool is_powOfTwo = false;
     int n;
    cout << "Enter a number: ";
    cin >> n;
if (is_powOfTwo) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void reverseString(string& name) {
    int s = 0;
    int e = name.length() - 1;
    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

int main() {
    string name;
    cout << "Enter a name (with or without spaces): ";
    getline(cin, name);  // To capture the full input, including spaces

    reverseString(name);
    cout << "Reversed name: " << name << endl;

    return 0;
}
tani ya = ay inta