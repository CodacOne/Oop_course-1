#include<iostream>

using namespace std;

class clsperson
{
private:

	int _Id = 55;
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



	void setId(int Id)
	{
		_Id = Id;
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

	//////////////////// Get Properity



	int GetId()
	{

		return _Id;
	}

	string GetFirstName()
	{
		return _FirstName;
	}


	string GetLastName()
	{
		return _LastName;
	}

	string GetFullName()
	{
		return _FirstName + "&" + _LastName;
	}

	string GetEmail()
	{
		return _Email;
	}

	string GetPhone()
	{
		return _Phone;
	}

	void Mail()
	{

		cout << "The Follwing message sent successfuly to email:" << _Email << endl;
		cout << "Subject:Hi\n";
		cout << "Body:How Are you?\n";
	}

	void SendSms(string SMS)
	{

		cout << "\nThe Follwing Sms sent successfuly to Phone:" << _Phone << endl;
		cout << SMS<<"\n\n";
	
	}


};

class clsEmployee : public clsperson
{

private:

	string _Title;
	string	_Departement;
	float _Salary;
	

public:

	clsEmployee(int Id, string FirstName, string LastName, string Email, string Phone,
		string Title, string Departement, float Salary) :
		clsperson(Id, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Departement = Departement;
		_Salary = Salary;
		
	}

	// Set properity


	void setTitle(string Title)
	{
		_Title = Title;
	}

	void setDepartement(string Departement)
	{
		_Departement = Departement;
	}

	void setSalary(float Salary)
	{
		_Salary = Salary;
	}

	

	//	Get properity 

	string GTitle()
	{
		return _Title;
	}

	string GDepartement()
	{
		return _Departement;
	}

	float GSalary()
	{
		return _Salary;
	}



};

class clsDevloper :public clsEmployee
{

private :
	string _MainProgrammingLanguage;

public:

	clsDevloper(int Id, string FirstName, string LastName, string Email, string Phone,
		string Title, string Departement, float Salary, string MainProgrammingLanguage) :
		clsEmployee(Id, FirstName, LastName, Email, Phone, Title, Departement, Salary)
	{

		_MainProgrammingLanguage = MainProgrammingLanguage;
	}


     void setMainProgrammingLanguage(string MainProgrammingLanguage)
    {
	 _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    string GMainProgrammingLanguage()
   {
    	return _MainProgrammingLanguage;
   }


	void print()
	{
		cout << "\nInfo:\n" << endl;
		cout << "----------------------------\n";
		cout << "ID                        :" << GetId() << endl;
		cout << "FirstName                 :" << GetFirstName() << endl;
		cout << "LastName                  :" << GetLastName() << endl;
		cout << "FullName                  :" << GetFullName() << endl;
		cout << "Email                     :" << GetEmail() << endl;
		cout << "Phone                     :" << GetPhone() << endl;
		cout << "Title                     :" << GTitle() << endl;;
		cout << "Depatement                :" << GDepartement() << endl;
		cout << "Salary                    :" << GSalary() << "\n";
		cout << "MainProgrammingLanguage   :" << _MainProgrammingLanguage << "\n";

		cout << "----------------------------\n";

	}


};


int main()
{


	clsDevloper Devloper(1100, "Abd", "KashKash", "abdyaho@", "0945707194", "seif", "Controll", 5500, "c++");
	Devloper.print();

	Devloper.SendSms("HI,mester Dev");

}
