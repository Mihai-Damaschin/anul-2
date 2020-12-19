# include <iostream>
#include <string>
using namespace std;
struct lista
{
int virsta;
double telefon;
string nume;
lista *leg;
};
lista *p, *prim, *ultim;
int n;
void creare(lista *&prim, lista *&ultim) {
 int i,new_virsta;
 double new_telefon;
string new_nume;
 cout<<"Dati volumul listei n = ";
 cin>>n;
 cout<<"Dati numele "; cin>>new_nume;
 cout<<"Dati virsta "; cin>>new_virsta;
 cout<<"Dati telefonul "; cin>>new_telefon;
 prim=new lista;
 prim->nume=new_nume;
 prim->virsta=new_virsta;
 prim->telefon=new_telefon;
 prim->leg=NULL;
 ultim=prim;
 for(i=2;i<=n;i++)

{

cout<<"Dati numele "<<i<<" = "; cin>>new_nume;
 cout<<"Dati virsta "<<i<<" = "; cin>>new_virsta;
 cout<<"Dati telefonul "<<i<<" = "; cin>>new_telefon;
p=new lista; p->nume=new_nume;p->virsta=new_virsta;p->telefon=new_telefon; p->leg=prim;
prim=p;

}
}
void afisare(lista *prim) {
 p=prim;
 while(p!=NULL)

{
cout<<p->nume<<" ";
cout<<p->virsta<<" ";
cout<<p->telefon<<" "<<endl;
p=p->leg;

}
}

int main(void)
{
creare(prim, ultim);
afisare(prim);

}