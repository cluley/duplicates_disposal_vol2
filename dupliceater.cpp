#include "dupliceater.h"

void dupliceater(std::vector<int>& vec) {
	auto max = std::max_element(vec.begin(), vec.end());

	std::unique_ptr<bool[]> set(new bool[(*max) + 1]());

	for (auto itr = vec.begin(); itr != vec.end();) {
		if (set[*itr]) {
			itr = vec.erase(itr);
		}
		else {
			set[*itr] = true;
			++itr;
		}
	}
}