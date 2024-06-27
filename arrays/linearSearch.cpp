#include <iostream>
using namespace std;
bool searchElement(int arr[], int size, int key){
    for(int i=0; i<=size; i++){
        if(arr[i]==key){
            return 1; 
        }
    }
    return 0;
   
}
int main(){

    int arr[5] = {3 , 6, -7, 8, 2};
    int key;
    cout<<"Enter Value that u want to search ";
    cin>>key;

    bool found = searchElement(arr, 5, key);
    if(found){
        cout<<"Key is present "<<endl;
    }else{
        cout<<"Key is not present";
    }
}