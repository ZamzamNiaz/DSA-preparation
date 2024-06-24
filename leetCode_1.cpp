#include <iostream>
#include <math.h>
using namespace std;

int main (){



    // Reverse integers:
    int n;
    cout<<"Give a number";
    cin>>n;
    int ans=0;
   while(n!=0){
    int digit = n%10;
    if((ans< INT_MAX/10) || (ans> INT_MIN/10) ) 
       ans = (ans * 10)+digit;
       n = n/10;
   }

   cout<<ans<<endl;








    // Complement of Base 10 Integer

        int n;
        int m = n;
        int mask =0;
        // edge case
        if(n ==0){
           cout<<1<<endl;

            }
            
            while(m !=0){
                mask = (mask << 1 | 1);
                m = m >> 1;
        }
        
            int ans = (~n) & mask;
            cout<<ans<endl;
    
    






    // 231. Power of Two231. Power of Two

    for(int i=0; i<=30; i++){
        int ans = pow(2, i);
        if(ans == n){
            cout<<true;
        }else{
            cout<<false;
        }
      cout<<endl;
    }




    //  231. Power of Two || More optimized 

    int ans =1;
     for(int i=0; i<=30; i++){
        if(ans == n){
            cout<<true;;
        }
        if(ans < INT_MAX/2){
        ans = ans *2;
        }
     }
     cout<< false;
         }
         