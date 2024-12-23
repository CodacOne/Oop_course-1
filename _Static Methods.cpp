#include<iostream>
using namespace std;

class clsA
{

public:



	static int  Function1()
	{

		return 22;

	}


	 int  Function2()
	{

		return 10;

	}

};


int main()
{
	  clsA A1, A2, A3, A4;


	cout << clsA::Function1() << endl;

	cout << A1.Function2() << endl;

	return 0;
}

