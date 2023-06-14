#include<iostream>
#include<string.h>

using namespace std;

class Student{

	public :
	int id;
	char name[100];
	char roll_nomber[100];
	int std;
	char address[100];
	int contact;

	void setdata()
	{
		cout<<"enter the id = ";
		cin>>id;
		cout<<"enter the name = ";
		cin>>name;
		cout<<"enter the roll nomber = ";
		cin>>roll_nomber;
		cout<<"enter the std = ";
		cin>>std;
		cout<<"enter the address = ";
		cin>>address;
		cout<<"enter the contact = ";
		cin>>contact;
	}

	void getdata()
	{
		cout<<"id = "<<id<<endl
		<<"name = "<<name<<endl
		<<"roll nomber = "<<roll_nomber<<endl
		<<"std = "<<std<<endl
		<<"address = "<<address<<endl
        <<"contact = "<<contact<<endl;		
	}
};
int main()
{
	Student e1,e2,e3,e4,e5;

	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	e5.setdata();

	e1.getdata();
	e2.getdata();
	e3.getdata();
	e4.getdata();
	e5.getdata();

	return 0;
}

