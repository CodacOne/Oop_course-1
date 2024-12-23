#include<iostream>
using namespace std;

class clsAddress
{

private:

	string _AddressLine1;
	
public:

	clsAddress()
	{
		_AddressLine1 = "Aleppo";

		cout << "Hi,i'm Constructure .\n";
	}
	

	~clsAddress()
	{
		

		cout << "Hi,i'm Destructure .\n";
	}


};



void Func1()
{

	clsAddress Address;
}

void Func2()
{

	clsAddress* Address2 = new clsAddress;
	delete Address2;
}




int main()
{
	Func1();
	Func2();

	
	return 0;
}

