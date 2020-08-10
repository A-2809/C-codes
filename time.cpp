#include<iostream>
using namespace std;
class watch{
	private:
		int hour;
		int min;
		int sec;
	public:
		enterdetails();
		displayresult();
		displaytime();
};
watch :: enterdetails(){
	cout<<"enter following details: ";
	cout<<"\n1.Hours? ";
	cin>>hour;
	cout<<"\n2.minutes? ";
	cin>>min;
	cout<<"\n3.seconds? ";
	cin>>sec;	
}
watch ::displayresult(){
	int h,m,t;
	h=hour*60*60;
	m=min*60;
	t=sec+h+m;
	cout<<"total seconds = "<<t<<"seconds.";
}
watch :: displaytime(){
	cout<<"the time is : "<<hour<<":"<<min<<":"<<sec<<"\n";
}

main()
{
	watch t1;
	t1.enterdetails();
	t1.displaytime();
	t1.displayresult();
}
