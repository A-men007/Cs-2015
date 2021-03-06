#include <iostream>;
#include "pch.h"
using namespace std;

void print(double arr[], int sz) {
	for (int x = 0; x < sz; x++) {
		cout << arr[x] << " ";
	}
	cout << endl;
}

void init(double arr[], int sz) {
	for (int x = 0; x < sz; x++) {
		arr[x] = rand() % 100;
	}
}

void rotate(double arr[], int sz) {
	double temp = arr[0];
	for (int x = 1; x < sz; x++) {
		arr[x - 1] = arr[x];
		arr[sz - 1] = temp;
	}

}

int main() {
	const int sz = 5;
	double arr[sz] = { 3,2,1 };
	print(arr, sz);
	init(arr, sz);
	rotate(arr, sz);
	print(arr, sz);
	cout << "a=" << sz << endl;
	cout << "address " << &sz << endl;
}