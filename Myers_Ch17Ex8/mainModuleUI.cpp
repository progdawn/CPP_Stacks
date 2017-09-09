//Programmer: Dawn Myers
#include "mainModuleUI.h"
#include <iostream>
#include <cmath>
#include "myStack.h"
using namespace std;

mainModuleUI::mainModuleUI()
{
}

void mainModuleUI::mainMethod()
{
	stackType<int> binaryStack;
	binaryStack.initializeStack();

	int decimalNum;
	int decimalNumInput;
	int bit;
	int base;

	base = 2;

	cout << "Enter a number in decimal >> ";
	cin >> decimalNumInput;
	cout << endl;

	decimalNum = decimalNumInput;

	while (decimalNum > 0)
	{
		bit = decimalNum % base;
		//cout << "Current bit: " << bit << " Value of decimal afterwards: "; <---- Test code
		binaryStack.push(toupper(bit));
		decimalNum = decimalNum / base;
		//cout << decimalNum << endl; <---- Test code
	}

	cout << "Decimal " << decimalNumInput << " = ";
	while (binaryStack.isEmptyStack() != true)
	{
		cout << binaryStack.top() << " ";
		binaryStack.pop();
	}

	cin.ignore();
	cin.ignore();

}

