#include <iostream>
using namespace std;

// Find Unique element in array

uniqueElement(int array[], int n){
   int ans =0;
     for(int i =0; i<n; i++){
        ans = ans^array[i];
     }
     return ans;

   }
int main(){
    int n;
    cout<<"Give size to array ";
    cin>>n;
    int array[n];
    cout<<"Enter elements of array ";
     for(int i=0; i<=n; i++){
    cin>>array[i];
    }
    cout<<"Unique element in array is "<<uniqueElement(array, n)<<endl;
}

