#include <iostream>
using namespace std;

int main(){
    // Chocolate distribution : find minimum differenece

    sort (arr.begin() , arr.end());
    int min = INT_MAX;
    int n;
    for(int i=0; i+m-1 <n; i++){
       int miniDiff = arr[i+m-1] - arr[i];
       if(miniDiff <min){
        min = miniDiff;
       }
    }
    return min;
}