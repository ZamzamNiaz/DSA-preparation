#include <iostream>
using namespace std;

int main(){

   // find maximum subarray
    int sum =0; 
    int maxi = arr[i];

    for(int i =0; i<= arr.size(); i++){
         sum += arr[i];
         maxi = max(maxi, sum);
         if(sum < 0){
           sum = 0;
         }
    }
}