#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("resurs.in");
int max(int a[], int n){
	int max = a[0];
	for (int i = 1;i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;		
}
int min(int a[], int n){
	int min = a[0];
	for (int i = 1;i < n; i++)
		if (a[i] < min)
			min = a[i];
	return min;		
}
void ch(int a[],int n){
	int i, j;
	int aux;
	for (i = 0;i < n; i++)
		for (j = 0;j < n/2; j++){
			if (a[j] < a[2*j+1]){
				aux = a[j];
				a[j] = a[2*j+1];
				a[2*j+1] = aux;
			}
			if (a[j] < a[2*j+2]){
				aux = a[j];
				a[j] = a[2*j+2];
				a[2*j+2] = aux;
			}
		}
}		
void sd(int a[], int h[],int &n, int &k){
	int i;
	int f = 0;
	cout << "Maxim:" << a[0] << endl;	
	while (n){
		int val = max(a,n);
		int aux;
		for (i = 0;i < n; i++)
			if (a[i] == val && i != n-1){
	     		aux	= a[0];
	     		a[0] = a[i];
	     		a[i] = aux;
			}
		aux = a[0];
		a[0] = a[n-1];
		a[n-1] = aux;
		if (a[n-1] == val){
		   h[k] = a[n-1];
	       n--; k++; 
		}
		if (n == 0)
			cout << "Minim:" << a[n] << endl;
	}
	for (i = 0;i < k; i++)
		cout << h[i] <<  ' ';
}
void sc(int a[], int h[],int &n, int &k){
	int i;
	int f = 0;
	cout << "Maxim:" << a[0] << endl;
	while (n){
		int val = min(a,n);
		int aux;
		for (i = 0;i < n; i++)
			if (a[i] == val && i != n-1){
	     		aux	= a[0];
	     		a[0] = a[i];
	     		a[i] = aux;
			}			
		aux = a[0];
		a[0] = a[n-1];
		a[n-1] = aux;
		if (f == 0 && a[n-1] == val){
			cout << "Minim:" << a[n-1] << endl;
		}
		if (a[n-1] == val){
		   h[k] = a[n-1];
	       n--; k++; 
		   f++;
		}
	}
	for (i = 0;i < k; i++)
		cout << h[i] <<  ' ';
	cout << endl;
}
void p2(int array[], int m){
	int poz;
	cout << "a) Care este indicile nodului parintelui\n b) Descendentii nodului carui doriti sa-i afisati?\npozitia (incepeti a numara de la 0)=";
	cin >> poz;
	if (poz >= 1){
	cout << "Parintele nodului " << array[poz] << " este nodul: " << array[poz/2] << endl;	
	}
	else
		cout << "Nodul dat este radacina arborelui,nu are parinte.\n";
	if (poz*2+1 < m){
		cout << "Descendentul stang al nodoului " << array[poz]; 
		cout << " este nodul: " << array[poz*2+1] << endl;
	}
	else
		cout << "Acest nod nu are descendent stang\n";
	if (poz*2+2 < m){	
		cout << "Descendentul drept al nodoului " << array[poz]; 
		cout << " este nodul: " << array[poz*2+2] << endl;
	}
	else
	cout << "Acest nod nu are descendent drept.\n";
	cout << "\n";
}
int main(){
	int a[100];
	int heap[100];
	int k = 0;
	int i, n;
	int op;
	fin >> n;
	for ( i = 0;i < n; i++)
		fin >> a[i];
	cout << "Vectorul citit:\n";
    for (i = 0;i < n; i++)
		cout << a[i] <<  ' ';
	cout << endl;
	cout << "\n__________________\nProblema Nr.1:\n__________________\n";
	cout << "Vectorul heap:\n";
	ch(a,n);	
	for (i = 0;i < n; i++)
		cout << a[i] <<  ' ';
	cout << endl;
	cout << "\n__________________\nProblema Nr.2:\n__________________\n";
	p2(a,n);
	cout << "\n__________________\nProblema Nr.3:\n__________________\n";
    cout << "Alegeti optiunea cu cifra respectiva\n";
    cout << "1.Sortare descrescatoare\n";
    cout << "2.Sortare crescatore\n";
	cin >> op;
	switch(op){
		case 1 : {
		sd(a,heap,n,k);	
		}; break;
		case 2 : {
		sc(a,heap,n,k);	
		}; break;
		default :
			cout << "A-ti ales cifra gresita , incercati din nou";
	}
	cout << endl;		
	return 0;	
}
