#include <iostream>
using namespace std;
 typedef struct t_punct {
		double x , y ;
	} tpunct ;

double ab ( tpunct x1 , tpunct y1 , tpunct z1 ){//Abaterea punctului X fata de dreapta YZ
return ( y1.y - z1.y ) * x1.x + ( z1.x - y1.x ) * x1.y + y1.x * z1.y - y1.y * z1.x;
}
int main()
{
 int i, n = 2; //n - numarul de virfuri
	tpunct *a;
	tpunct *m;
	bool f;
	
  cout << "Coordonatele A , B : " ;
  	a = new tpunct[ n + 2 ] ;
  	
  	for ( i = 0 ; i < n ; ++i ) {
  		cout << "Coordonatele x" << i + 1 << " : " ;
  		cin >> a[i].x ;
  		cout << "Coordonatele y" << i + 1 << " : " ;
  		cin >> a[i].y ;
	  }
	  
	    cout << "Coordonatele C , D : " ;
	    m = new tpunct[ n + 2 ] ;
	    
	for ( i = 0 ; i < n ; ++i ) {
  		cout << "Coordonatele z" << i + 1 << " : " ;
  		cin >> m[i].x ;
  		cout << "Coordonatele w" << i + 1 << " : " ;
  		cin >> m[i].y ;
	  }
	  
	  f = true ;
	  a[n].x = a[0].x ;
	  a[n].y = a[0].y ;
	  a[ n + 1 ].x = a[1].x ;
	  a[ n + 1 ].y = a[1].y ;
	  
	  for ( i = 0 ; i < n ; ++i ) {
	  	if ( (ab ( m[i] , a[i] , a[ i + 1 ] ) * ab ( a[ i + 2 ] , a[i] , a[ i + 1 ] )) <= 0 ){
	  		f = false ;
		  }
	  }
	  
	  if ( f ) {
	  	cout << "Intersecteaza" ;
	  } else {
	  	cout << "Nu intersecteaza" ;
	  }
	  	
	    return 0;
}