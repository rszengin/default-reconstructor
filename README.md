# default-reconstructor
Resets the object under consideration via calling default constructor with a simple assignment

### Simply This

```c++
class default_reconstructor {
public:
	template<typename T>
	inline
	operator T() {
		return T {};
	}
};

default_reconstructor reconst;
#define default reconst // This is dangerous

```

A default_reconstructor object defined. To show an alternative idea a macro definition is used.

### Sample Usage

```c++
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
```