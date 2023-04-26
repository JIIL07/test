#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");

	int n = 0;
	int del = 0;
	std::cout << "VVedite n: ";
	std::cin >> n;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			del = n / i;
			std::cout << "Diliteli chisla n:  " << del << std::endl;
		}
	}
	return 0;
}