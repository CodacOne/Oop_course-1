#include<iostream>

using namespace std;

class clsperson
{
private:

	int _Id=55;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	
	clsperson()
	{

	}

	clsperson(int Id, string FirstName, string LastName, string Title, string Salary,
		      string Departement, string Email, string Phone)

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
		cout << "ID          :" << _Id << endl;
		cout << "FirstName   :" << _FirstName << endl;
		cout << "LastName    :" << _LastName << endl;
		cout << "FullName    :" << FullName() << endl;
		cout << "Email       :" << _Email << endl;
		cout << "Phone       :" << _Phone << endl;
		cout << "----------------------------\n";
	}


	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}


	void setLastName(string LastName)
	{
		_LastName = LastName;
	}

	void setEmail(string Email)
	{
		_Email = Email;
	}

	void setPhone(string Phone)
	{
		_Phone = Phone;
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

	void SendSms()
	{

		cout << "The Follwing Sms sent successfuly to Phone:" << _Phone << endl;
		cout << "Subject:Hi\n";
		cout << "Body:How Are you?\n";
	}


};


class clsEmployee : public clsperson
{
private :

	string _Title;
	string _Departement;
	float  _Salary;




public :
	// Set
	void setTitle(string Title)
	{
		_Title = Title;
	}

	void setSalary(float Salary)
	{
		_Salary = Salary;
	}

	void setDepartement(string Departement)
	{
		_Departement = Departement;
	}
// Get
	string Title()
	{
		return _Title;
	}

	float Salary()
	{
		return _Salary;
	}

	string Departement()
	{
		return _Departement;
	}
	
};

int main()
{

	clsEmployee Employee;
	Employee.setFirstName("Abd");
	Employee.setLastName("Kash");
	Employee.setEmail("abdyaho545");
	Employee.setPhone("0945557");
	Employee.print();
	Employee.setSalary(4505);
//	cout << Employee.Salary();


	/*

	clsperson person(20, "Abd", "Fattim","Seif Aldoula","5000$","Support", "Abdyaho545@gmail.com", "0945707194");

	person.print();


	//	person.setId(55);
	//	cout << person.ID();
	person.Mail();
	person.SendSms();
	
	person.print();
	*/
}