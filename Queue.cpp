#include <iostream>
#include <vector>

using namespace std;

extern vector<int> v;

namespace Queue {

	int pop() {
		int value = v.front();
		v.erase(v.begin());

		return value;
	}

	void push(int a) {
		v.push_back(a);
	}

}