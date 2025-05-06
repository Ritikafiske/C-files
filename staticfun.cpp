#include<iostream>
using namespace std;
static int m,n;
class Test{
	
	public:
	
	static int func(int x=2)
	{
		m=x;
		cout<<m<<endl;
		n++;
	}
};

int main()
{
	Test T1,t2,t5;
	T1.func() ;
	t2.func(0);
	t5.func(12);
	cout<<"The total no of objects is "<<n;
	return 0;
	
	
}

