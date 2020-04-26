#include <iostream>
#include "Input.h"
using namespace std;


int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	cout << x << " + " << y << " is " << x + y << '\n';

	return 0;
}