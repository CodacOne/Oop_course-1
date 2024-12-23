#include<iostream>

using namespace std;

class clsPerson
{

public:

	string FullName = "Abdulfatah";

};


class clsEmployee :public clsPerson
{

public:

	string Title = "CEO";

};


int main()
{
	
	clsEmployee Employee;
	// cout<< Employee.FullName<< endl;
	
	////////// Up casting

	clsPerson * Person = & Employee;
	cout << Person->FullName << endl;

	////////// Down casting

	/*clsPerson* Employee  = & Person;
	cout << Person->Title << endl;*/



	return 0;
}