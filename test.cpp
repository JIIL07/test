#include <iostream>
int main() {
	int n;
	int del;
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
