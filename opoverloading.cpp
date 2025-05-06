#include<iostream>
using namespace std;
class loc{
	int longitude,latitude;
	
	public:
		loc(){
			
		}
		
		loc(int Lg,int It){
			longitude=Lg;
			latitude=It;
			
		}
		
		void show()
		{
			cout<<longitude<<" ";
			cout<<latitude<<" \n";
		}
		
		loc operator+(loc op2);
		
};

loc loc::operator+(loc op2)
{
	loc temp;
	temp.latitude=op2.latitude+latitude;
	temp.longitude=op2.longitude+longitude;
	return temp;
}

int main()
{
	loc ob1(10,20),ob2(5,30);
	ob1.show();
	ob2.show();
	//ob1=ob1+ob2;
	ob1=ob1.operator+(ob2);
	ob1.show();
	return 0;
}
