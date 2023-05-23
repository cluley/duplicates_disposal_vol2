#include <iostream>

#include "dupliceater.h"

using namespace std;

int main(int argc, char** argv) {
	vector<int> my_vec{ 1, 1, 2, 5, 6, 1, 2, 4 };
	for (auto n : my_vec) {
		cout << n << '\t';
	}
	cout << endl;

	dupliceater(my_vec);
	for (auto n : my_vec) {
		cout << n << '\t';
	}
	cout << endl;

	return 0;
}