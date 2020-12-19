#include <iostream>

using namespace std;

int n,m,x,y,r;

int main() {
    cout<<"n = ";
    cin>>n;

    cout<<"m = ";
    cin>>m;

    x=n;
    y=m;
    r=n%m;

    while(r!=0){
        n=m;
        m=r;
        r=n%m;
    }

    if (m)
      cout<<"Numerele sunt prime intre ele" << endl;
    else 
      cout<<"Numerele nu sunt prime intre ele" << endl;
}