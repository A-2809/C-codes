#include<iostream>
using namespace std;
void change();
int main()
{
	int age,i;
	cout<<"enter your age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"YOU ARE ELIGIBLE FOR VOTING.\n";
		change();
	}
	else
	{
		cout<<"YOU ARE NOT ELIGIBLE FOR VOTING.\n";
		change();
	}
	return 0;
}
void change()
{
	int i;
	cout<<"Enter 1 to continue and 2 to exit: ";
	cin>>i;
	switch(i)
	{
		case 1: main();
		case 2: break;
	}
}
