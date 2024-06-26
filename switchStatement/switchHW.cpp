#include <iostream>
using namespace std;

int main(){
    // dividing cash in thousands, hundereds and tens

    int n;
    cout<<"Give some number " ;
    cin>>n;

    switch (n)
    {
    case 13000:
        cout<<"Hundered's in given no: are "<<(n/100)<<endl;
        break;
        case 13:
        cout<<"10's in given no: are "<<(n/10)<<endl;
        break;
        case 10:
        cout<<"one's in given no: are "<<(n/1)<<endl;
        break;

    
    default:
        break;
    }
}