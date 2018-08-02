#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Initializing Variables
	int Input1, Input2, Divider = 2, Minimum, flag = 1 ;

	//Taking Inputs
	//cout << "Please Enter The First Number:- ";
	cin >> Input1;
	//cout << "Please Enter The Second Number:- ";
	cin >> Input2;

	//Checking For Minimum Input To Set Conidition That Diviser Should Not Be Greater Than Input
	if (Input1<Input2)
		Minimum = Input1;
	else
		Minimum = Input2;

	//Checking Co Prime
	while (Divider <= Minimum)
	{
		if (Input1%Divider == 0)
		{
			if (Input2%Divider == 0)
			{
				flag = 0 ;
				break ;
			}
		}
		Divider++ ;
	}

	//Condition To Give Output
	//Condition Is True If Flag==1
	if (flag == 1)
		cout << "The Numbers Are Co-Prime";
	else
		cout << "The Numbers Are Not Co-Prime";

	return 0 ;
}
