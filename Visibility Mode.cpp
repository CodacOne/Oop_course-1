#include<iostream>

using namespace std;

class clsA
{

private:

	int _var1;
	void _func1()
	{

		cout << "Func1\n";
	}

protected:

	int var2;
	void func2()
	{

		cout << "Func_2_Protected\n";
	}

public:

	int var3;
	void func3Public()
	{

		cout << "func_3_Public\n";
	}

};

class clsB : protected clsA
{

public:

	void Func_1_Derived()
	{

		clsA::func2();
	}

};



class clsc : public clsB
{

public:

	void Func_2_Derived2()
	{

		clsB::Func_1_Derived();
	}

};


class clsd : protected clsc
{

public:

	int Func_2_Derived2()
	{
		return 5;
		
	}

};



int main()
{
	clsA A;
	A.func3Public();
	clsB B;
	B.Func_1_Derived();
	clsB C;
	C.;
	
	clsB d;
	d.Func_1_Derived();

	return 0;
}