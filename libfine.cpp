/*A library charges a fine for every book return late. For first 5 days the
fine is 50 paisa, for 6-10 days fine is one rupee and above 10 days fine is
5 rupees. If you return the book after 30 days your membership will be
cancelled. WAP to accept no. of days the member is late to return the
book and display the fine or appropriate message.*/


#include<iostream>
using namespace std;
int main()
{
	int n,fine;
	cout<<"Enter the no. of days the member is late to return the book "<<endl;
	cin>>n;
	
	if(n<=5)
	{
		fine=50;
		cout<<"The fine for the  late book submission is "<<fine<<" paise"<<endl;
	}
	
	else if(n>=6&&n<=10)
	{
		fine=1;
		cout<<"The fine for the late book submission is "<<fine<<" rupees"<<endl;
	}
	
	else if(n>10&&n<30)
	{
		fine=5;
		cout<<"The fine for the latebook submission is "<<fine<<" rupees"<<endl;
	}
	
	else
	{
		cout<<"Your membership is cancelled"<<endl;
	}
	
	return 0;
}
