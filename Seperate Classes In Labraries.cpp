#include <iostream>
#include "clsperson.h"
#include "clsEmployee.h"

using namespace std;





int main()

{

	clsEmployee Employee1(10, "Abdulfatah", "Kaskash", "A@a.com", "8298982", "CEO", "ProgrammingAdvices", 5000);

	Employee1.Print();

	system("pause>0");
	return 0;
}