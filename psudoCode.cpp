#include <iostream>
using namespace std;

int main(){

// CHECk if no is even or odd

int nmbr =0;
cout<<"Give  number";
 cin>>nmbr;
if (nmbr%2==0)
{
    cout<<"Number is Even";
}else{
    cout<<"Number is odd";
}
cout<<" ";







// Print all odd nmbrs in n:

int n=0;
cout<<"Give a number";
cin>>n;
int nmbr=1;


for(int i=0; i<=n; i++){
   if(nmbr<n){
    cout<<nmbr<<" ";
    nmbr= nmbr+2;
   }
}








//Find sum of n number:

int n;
cout<<" Give no:";
cin>>n;

int num=1;
int sum=0;

for(int i=0; i<n; i++){
   if(num<=n){
    sum= sum+num;
    num= num+1;
   }

}
cout<<sum<<endl;










//Find Factorial

int n;
cout<<" Give no:";
cin>>n;

int num=1;
int sum=1;

for(int i=0; i<n; i++){
   if(num<=n){
    sum= sum*num;
    num= num+1;
   }

}
cout<<sum<<endl;













// Check if no isprime or not (Prime:no divided by its own table or 1)

int n=0;
cout<<"Give a no";
cin>>n;
int num=2;
if (num<n)
{
    n%num== 0;
    cout<<n<<" Its a prime no";
}else{
    cout<<n<<" Its not a prime no";
}
cout<<endl;













// check if num is even or odd

int n=0;
if(n%2==0){
    cout<<"even number";
}else{
    cout<<"odd number";
}
cout<<endl;
    return 0;
}