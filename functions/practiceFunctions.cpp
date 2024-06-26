#include <iostream>
using namespace std;
  

  // Arithematic progression
int arithematicProgression(int n){
    int ap = (3*n) +7;
    return ap;
   
}

int main(){
   int n;
   cout<<"Give a number n: ";
   cin>>n;

   cout<<arithematicProgression(n)<<endl;
}









// a AND b 

int setBitsB(int b)
{
  int count = 0;
  while(b!=0)
  {
    if(b&1)
    {
      count++;
    }
    b=b>>1;
  }
  return count; 
}


int setBitsA(int a)
{
  int count = 0;
  while(a!=0)
  {
    if(a&1)
    {
      count++;
    }
    a=a>>1;
  }
  return count; 
}

int main()
{
  int a,b;
  cout<<"Give value for a,b: ";
  cin>>a>>b;
  int ans1=setBitsA(a);
  int ans2=setBitsB(b);
  cout<<"Set bits of A="<<ans1<<endl;
  cout<<"Set bits of B="<<ans2<<endl;
  int ans=ans1+ans2;

  cout<<"Total set bits of A and B are ="<<ans<<endl;

  return 0;
}












\
// FIbnocci series: finding nth no

int fibnociSeries(int n){
    int a =0;
    int b=1;
    for(int i=2; i<n ; i++){
   int nextNum= a+b;
 
    a=b;
    b=nextNum;
}
 return b;
}

int main(){
    int n;
    cout<<"Give Value for n: ";
    cin>>n;


    cout<<"The "<<n<<"th term of series is "<<fibnociSeries(n)<<endl;

    return 0;
}