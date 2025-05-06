#include<iostream>
using namespace std;

class Demo{
	int m,n;
	public:
		Demo(int x=0,int y=0)
		{
			m=x;
			n=y;
			cout<<m<<" "<<n<<endl;
		}
};

int main()
{
	Demo d1;
	Demo d2(10);
	Demo d3(5,6);
}
