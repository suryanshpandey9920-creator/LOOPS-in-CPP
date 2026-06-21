#include <iostream>
using namespace std;

int main(){

// 1
// 2 2
// 3 3 3  (Triangle pattern)
int n;
cout << "Enter the value of n : ";
cin >> n;

for (int i =0; i <n ; i++){  // Outer loop for ( n ) number of line 
  
        for (int j =0 ; j< i+1 ; j++){ // Inner loop yo print (i+1) elements 

            cout << (i+1);   
        }
cout << endl;

}

return 0;
}