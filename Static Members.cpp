#include<iostream>
using namespace std;

class clsA
{

public:

	int Var;
	static int Counter;

	clsA()
	{
		Counter++;

	}

	void Print()
	{

		cout << "Var = " << Var << endl;
		cout << "Counter = " << Counter << endl;

	}

};


   int  clsA::Counter = 0;  // Static variable initialization Outside

int main()
{
	clsA A1,A2,A3,A4;

	A1.Var = 50;
	A2.Var = 100;
	A3.Var = 150;

	A1.Print();
	A3.Print();

	A1.Counter = 500;

	cout << "After changing The static member counter in one object :"<<endl;

	A1.Print();
	A2.Print();
	A3.Print();

	return 0;
}

