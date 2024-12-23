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

		cout << "Func2\n";
	}

public:

	int var3;
	void func3()
	{

		cout << "Func3\n";
	}

};

class clsB :public clsA
{

public:

	void Func1()
	{

	clsA::func2();
	}

};

int main()
{
	clsA A;
	A.func3();
	clsB B;
	B.Func1();
	
	return 0;
}