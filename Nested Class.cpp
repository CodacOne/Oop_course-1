#include <iostream>
using namespace std;


//  Nested Class


class clsPerson
{
	/// Class 2
	class clsAddress 
	{

	public:

		string AddressLine1;
		string AddressLine2;
		string Country;
		string City;


		void print()
		{
			cout << "\nAddressLine1  :" << AddressLine1;
			cout << "\nAddressLine2  :" << AddressLine2;
			cout << "\nCountry       :" << Country;
			cout << "\nCity          :" << City;

		}

	};

	
	//// Class 1	

public:
	
	clsAddress Address;
	clsPerson()
	{
		Address.AddressLine1 = "Seif_Aldoula";
		Address.AddressLine2 = "20_H";
		Address.Country = "30";
		Address.City = "Aleppo";
	}

	

};



int main()
{
	clsPerson Person;
	Person.Address.print();
}