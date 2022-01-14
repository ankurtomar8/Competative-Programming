#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a = 2;
	int b = 3;
	int c = 4;

	cout<<((b>a)&&(b>c))<<endl; // && Operator


	cout<<((b>a) || (b>c)) <<endl;

/*  Even Odd Conditions     */

		int n;
		cin>>n;
	if( n % 2 == 0)
	{
		cout<<"Yes" <<endl;;

	}
	else if(n % 3 == 0)
	{
		cout<<"Divisible by 3"<<endl;
	}
	else
	{
		cout<<"No"<< endl;
	}




}