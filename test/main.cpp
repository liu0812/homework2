#include "calculator.h"
#include <iostream>
using namespace std;
int main()
{	
	int i;
	calculator problem;
	i=problem.enterdataandjudge();
	if(i==1)
	{
	problem.calculate();
	problem.output();
	}
	system("pause");
	return 0;
}
