#include <iostream>
#include <vector>
using namespace std;




// Print Minimum and maximum in an array
int findMinAndMax(int arr[], int n){
    int min =INT_MAX;
     int max =INT_MIN;
  for(int i =0; i<=n; i++){
     if(arr[i] < arr[min]){
        min = arr[i];
     }
     if(arr[i]>= arr[max]){
        max = arr[i];
       }
  }

  return min, max;
 
}
int main(){
    int arr[5] = {1,3,5,8,15};
    cout<<findMinAndMax(arr, 5)<<endl;
}












// void printAlternatives(int arr[], int n){
//    for (int i=0; i<=n-1; i+2){
//             cout<< i << endl;
//         }
// }

// // print alternatives in an array
// int main(){
//    int arr[6]= {1,2,3,4,5,6};

//       cout<< printAlternatives(arr, 6)<<endl;
// }