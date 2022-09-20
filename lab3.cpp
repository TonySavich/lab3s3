#include <iostream>
int main()
{
	double k;
	std::cin >> k;
	int g = k;
	int a = 0;
	int b = 0;
	int c = 0;
	while (g >=3) {
		a = a + 1;
		g = g / 3;
	}
	g = k;
	while (g >=5) {
		b = b + 1;
		g = g / 5;
	}
	g = k;
	while (g >=7) {
		c = c + 1;
		g = g / 7;
	}

	if (a == 0) {
		a = 1;
	}
	else {
		a++;
	}
	if (b == 0) {
		b = 1;
	}
	else {
		b++;
	}

	if (c == 0) {
		c = 1;
	}
	else {
		c++;
	}

	double ss;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			for (int p = 0; p < c; p++) {
				ss = pow(3, i) * pow(5, j) * pow(7, p);
				if (ss <= k) {
					std::cout << ss << std::endl;
				}
			}
		}
	}
}

