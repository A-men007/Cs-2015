// CopyingArraysNewmethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>    // copy fn
using namespace std;

int main(){
	//initialize variables
	int a[5] = { 1,2,4,3,5 };
	int b[5];
	//use parameters begin,end,where
	copy (a,a+5,b);
	//print array
	for (int x = 0; x < 5; x++) {
		cout << b[x] << " ";
	}
	cout << endl;
}