#include <iostream>
#include <vector>
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






// Swap alternatives:

void printAlternative(int arr[], int n){
   for(int i=0; i<=n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void swapAlternative(int arr[], int size){
     for(int i=0; i<size; i+=2){ // i=+2 : bcz we have to print alternatives
        if(i+1 <size){
         swap(arr[i], arr[i+1]);
        }
     }
}

int main(){
   int even[8] = {1,3,5,6,7,8,9,2};
   int odd[5]= {2,1,4,3,5} ;

   swapAlternative(even,8);
   printAlternative(even,8);

   cout<<endl;

   swapAlternative(odd,5);
   printAlternative(odd,5);


   return 0;
}






// Find unique number:
void printNum(int arr[], int n){
   for(int i=0; i<=n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int uniqueNum(int arr[], int size ){
   int ans=0;
   for(int i=0; i<size; i++){
      ans = ans^arr[i];
   }
    return ans;
}

int main(){
   int arr[9] = {1,2,1,2,3,4,3,5,5};

   uniqueNum(arr, 9);
   printNum(arr, 9);
}













//Find duplicates in array:

int findDuplicate(int arr[], int size){;
int ans =0;
      for(int i=0; i<arr.size(); i++ ){
         ans = ans^arr[i];

         for(int i=0; i<arr.size(); i++){
            ans = ans^i;
         }
         return ans;
      }
}
int main(){
   int arr[5] = {1,2,4,3,2};

   findDuplicate(arr, 5);
}










// Intersection 
int printIntersection(int arr1[], int arr2[], int n; int m){
  int ans;
   int i=0, int j=0;
  while(i<n && j<m){
      if(arr1[i]== arr2[j]){
         ans.push_back(arr[i]);
      }else if (arr1[i]<arr2[j])
      {
       i++;
      }else{
         j++
      }
      
  }
   
}

int main(){
   int arr1[5] = {1,2,3,4,5};
   int arr2[3] = {2,4};

   printIntersection(arr1, 5);

   cout<<endl;

   printIntersection(arr2, 3);
}







// print iltration of i, j, k

int main(){
   int n;
   cout<<"Give value for n ";
   cin>>n;

   for(int i=0; i<=n; i++){
      for(int j=0; j<=n; j++){
         for(int k =0; k<=n; k++){
            cout<<i<<j<<k<<endl;
         }
         cout<<endl;
      } cout<<endl;
   } cout<<endl;
}








// Sort 0, 1 in array

void printOnesAndZeros(int arr[], int n){
         for(int i=0; i<=n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void sortOnesAndZeros(int arr[], int n){
   int i =0; int j= n-1;
   while(i < j){
      while(arr[i]==0 && i<j){
         i++;
      }
       while(arr[j]==1 && i<j){
      j--;
   }
   // if we have reached here that means
   // arr[i] ==1, arr[j]==0
   swap(arr[i], arr[j]);
   i++;
   j--;
   }
  
}

int main(){
   int arr[10] = {1,0,1,0,0,1,0,0,0,1};

   sortOnesAndZeros(arr, 10);
   printOnesAndZeros(arr, 10);
   return 0;
}