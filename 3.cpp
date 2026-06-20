#include <iostream>
using namespace std ;
int main(){
    
    // *
    // * *
    // * * *
    // * * * *  
    // The (RIGHT angle Triangle ) pattern problem using nested for loop
    
    
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    for (int i =0; i<=n-1; i++){  // outer loop for N number of lines 

        for (int j=0; j<=i; j++){   

            n-i;  // Inner loop will print (*) n-i times in each row 
                  //   1st row -> n-0
                  //   2nd row -> n-1 
                  //   3rd row -> n-2
                  //  for all the row's 

            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}