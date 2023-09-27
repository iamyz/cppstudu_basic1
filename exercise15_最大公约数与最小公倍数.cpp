#include<iostream>

using namespace std;

const float pi = 3.1415926;
int main() {
	unsigned int x, y;
	unsigned int greatest_common, lowest_common;
	cin >> x >> y;
	int min_between_x_y, max_between_x_y;
	if (x < y){ 
			min_between_x_y = x;
	        max_between_x_y = y; }
	else { min_between_x_y = y; max_between_x_y = x; }
	if (min_between_x_y == 2) {
		if (float(max_between_x_y) / 2 - max_between_x_y / 2 == 0) {lowest_common = 2; greatest_common = max_between_x_y; }}
	else
	{
		for (int i = 2; i < min_between_x_y / 2; i++) {
			float ii;
			ii = float(min_between_x_y) / i;
			if (ii - int(ii) == 0) {
				float iii = float(max_between_x_y) / i;
				if (iii - int(iii) == 0) lowest_common = i;
			}
		}
	}
	greatest_common = x * y / lowest_common;

	cout << "greatest_common=" << greatest_common << '\n' << "lowest_common=" << lowest_common << '\n';
	return 0;
}