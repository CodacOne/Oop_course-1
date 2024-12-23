#include<iostream>

using namespace std;

class clsperson
{
private:

	int _Id;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	clsperson(int Id, string FirstName, string LastName, string Email, string Phone)

	{
		_Id = Id;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;

	}

	void print()
	{
		cout << "\nInfo:\n" << endl;
		cout << "----------------------------\n";
		cout << "ID          :"<<_Id << endl;
		cout << "FirstName   :"<<_FirstName << endl;
		cout << "LastName    :"<<_LastName << endl;
		cout << "FullName    :" << FullName() << endl;
		cout << "Email       :"<<_Email << endl;
		cout << "Phone       :"<<_Phone << endl;
		cout << "----------------------------\n";
	}

	void setId(int Id)
	{
		_Id = Id;
	}

	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}


	void setLastName(int LastName)
	{
		_LastName = LastName;
	}

	void setEmail(int Email)
	{
		_Email = Email;
	}

	void setPhone(int Phone)
	{
		_Phone = Phone;
	}



	int ID()
	{

		return _Id;
	}


	string FirstName()
	{
		return _FirstName;
	}


	string LastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return _FirstName + "&" + _LastName;
	}


	string Email()
	{
		return _Email;
	}

	string Phone()
	{
		return _Phone;
	}

	void Mail()
	{

		cout << "The Follwing message sent successfuly to email:" << _Email << endl;
		cout << "Subject:Hi\n";
		cout << "Body:How Are you?\n";
	}

};
int main()
{
	clsperson person(20, "Abd", "Fattim", "Abdyaho545@gmail.com", "0945707194");

	person.print();

	
//	person.setId(55);
//	cout << person.ID();
	person.Mail();
	/*
	person.print();
	*/
}
