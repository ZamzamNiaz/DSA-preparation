#include <iostream>
using namespace std;

// int binarySearch(int arr[], int n, int key){
//     int start =0; 
//     int end = n-1;

//     int mid = (start+end) / 2;

//     while(start<=end){
//         if(arr[mid] ==key){
//             return mid;
//         }
//         if(key > arr[mid]){
//             start = mid+1;
//         }else{
//             end = mid-1;
//         }
//         mid = (start+end)/2;
//     }
//     return -1;
// }
// int main(){
//     int even[8] = { 1,3,5,7,9,11,12,14};
//     int odd[5] = {1,2,3,8,9};

//     int evenIndex = binarySearch(even, 8, 9);
//     cout<<"Even index of 9 is "<<evenIndex<<endl;


//     int oddIndex = binarySearch(even, 8, 9);
//     cout<<"Odd index of 3 is "<<oddIndex<<endl;
// }











// // First and last position of an element in array

// int firstAccourance(int arr[], int size, int key){
//     int start=0;
//     int end=size-1;
//     int ans =-1;

//     int mid = start + (end-start)/2;

//     while(start<=end){
//         if(arr[mid]==key){ 
//             ans=mid;
//             end = mid-1;
           
//         }
//         if(key>arr[mid]){ // triverse in right
//             start = mid+1;
//         }else{    // triverse in left
//             end = mid-1;
//         }

//         mid = start + (end-start)/2;
//     }
//     return ans;
// }

// int lastAccourance(int arr[], int size, int key){
//     int start=0;
//     int end=size-1;
//     int ans =-1;

//     int mid = start + (end-start)/2;

//     while(start<=end){
//         if(arr[mid]==key){ 
//             ans=mid;
//             start = mid+1;
           
//         }
//         if(key>arr[mid]){ // triverse in right
//             start = mid+1;
//         }else{    // triverse in left
//             end = mid-1;
//         }

//         mid =start + (end-start)/2;
//     }
//     return ans;
// }


// int main(){
//     int arr[8] = {1,2,2,2,2,2,3,3};

// int FirstIndex= firstAccourance(arr, 8, 2);
// int LastIndex= lastAccourance(arr, 8, 2);

// cout<<"First Accourance of 2 is on index "<<FirstIndex<<endl;
// cout<<" And last accourance of 2 is at index "<<LastIndex<<endl;

// int totalAccourance = (LastIndex-FirstIndex)+1;
// cout<<"Total accourance of element is "<<totalAccourance<<endl;

// }























// Find PIvot element's index
   

   // 1. Find minimum numb in array
 int pivotElement(int arr[], int n){
    int start = 0; 
    int end= n-1;
    int mid = start + (end -start)/2;
    while(start<end){
        if(arr[mid]>= arr[0]){
            start = mid +1;
        }else{
            end = mid;
        }
        mid = start + (end -start)/2;
    }
    return start;
 }

int main(){
    int arr[5] = {8, 10, 17, 9, 3};

    cout<<"The Index of Pivot element is "<<pivotElement(arr,5)<<endl;
}



