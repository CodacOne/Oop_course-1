#include<iostream>
using namespace std;

class clsAddress
{

private:


	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;


public:

	clsAddress(string Address1, string Address2, string POBox, string ZipCode)
	{

		_AddressLine1 = Address1;
		_AddressLine2 = Address2;
		_POBox = POBox;
		_ZipCode = ZipCode;
	}


	/////////////// Address1 ///////////////
	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;

	}

	string GetAddressLine1()
	{

		return _AddressLine1;
	}

	/////////////// Address2 ///////////////
	void SetAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;

	}

	string GetAddressLine2()
	{

		return _AddressLine2;
	}

	///////////////_POBox ///////////////
	void SetPOBox(string POBox)
	{
		_POBox = POBox;

	}

	string GetPOBox()
	{

		return _POBox;
	}


	/////////////// _ZipCode ///////////////
	void SetZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;

	}

	string GetZipCode()
	{

		return _ZipCode;
	}

	void PrintAll()
	{
		
		cout << " AddressLine1 : " << _AddressLine1 << endl;
		cout << " AddressLine2 : " << _AddressLine2 << endl;
		cout << " POBox : " << _POBox << endl;
		cout << " ZipCode : " << _ZipCode << endl;
	}


};


int main()
{
	clsAddress Address("damas", "seif al doula", "52522", "0322");

	Address.PrintAll();

	return 0;
}

