#include<iostream>
using namespace std;

int main() {

	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\116';   //  \101转义到ASCII中为A  
	cout << c1 << c2 << c3 << '\n';
	cout << "\t\b" << c4 << '\t' << c5 << '\n';          //  \t 转义为制表符，跳到下一个制表位    \b将输出左移一位
	return 0;
}
