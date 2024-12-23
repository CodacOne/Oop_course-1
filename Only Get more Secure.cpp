#include<iostream>
using namespace std;

class clsPerson
{

private:   // only inside class 

	string _FirstName;       ///    Secure data inside this class
	string _LastName;
	int _ID = 19;

public:


	// Properites Set
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;

	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;

	}


	//  // Properites Get

	string GetFirstName()
	{
		return _FirstName;

	}

	string GetLastName()
	{
		return _LastName;

	}
	// get Id

	int GetID()
	{
		return _ID;

	}

};

int main()
{
	clsPerson Person1;


	Person1.SetFirstName("Abdulfattah");
	Person1.SetLastName("Kash");


	cout << Person1.GetFirstName() << endl;
	cout << Person1.GetLastName() << endl;
	cout << Person1.GetID() << endl;
	return 0;
}

