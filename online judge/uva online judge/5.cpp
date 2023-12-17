#include<iostream>
#include<cstring>

using namespace std;

class student{
	public:
		string name,address;
		int age;

		student()
		{
			name="unknown";
			address="Not available";
			age=0;
		}
		void setinfo(string name, int age)
		{


			this->name = name;
			this->age = age;

		}
		void setinfo(string name, string address, int age)
		{
		    this->name = name;
			this->age = age;
			this-> address = address;

		}

		void getinfo()
		{
			cout<< "name: "<< name<< endl;
			cout << "Age: "<< age<< endl;
			cout << "Address: "<< address<< endl;
		}
};

int main()
{
	int x;
	cout << "Enter no of students " << endl;;
	cin>> x;
	student s[x];
	string name,address;
	int i,age;

	cout << "Enter name and address " << endl;

	for(i=0;i<x/2;i++)
	{
	    cout << "Name : ";

		cin >> name;

		cout << "Age : ";

		cin >> age;

		s[i].setinfo(name,age);
	}

    cout << "Enter name,address and age " << endl;

	for(i=(x/2);i<x;i++)
	{
	    cout << "Name : ";

		cin >> name ;

		cout <<  "Age : ";

		cin >> age;

		cout <<  "Address : ";

		cin >> address;


		s[i].setinfo(name,address,age);
	}

	cout << endl << endl;

	for(i=0;i<x;i++)
	{
		s[i].getinfo();
	}
	return 0;
}
