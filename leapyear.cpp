#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int LY;
	cout<<"Enter the year which you want to find is a leap year";
	cin>>LY;
	if(LY % 4 == 0)
	{
		if(LY % 100 == 0)
		{
			if(LY % 400 == 0)
			{
			cout<<"It is a leap year"<<endl;
		    }
		    
		    else
		    {
		    	cout<<"It is not a leap year"<<endl;
			}
	    }
		else
		{
		cout<<"It is  a leap year"<<endl;
	    }
	}
	else
	{
	cout<<"It is not leap year"<<endl;
    }
    

    
    int  n=(365/7);
    cout<<"The no of sundays in a leap year is "<<n+1;
    
    
    
}
