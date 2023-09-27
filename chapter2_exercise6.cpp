#include<iostream>
using namespace std;

int main() {
	int a = 12, n = 5;
	a%= (n %= 2);
	cout << "a5=" << a<< '\n';

	a = 12;
	a+= a -= a *= a;                   
	/*
	a *= a = > a = 2 * 2 = 4
	a -= a = > a = 4 - 4 = 0
	a += a = > a = 0 + 0 = 0
	cout << "a6=" << a << '\n';     
	*/
	return 0;
}