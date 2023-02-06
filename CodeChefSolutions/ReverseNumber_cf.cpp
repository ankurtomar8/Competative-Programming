#include<bits/stdc++.h>
using namespace std;

// Code to reverse number using modulus

int main()
{

	int t ;
	cin>>t;
	while(t--)
	{
	int n ;
	cin >> n;
	int digit_sum = 0;
	while(n>0)
	{
		 int last_digit = n % 10 ;
	
		  n = n /10;
		 digit_sum =  last_digit+ digit_sum * 10 ;
		

	}
	cout<<digit_sum<<endl;
	
}
	
}
