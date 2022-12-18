#include<iostream>
using namespace std;
class complex{
	int x,y;
	public:
		void constructor()
		{
			x=y=0;
		}
		void input()
		{
			constructor();
			cout<<"Enter any real part=";
			cin>>x;
			cout<<"Enter any imaginary part=";
			cin>>y;
			cout<<endl;
		}
		void show()
		{
			cout<<"Complex number is as"<<x<<"+i"<<y<<endl;
		}
		friend complex add(complex ob1,complex ob2);
		friend complex sub(complex ob1,complex ob2);
};

complex add(complex ob1,complex ob2)
{
	ob1.x=ob1.x+ob2.x;
	ob1.y=ob1.y+ob2.y;
	return ob1;
}

complex sub(complex ob1,complex ob2)
{
	ob1.x=ob1.x-ob2.y;
	ob1.y=ob1.x-ob2.y;
	return ob1;
}

int main()
{
	complex obj1,obj2,ob;
	obj1.input(); obj2.input();
	
	ob=add(obj1,obj2); ob.show();
	ob=sub(obj1,obj2); ob.show();
}
