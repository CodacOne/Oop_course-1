#include <iostream>
using namespace std;


// Friend Function 


class clsA
{
private:
	int _Var1;

protected:
	int Var3;
public:
	int Var2;

	clsA()
	{
		_Var1 = 10;
		Var2 = 20;
		Var3 = 30;
	}


	friend int Function(clsA A);

};

int Function(clsA A)
{

	return A.Var2 + A._Var1 + A.Var3;
}

int main()
{
	clsA A;
	cout << Function(A);
}