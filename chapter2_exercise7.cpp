#include<iostream>
using namespace std;

int main() {
	int i, j, m, n;
	i = 8;
	j = 10;
	m = ++i + j++;               //m=(9)+10=19   i=++i=9   j=j++=11
	n = (++i) + (++j) + m;
	cout << i << '\t' << j << '\t' << m << '\n' << n << endl;
	return 0;
}