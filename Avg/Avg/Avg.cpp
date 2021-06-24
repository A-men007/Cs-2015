// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "Number of arguments: " << argc << endl;
	int total = 0;
	for (int x = 0; x < argc; x++) {
		cout << x << " " << argv[x] << endl;
		if (x > 0) total += atoi(argv[x]);
	}
	cout << "The average is " << (float)total / float(argc - 1) << endl;
	char c;
	cin >> c;
}
