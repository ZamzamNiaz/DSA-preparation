#include <iostream>
using namespace std;

int main(){
    // Minimum and maximum numb in array

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i =0; i< arr.size(); i++){
        if(arr[i] < arr[min]){
            min = arr[i];
        }
         if(arr[i]> arr[max]){
            max= arr[i];
        }
    }

    return {min , max};
}