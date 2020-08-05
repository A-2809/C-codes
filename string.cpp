#include<iostream>
using namespace std;
int main()
{
	char a[5],i;
	cout<<"entre the input: ";
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	cout<<"you entered: ";
	for(i=0;i<=4;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
}
