#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	//Initializing Variables
	int Input1 = 0, Input2 = 0, Count = 0, Divider = 1, Maximum = 0;

	//Taking Inputs
	cout << "Please Enter The First Number:- ";
	cin >> Input1;
	cout << "Please Enter The Second Number:- ";
	cin >> Input2;

	//Checking For Maximum Input To Set Conidition That Diviser Should Not Be Greater Than Input
	if (Input1>Input2)
		Maximum = Input1;
	else
		Maximum = Input2;

	//Loop To Count How Many Common Factors Exist Of Two Inputs
	while (Divider <= Maximum)
	{
		if (Input1%Divider == 0)
		{
			if (Input2%Divider == 0)
			{
				Count++;
			}
		}

		Divider++;
	}

	//Condition To Give Output
	//Condition Is True If Co-Factor Is Only 1 i.e. Count==1
	if (Count == 1)
		cout << "The Numbers Are Co-Prime";
	else
		cout << "The Numbers Are Not Co-Prime";

	_getch();
}