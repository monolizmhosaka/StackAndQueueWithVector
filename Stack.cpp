#include <iostream>
#include <vector>

using namespace std;

extern vector<int> v;

namespace Stack {
	int pop() {
		int value = v.back();
		v.pop_back();
		return value;
	}

	void push(int a) {
		v.push_back(a);
	}
}