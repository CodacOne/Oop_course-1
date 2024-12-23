#include<iostream>

using namespace std;

class clsPerson
{

public:

	virtual void print()
	{
		cout << "Hi,i'm a person\n";
	}

};


class clsEmployee : public clsPerson
{

public:

	void print()
	{
		cout << "Hi,i'm an  Employee\n";
	}

};


class clsStudent : public clsPerson
{

public:
	void print()
	{
		cout << "Hi,i'm a Student\n";
	}

};



int main()
{

	clsEmployee Employee;
	clsStudent  Student;

	/*Employee.print();
	Student.print();*/
	
	clsPerson* Person1 = &Employee;
	clsPerson* Person2 = &Student;

	Person1->print();
	Person2->print();

	return 0;
}