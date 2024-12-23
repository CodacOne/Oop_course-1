#include <iostream>


using namespace std;

class clsA
{

public:
	int X;
	


	void Print()
	{

		cout <<  "The value of X is : "<< X;

	}


	

};


void Func1(clsA A)
{
	A.X = 100;
}

void Func2(clsA& A)
{
	A.X = 200;
}


int main()

{

	clsA A;

	A.X = 50;
	A.Print();
	cout << "\n\n";

	Func1(A);
	A.Print();
	cout << "\n\n";

	Func2(A);
	A.Print();

	system("pause>0");
	return 0;
}