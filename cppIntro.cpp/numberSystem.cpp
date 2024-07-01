#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // Converting from decimal to Binary

    int n;  
    cout<<"Give a number";
    cin>>n;

     int ans=0;
    int i=0;

    while(n!=0){
        int bit = n & 1;

        ans= (bit * pow(10, i)) +ans;
        n = n>>1;
        i ++;
    }

    cout<<"Answer is : "<<ans<<endl;









    // Convert a negative decimal number into binary

    int n;
    cout<<"Give a number in -Ve";
    cin>>n;

     int ans=0;
    int i=0;

    while(n!=0){
        int bit = n & 1;

        ans= (bit * pow(10, i)) +ans;
        n = n>>1;
        i ++;
    }
      cout<<"Answer is "<<ans<<endl;

      int onesComplement = ~ans;
      int twosComplement = onesComplement +1;

      cout<<"The binary represntaion of -ve number is "<< twosComplement<<endl;







    // // Converting numbers from  binary to decimal

    int n;
    cout << "Give a number ";
    cin >> n;
     
     int ans =0;
     int i=0;
     while(n!=0){
        int digit = n%10;
        if(digit ==1){
           ans = ans +  pow(2, i);
          
        }

        n = n/10;
         i++;
     }

     cout<<ans<<endl;
    return 0;
}
