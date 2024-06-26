#include <iostream>
using namespace std;

// Getting nCr

// Function signature
int factorial(int n){
    // Finding factorial
     

     // Function body
     int fact = 1;
     for(int i=1; i<=n; i++){
        fact = fact*i;
     }
     return fact;
}

     
     int nCr(int n , int r){
          int nominator = factorial(n);
          int denominator = factorial(r) * factorial(n-r);

         return nominator / denominator;
        
     }

int main(){


    // Function call
   int n, r;
   cout<<"Give some value for n , r: ";

   cin>> n>>r;

   cout<<"Answer is "<<nCr(n,r)<<endl;
}