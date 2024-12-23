#include <iostream>


using namespace std;

class clsEmployee
{

public:
	int Id;
	string Name;
	float Salary;


	clsEmployee(int Id,string Name,float Salary)
	{
		this->Id = Id;
		this->Name = Name;
		this->Salary = Salary;

	}

	void Print()
	{

		cout << Id << "  " << Name << "  " << Salary << " ";

	}
	

	static void Func(clsEmployee Employee)
	{
		Employee.Print();
	
	}

	void Func2 ()
	{
		Func(*this);

	}

};



int main()

{

	clsEmployee Employee(10 , "Abdulfatah", 5000);

	Employee.Print();
	Employee.Func2();

	system("pause>0");
	return 0;
}