#include <iostream>
#include <math.h>



using namespace std;

int main()
{
  char ch='!' + 10;
  int chislo = 12;
  cout << "Hello World!" << ch << endl << (int)ch << endl << chislo-(200*2) << endl;
  /* cout << "Enter a number";*
  cout << "\nEnter temperature: ";
  cin >> chislo;
  /*cout << "The number " << chislo << " ^2 = " << chislo*chislo << endl;*/
  /*if (chislo < 0) cout << "Freezing \n"; 
  else if ( 0 <= chislo < 15) cout << "Cold\n";
    	else if ( chislo >= 15 && chislo <25 ) cout << "Cool\n";
  				else if ( chislo >= 25 && chislo <35 ) cout << "Warm\n";
  					else cout << "Super hot\n";*/
  
	for ( int i = 0; i < 35 ; i ++) {
	cout << i << "\t"; if ( i % 7 ) break; i +=3;}
 
  		
  	int suma = 0;
	  /*for ( int i = 0; i <= 100; i ++) 
	      {
	      if (!(i % 2)) suma += i;}
	  cout << suma;
	  
	  for ( int i = 0; i <= 100; i ++) {
	  if ( i % 2 == 0) continue; suma += i;}
	   cout << suma;*/
	   
	   int i=0;
	   do {
	   	suma += i;
	   	i++;
	   }
	   while (i<=100);
	   cout << suma;
	   
	   return 0;
}
