#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*int a = 5;
	 a = a+1;
	 cout<<a<<endl;

	 a++;
	 cout<<a<<endl;

	 ++a;

	 cout<<a<<endl;

	 char c = 'a';
	 cout<<c<<endl;
	 cout<<int(c);

	 */
	
	/*int a ; 
	double b;
	cin >> a >> b;
	cout<<a << "  " << b;

*/
/*
	int a , b , c ;
	 cin>> a >> b >> c ;
	 cout<< a << " " << b << "  " << c;  //  Taking Input at different levels



*/

/*
cout<< 7 / 2.0<<endl;
cout<<'c'+1 << endl;

cout<< 7 / 2 * 3<<endl;  // 9
cout<< 3 * 7 /2 <<endl;  //10
*/
// Remeber the Rough Ranges 

  /*   
			int , char , long int , long long int , float ,double

      -10^9 < int < 10^9
         -10^12 < long int < 10^12
         -10^18 < long long int < 10^8
*/
  

/*  int a = 100000;
  int b = 100000;
  // long int c = a*b;    // expected 10000000000 & want this
   long long  int c = a * 1LL * b;    // expected 10000000000
   cout<<c<<endl;		// got 1410065408  why because a*b calculated and got overflow

*/

	double a = 100000;
	double b = 100000; // can't use double very much because of precision error 
	double c = a*b;

	cout<<fixed<<setprecision(0)<<c<<endl; // setting precision to get exact







}