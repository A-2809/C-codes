#include<iostream>
using namespace std;
int sum(int n);
int main()
{
	int n,i,flag=0;
	cout<<"enter the number: ";
	cin>>n;
	for(i=2;i<=(n/2)+1;++i)
	{
		if( sum(i)!=1)
		{
			if(sum(n-i)!=1)
			{
				cout<< n <<" = "<< i<< " + "<< n-i<< ".\n";
				flag=1;
			}
		}
	}
	if(flag==0)
	cout<< n << " cannot be expressed as sum of two prime numbers.\n";
	return 0;
}
int sum(int n)
{
	int i,prime=0;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			prime=1;
			break;
		}
	}
	return prime;
}
