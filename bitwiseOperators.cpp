#include <iostream>
using namespace std;

int main(){


// INCREAMENT AND DECREMENT OPERATORS:

//  int a=5;
//  int b=4;

//  cout<<"a&b = "<<(a&b) <<endl;
//  cout<<"a|b = "<<(a|b) <<endl;
// cout<<"a~b = "<<~a <<endl;
//  cout<<"a^b = "<<(a^b) <<endl;




int a =1;
int b=2;
if(a-- >0 && ++b>2){
    cout<<"stage1 - inside-if";
}else{
    cout<<"stage2 - inside-else";
}

cout<<a<<" "<<b<<endl;
// Output = stage 1;







int a,b=1;
a=10;
if(++a){
    cout<<b;
}else{
    cout<<++b;
}

// output =1:







//PRACTICE QUESTIONS:

// int number = 3;
// cout<<(25 *(++number));




// int a =1;
// int b= a++;
// int c= ++a;
//  cout<<b;
//  cout<<c;




// int n;
// cout<<"Give a number: ";
// cin>>n;
// int sum=0;
// for(int i=0; i<=n ; i++){
//     sum = sum+i;
// }
// cout<<sum<<endl;







// Print fibnocci series
int n=10;
int a=0;
int b=1;

for(int i=0; i<=n ; i++){
   int nextNum= a+b;
   cout<<nextNum<<" ";
  
    a=b;
    b=nextNum;
}









// See if number is Prime or not:

int n;
cout<<"give a number";
cin>>n;

for(int i=2; i<n; i++){
    if(n%i==0){
        cout<<"Not a Prime number"<<endl;
        break;
    }else{
        cout<<"Its a prime number"<<endl;
    }
}








// for(int i=0; i<=5; i--){
//     cout<<i<<" ";
//     i++;
// }






// for(int i=0; i<=15; i+=2){
//     cout<<i<<" ";

//     if(i$1){
//         continue;
//     }
//     i++;
// }







// for(int i=0; i<5; i++){
//     for(int j=1; j<=5; j++){
//         cot<<i<<" "<<j<<endl;
//     }
// }







for(int i=0; i<5; i++){
    for(int j=i; j<=5; j++){
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}
return 0;
}