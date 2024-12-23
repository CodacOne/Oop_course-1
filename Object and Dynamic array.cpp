  
// Object and Dynamic array
#include<iostream>
#include<vector>

using namespace std;

class clsA
{
public:

	// dummy constructor
	clsA() {}

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
	short NumberOfObjects = 5;

	clsA* arrayA ;
	arrayA = new clsA[NumberOfObjects];

	for (int i=0;i< NumberOfObjects;i++)
	{
		arrayA[i] = clsA(i);
	}

	for (int i = 0; i < NumberOfObjects; i++)
	{
		arrayA[i].Print();
	}

	return 0;


	system("pause>0");

}
