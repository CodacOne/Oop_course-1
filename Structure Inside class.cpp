#include <iostream>
using namespace std;


// Structure Inside class


class clsPerson
{

	struct stAddress
	{
		string AddressLine1;
		string AddressLine2;
		string Country;
		string City;
	};

public:
	stAddress Address;


	clsPerson()
	{
		Address.AddressLine1 = "Seif_Aldoula";
		Address.AddressLine2 = "20_H";
		Address.Country = "30";
		Address.City = "Aleppo";
	}

	void print()
	{
		cout << "\nAddressLine1  :" << Address.AddressLine1;
		cout << "\nAddressLine2  :" << Address.AddressLine2;
		cout << "\nCountry       :" << Address.Country;
		cout << "\nCity          :" << Address.City;

	}

};



int main()
{
	clsPerson Person1;
	Person1.print();
}