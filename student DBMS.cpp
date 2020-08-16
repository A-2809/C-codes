#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<fstream>
using namespace std;
int login();
struct a {

		char name[10];
		char place[20];
		char section;
		int phn;
		char DOB[10];
		int clas;
		int regno;

}add,t,c;

void details()
{
	int z,x;
	fstream fp;
	fp.open("new_file.txt",ios::out);
	cout<<"\nenter registration number: ";
	cin>>x;
	while(!fp.eof())
	{
	if(x==add.regno)
	{
		cout<<"this number is already being registerd. try a new number.";
		details();
	}
	}
	cout<<"Enter your details: ";
	cout<<"Name: ";
	cin>>add.name;
	cout<<"\nDOB: ";
	cin>>add.DOB;
	cout<<"\nClass: ";
	cin >>add.clas;
	cout<<"\nsection: ";
	cin>>add.section;
	cout<<"\nplace: ";
	cin>>add.place;
	cout<<"\nphone no.: ";
	cin>>add.phn;
	cout<<"your registration is complete. WELCOME \n";
	fp<<add.regno<<"\t"<<add.name<<"\t"<<add.DOB<<"\t"<<add.clas<<"\t"<<add.section<<"\t"<<add.place<<"\t"<<add.phn<<"\n";
	cout<<"done.\n";
	fp.close();
	cout<<"\nEnter 1 to exit or 2 to go to menu bar\n";
	cin >>z;
	switch(z)
	{
		case 1: system("cls");
				break;
		case 2: system("cls");
				login();
	}

}
void displaydetails()
{

	int x=0,y;
	fstream fp;
    fp.open("new_file.txt",ios::out | ios::in);

	cout<<"enter your registration number: ";
	cin>>c.regno;
	while(!fp.eof())
	{

	if(c.regno==add.regno)
	{
	cout<<"details entered by you: ";
	cout<<"\nName:"<<add.name;
	cout<<"\nDOB: "<<add.DOB;
	cout<<"\nClass: "<<add.clas;
	cout<<"\nsection: "<<add.section;	}
	else
	{
	cout<<"\nregistration number doesn't match.";
	cout<<"\nenter 1 to retry and 2 to exit";
	cin>>y;
	switch(y)
	{
		case 1: system("cls");
				displaydetails();
		case 2: system("cls");
				login();
	}}}
	fp.close();
	login();
}

void list()
{
	fstream fp;
    
	fp.open("new_file.txt",ios::in|ios::out);
	cout<<"Enter the class: ";
	cin>>t.clas;
	cout<<"Enter the section: ";
	cin>>t.section;
	fp.open("user.txt",ios::out|ios::in);
	while(!fp.eof()){

	if(t.clas==add.clas || t.section==add.section)
	{
		cout<<add.name<<"\n";
	}
	else
	cout<<"you have entered the wrong details: ";
	}
	int i;
	cout<<"enter 1 to retry and 2 to exit: ";
	cin>>i;
	switch(i)
	{
		case 1: list();
		case 2: login();
		}
	fp.close();
}

int login()
{

	int i;
	cout<<"1.Enter 1 for registration of new student\n";
	cout<<"2.Enter 2 for seeing the details\n";
	cout<<"3.Enter 3 for seeing the list of any class\n";
	cout<<"4.Enter 4 to exit\n";
	
	cout<<"enter your choice: ";
	cin>>i;
	switch(i)
	{
		case 1: details();
		case 2: displaydetails();
		case 3: list();
		case 4: break;
	}

}


int main()
{

	cout<<"\t\tWELCOME TO SCHOOL\n";
	
	login();

}
