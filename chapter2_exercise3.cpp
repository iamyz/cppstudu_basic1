#include<iostream>
using namespace std;

int main() {

	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\116';   //  \101ת�嵽ASCII��ΪA  
	cout << c1 << c2 << c3 << '\n';
	cout << "\t\b" << c4 << '\t' << c5 << '\n';          //  \t ת��Ϊ�Ʊ����������һ���Ʊ�λ    \b���������һλ
	return 0;
}
