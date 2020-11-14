#include <iostream>
using namespace std;

	char in[10];
	int  ou[10];
	int  i;
void convert()
{
	while(in[i]!=NULL)
	{
		if(in[i]== 'I')
		  ou[i]=1;

		  if(in[i]== 'V')
		  ou[i]=5;

		  if(in[i]== 'X')
		  ou[i]=10;

		  if(in[i]== 'L')
		  ou[i]=50;

		  if(in[i]== 'C')
		  ou[i]=100;

		  if(in[i]== 'D')
		  ou[i]=500;

		  if(in[i]== 'M')
		  ou[i]=1000;




		  i++;

	}
}

int ar(int f)
{
	  int n = 0,total=0,g=0;
	  i=0;
	  cout<<"Introduceti un nr Roman (X): ";
	  cin>>in;
	  convert();
		while(ou[n]!=NULL)
		{
			 if(ou[n]>=ou[n+1])
			 {
				 total=total+ou[n];

			 }
			 else
			 if(ou[n]<ou[n+1])
				{
				  g=ou[n+1]-ou[n];
				  n++;
				}
				 f=total+g;
				n++;
		}
		return f;
}


int ra(int y,int s,int num){
	char *p[] = {
    "I",  //1
    "IV", //4
    "V",  //5
    "IX", //9
    "X",  //10
    "XL", //40
    "IL", //49
    "L",  //50
    "XC", //90
    "IC", //99
    "C",  //100
    "CD", //400
    "ID", //499
    "D",  //500
    "CM", //900
    "IM", //999
    "M"}; //1000
  int r[] = {1, 4, 5, 9, 10, 40, 49, 50, 90, 99, 100, 400, 499, 500, 900, 999, 1000};
  int x = sizeof r / sizeof r[0]; 
  x--; 
  while ( num > 0 )
  {
    if ( num >= r[x] )
    {
   cout<<p[x];
      num -= r[x];
    }
    else
      x--;
  }
  return 0;
}

int main (void)
{int x;int r ; int num;int f,g,z;

cout<<endl;
f = ar(f);
g = ar(g);
num = f*g;

cout<<"Produsul acestor numere ste egal cu : ";ra(x,r,num);
}


void who_got_friends(int a[100][100]):
    cout << "Persoanele ce au cel putin doi prieteni sunt";
    for (i = 0; i < n; i++)
        int sum = 0;
        for (j = 0; j < n; j++)
            if a[i][j] == 1:
                sum += 1
        sum >= 2 and print("{} ".format(i + 1), end="")
    print()