#include <iostream>
using namespace std;
int main(){


  // Switch
    // int num = 3;
    // switch (num)
    // {
    // case 1: 
    // cout<<"This is case 1";
    //     break;

    //       case 2: 
    // cout<<"This is case 1";

    //   case 3: 
    // cout<<"This is case 1";
    // break;
    
    // default:
    //     break;
    // }



    // Create a calculator using  switch

    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;

    cout<<"Enter the value of b "<<endl;
    cin>>b;
    
    char op;
    cout<<"Enter the Operation You want to perform"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"a+b is: "<<(a+b)<<endl;
      break;

       case '-':
       cout<<"a-b is: "<<(a-b)<<endl;
      break;

       case '*':
       cout<<"a*b is: "<<(a*b)<<endl;
      break;

       case '/':
       cout<<"a/b is: "<<(a/b)<<endl;
      break;

       case '%':
       cout<<"a%b is: "<<(a%b)<<endl;
      break;
    
    default: 
    cout<<"enter correct operation";
      break;
    }
}