//============================================================================
// Name        : Default Reconstructor
// Author      : Rahman Salim Zengin
// Version     :
// Copyright   : rsz@gufatek.com
// Description :
//============================================================================

#include <iostream>
#include <stack>
#include "reconstructor.hpp"

using namespace std;
using namespace nonstd;

class gun {
public:
	stack<string> magazine;
	gun() : magazine({"bang", "bang", "bang"}) {cout << "Reloaded" << endl; }
	void fire() {
		while(magazine.size()) {
			cout << magazine.top() << ", ";
			magazine.pop();
		}
		cout << "Empty" << endl;
	}
};

int main() {

	gun my_gun { };
	my_gun.fire();
	my_gun.fire();
	my_gun.fire();
	my_gun = reconst;
	my_gun.fire();
	my_gun = default;
	my_gun.fire();

	return 0;
}
