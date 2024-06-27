#include <iostream>
using namespace std;

// FInd Minimum and Maximum number in array

int getMin(int num[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(num[i] < min){
            min = num[i] ;
        }
    }

    return min;
};


int getMax(int num[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(num[i] > max){
            max = num[i] ;
        }
    }
    return max;
};
int main(){
    int size;
    cout<<"Give size of input";
    cin>>size;

    int num[100];
    cout<<"Give value for array";
    for(int i=0; i<=size; i++){
    cin>>num[i];
    }

    cout<<"Minimum value in array is "<<getMin(num , size)<<endl;
    cout<<"Maximum value in array is "<<getMax(num , size)<<endl;
}










// Find Sum of Array
int sumOfArray(int num[], int n){
    int sum =0;
    for(int i =0; i<=n; i++){
        sum = sum + num[i];
    }

    return sum;
}



int main(){
     int size;
    cout<<"Give size of input";
    cin>>size;

    int num[100];
    cout<<"Give value for array";
    for(int i=0; i<=size; i++){
    cin>>num[i];
    }

    cout<<"Sum of array is "<<sumOfArray(num, size)<<endl;
}