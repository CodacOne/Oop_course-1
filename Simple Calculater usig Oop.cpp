#include<iostream>
using namespace std;

class clsCalculater
{

private:   // only inside class 

	float _Result = 0;
	float _LastNumber = 0;
	string _LastOperation ="Clear";
	float  _PreviousNumber = 0;

	bool _iSZero(short number)
	{

		return (number==0);
	}

public:

	void Add(int number)
	{
		_LastNumber = number;
		_LastOperation = "Adding";
		_PreviousNumber = _Result;
		_Result += number;
	}
	

	void Sub(int number)
	{
		_LastNumber = number;
		_LastOperation= "Subtracting";
		_PreviousNumber = _Result;
		_Result -= number;
	}

	void Mul(int number)
	{

		_LastNumber = number;
		_LastOperation = "multiplying";
		_PreviousNumber = _Result;
		_Result *= number;
	}
	
	void Div(int number)
	{

		if (_iSZero(number))
		{
			
			number = 1;
		}
		_LastNumber = number;
		_LastOperation = "division";
		_PreviousNumber = _Result;
		_Result /= number;

	}

	void Clear()
	{

	_Result = 0;
	_LastOperation = "Clear";
	_LastNumber = 0;
	_PreviousNumber = 0;
	}


	void CancelLastOperation()
	{
		//_LastNumber = 0;
		_LastOperation = "Canceling Last Operation";
		_Result=_PreviousNumber  ;
	}

	void PrintResult()
	{

		cout << "Result" << " After " << _LastOperation << " " << _LastNumber;
		cout << " is : " << _Result << endl;
	}

};

int main()
{
	clsCalculater Calculater;

	Calculater.Add(10);
	Calculater.PrintResult();

	Calculater.Sub(5);
	Calculater.PrintResult();

	Calculater.Clear();
	Calculater.PrintResult();

	Calculater.Add(10);
	Calculater.PrintResult();

	Calculater.Mul(5);
	Calculater.PrintResult();

	Calculater.Div(0);
    Calculater.PrintResult();


	Calculater.Add(100);
	Calculater.PrintResult();

	Calculater.CancelLastOperation();
	Calculater.PrintResult();

	return 0;
}

