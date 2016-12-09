#include "program.h"
#include "stdio.h"
#include "stdlib.h"
#include "iostream"
using namespace std;


program::program()
{
}

program::~program()
{
}

void main()
{
	program a;
	cout << "Enter a number ";
	cin >> a.x; 
	cout << "\n" << "Your number is " << a.x;
}