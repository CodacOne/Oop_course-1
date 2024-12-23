#include <iostream>
using namespace std;


// Friend Class 


class clsA
{
private :
	int _Var1;

protected :
	int Var3;
public:
	int Var2;

	clsA()
	{
		_Var1=10;
		Var2 =20;
		Var3 = 30;
	}


	friend class clsB;
};

class clsB 
{
public:
	void Display(clsA A)
	{
		cout << "\nThe value of Var2 :" << A.Var2;
		cout << "\nThe value of Var1 :" << A._Var1;
		cout << "\nThe value of Var1 :" << A.Var3;
	}

};


int main()
{
	clsA A;
	clsB B;
	B.Display(A);
}