
//Object with Parameterized

#include<iostream>
#include<vector>

using namespace std;

class clsA
{
public:

	
	//Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}

	int x;

	void Print()
	{
		cout << "The value of x=" << x << endl;
	}

};


int main()

{
	clsA arr[] = { clsA(15), clsA(45) , clsA(30) };

	for (int i = 0; i < 3; i++)
	{
		arr[i].Print();
	}

	return 0;

}
