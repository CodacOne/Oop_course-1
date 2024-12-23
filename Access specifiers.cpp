#include<iostream>
using namespace std;

class clsPerson
{

private:   // only inside class 

	int Num = 10;
	int NumberOfarr()
	{

		return 20;
	}

protected:  //  inside class plus inheritance 

	string Abd= "af";
	string Rami = "Ar";


public:   //  inside class plus inheritance  and outside 

	string FirstName;
	string LastName;

	string FullName()
	{

		return FirstName + " " + LastName;
	}

};

int main()
{
	clsPerson Person1;
	Person1.FirstName = "Abdulfattah";
	Person1.LastName = "KashKash";

	cout << Person1.FullName() << endl;

	return 0;
}

