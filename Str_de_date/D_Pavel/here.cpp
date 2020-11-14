#include <iostream>
using namespace std;
int main()
{
    int n,a[1000],i,j,aux,x,nr,c[1000],k=0,distinct;
    float nn,fr,hz;
    cout.setf(ios::fixed);
    cout.precision(5);
    cout<<"Introduceti nr de elemente din sir :";
cout<<"n= ";cin>>n;
cout<<"______________________________________________"<<endl;

cout<<"Introduceti fiecare element al sirului :"<<endl;
for(i=1;i<=n;i++) cin>>a[i];
for(i=1;i<=n-1;i++)
for(j=i+1;j<=n;j++)
if(a[j]>a[i]){
aux=a[i];
a[i]=a[j];
a[j]=aux;}
for(i=1;i<=n;i++)
{
distinct=1;
for(j=i+1;j<=n;j++)
if(a[i]==a[j])
distinct=0;
if(distinct)
{
k++;
c[k]=a[i];
}
}
cout<<"_______________________________________________"<<endl;

cout<<"Vectorul sortat crescator este: ";
for(i=k;i>=1;i--) 
cout<<c[i]<<" ";
cout<<endl;
cout<<"______________________________________________"<<endl;

cout<<"|  "<<"x[i]  "<<"|"<<"  n[i] "<<"|"<<" n[i]/n "<<"   |"<<"     FR     "<<"|"<<endl;
cout<<"___________________________________________"<<endl;
for(i=k;i>=1;i--){
nr=0;
nn=0;
for(j=1;j<=n;j++)
    {
        if(a[j]==c[i])
            nr++;
    }
    nn=(float)nr/(float)n;
    fr+=nn;
cout<<"|   "<<c[i]<<"   |  "<<nr<<"     |  "<<nn<<"  |   "<<fr<<"  |"<<endl;
cout<<"___________________________________________"<<endl;
}
cout<<" Suma :  |  "<<n<<"  |   "<<fr<<"  |"<<endl;
cout<<"___________________________________________"<<endl;
cin>>x;
return 0;
}