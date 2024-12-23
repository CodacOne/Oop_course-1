#include<iostream>
using namespace std;

class clsA
{

private:
	int _ID;
	string _Firstname;
	string _Lastname;
	string _Fullname;
	string _Email;
	string _Phone;



public:
	clsA(int ID, string Firstname , string Lastname, string Fullname, string Email, string Phone)
	{
		_ID = ID;
		_Firstname = Firstname;
		_Lastname = Lastname;
		_Fullname = Fullname;
		_Email = Email;
		_Phone = Phone;

	}

	string Fullname()
	{

		return _Firstname + _Lastname;

	}

	void Print()
	{
		cout << "Info:\n\n";
		cout << "-----------------\n";
		cout << "ID\t : " << _ID << endl;
		cout << "Firstname: " << _Firstname << endl;
		cout << "Lastname : " << _Lastname << endl;
		cout << "Fullname : " << Fullname() << endl;
		cout << "Email    : " << _Email << endl;
		cout << "Phone    : " << _Phone << endl;
		cout << "-----------------\n";
	}


	void SendEmail(string subject, string body)
	{
		cout << "The following message sent successfully to email : " << _Email << endl;
		cout << "subject :" << subject << endl;
		cout << "body :" << body << endl;
	}

	void SendSms(string TextSMS)
	{
		cout << "The following SMS sent successfully to Phone : " << _Phone << endl;
		cout << TextSMS << endl;
	}


};


int main()
{
	clsA Person(10, "Abd", "Kash", "AbdKash", "abdyaho545@gmail", "0945707194");
	
	Person.Print();
	Person.SendEmail("Hi","How are you?");
	Person.SendSms("How are you?");
	return 0;
}

