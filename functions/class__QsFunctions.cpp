#include <iostream>
using namespace std;
 

 // Pass By Value
 void update(int a){
    a = a/2;
 }


int main(){
   int a =10;
   update(a);
   cout<< a << endl;
}
// answer is 10






int update (int a){
    a-= 5;
    return a;
}

int main (){
    int a =15;
    update(a);
    cout<<a<<endl;
}
// answer is 15










int update (int a){
    int ans = a*a;
    return ans;
}

int main (){
    int a =14;
    a= update(a);
    cout<<a<<endl;
}

// ans = 196