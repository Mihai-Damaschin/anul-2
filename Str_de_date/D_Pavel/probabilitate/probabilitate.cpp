#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
    int n,i,j,aux,x,nr,c[1000],k=0,distinct,h,amp,in,s,d[1000];
    float nn,fr,hz,a[1000];
    ofstream rz("Rezultate.txt");
    cout.setf(ios::fixed);
    cout.precision(5);
    cout<<"Introduceti nr de elemente din sir :";
    rz<<"S-a introdus volumul sirului :";
cout<<"n= ";cin>>n;
rz<<"n= "<<n<<endl;
cout<<"______________________________________________"<<endl;
rz<<"______________________________________________"<<endl;

cout<<"Introduceti fiecare element al sirului :"<<endl;
for(i=1;i<=n;i++) cin>>a[i];
for(i=1;i<=n-1;i++)
for(j=i+1;j<=n;j++)
if(a[j]<a[i]){
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
rz<<"Vectorul sortat crescator este: ";
for(i=1; i <= k; i++) {

cout<<c[i]<<" ";
rz<<c[i]<<" ";
}
cout<<endl;
rz<<endl;
cout<<"______________________________________________"<<endl;

cout<<"|  "<<"x[i]  "<<"|"<<"  n[i] "<<"|"<<" n[i]/n "<<"   |"<<"     FR     "<<"|"<<endl;
cout<<"___________________________________________"<<endl;
rz<<endl;
rz<<"______________________________________________"<<endl;

rz<<"|  "<<"x[i]  "<<"|"<<"  n[i] "<<"|"<<" n[i]/n "<<"   |"<<"     FR     "<<"|"<<endl;
rz<<"___________________________________________"<<endl;


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
cout<<"|   "<<c[i]<<"   |  "<<nr<<"     |  "<<nr<<"/"<<n<<"  |   "<<fr<<"  |"<<endl;
cout<<"___________________________________________"<<endl;
rz<<"|   "<<c[i]<<"   |  "<<nr<<"     |  "<<nr<<"/"<<n<<"  |   "<<fr<<"  |"<<endl;
rz<<"___________________________________________"<<endl;
}
cout<<" Suma :  |  "<<n<<"  |   "<<fr<<"  |"<<endl;
cout<<"___________________________________________"<<endl;
rz<<" Suma :  |  "<<n<<"  |   "<<fr<<"  |"<<endl;
rz<<"___________________________________________"<<endl;


int maxim = a[1];
for (i = 2; i <= n; i++)
if (maxim < a[i])maxim = a[i];

int minim = a[1];
for (i = 2; i <= n; i++)
if (minim > a[i])minim = a[i];

amp=maxim-minim;
cout << "\nAmplitudinea este: " << amp << endl;
rz << "\nAmplitudinea este: " << amp;

cout << "Introduceti lungimea intervalelor : "; cin >> h;
rz << "Lungimea intervalului este: " << h;

cout << endl; rz << endl;
cout<<"______________________________________________"<<endl;

cout<<"|"<<"Intervalele"<<"|"<<"Aparitii"<<"|"<<"Mijlocul"<<"|"<<"     FR     "<<"|"<<endl;
cout<<"___________________________________________"<<endl; rz<<endl;
rz<<"______________________________________________"<<endl;
rz<<"|"<<"Intervalele"<<"|"<<"Aparitii"<<"|"<<"Mijlocul"<<"|"<<"     FR     "<<"|"<<endl;
rz<<"___________________________________________"<<endl;



int interval_length = k / h;
float intervale[k + 1][1];
int get = k % h;

i = 1;
for (j = 1; j <= interval_length; j++) {
    intervale[j][0] = i == 1 ? 0 : c[i - 1];
    intervale[j][1] = c[i + h - 1];
    i = i + h;
}

if (get > 0) {
    intervale[j][0] = c[k - get];
    intervale[j][1] = c[k];
    interval_length += 1;
}

// for(i = 1; i <= interval_length; i ++) {
//     cout << setprecision(0) << "[" << intervale[i][0] << ", " << intervale[i][1] << "] ";
// }
// cout << endl;

int count;
int matches[interval_length];
for(i = 1; i <= interval_length; i++) {
    count = 0;
    for (j = 0; j < intervale[i][1] - intervale[i][0]; j++) {
        for (int l = 1; l <= n; l++)
            if (a[l] == intervale[i][1] - j)
                count++;
    }
    matches[i] = count;
}

// for(i = 1; i <= interval_length; i++)
//     cout << matches[i] << " ";
// cout << endl;

float mid[interval_length];
for(i = 1; i <= interval_length; i++)
    mid[i] = ((intervale[i][1] - intervale[i][0]) / h) + intervale[i][0];

for(i = 1; i <= interval_length; i++)
    cout << setprecision(2) << "|   " <<intervale[i][0]<<intervale[i][1] <<"   |  "<< matches[i] <<"     |  "<< mid[i] <<"  |   "<<fr<<"  |"<<endl;



 rz.close();
return 0;
}