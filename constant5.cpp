#include<iostream>
using namespace std;



class Demo
{
	public:
		int i;
		const int j;//constant characteristics


		Demo(int a,int b):j(b)
		{
			i=a;
			
		}
		void fun()
		{
			cout<<"Inside fun \n";
			i++;  //Allowed
			//j++;   NA
		}

		void gun(int a,const int b)const// constants function/behaivoiour
		{

			int x=10;
			const int y=20;// constant local variablr

			cout<<"Inside gun \n";
			//i++; // Not Allowed
			//j++;  //NA
			x++; //Allowed
			//y++;  //Not Allowed
			a++; //Allowed
			//b++;//Not Allowed

		}
};

int main()
{
	
	Demo obj1(11,21);
	const Demo obj2(11,21);

	obj1.fun();
	obj1.gun(10,20);

	//obj2.fun(); error
	obj2.gun(10,20);


	
	return 0;
}