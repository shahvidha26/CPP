#include<iostream>
// Define a namespace called Math
namespace Math {
	int add(int a, int b) {
		return a + b;
	}
   }
int main() {
// Use the add function from the Math namespace
 	std::cout <<"Sum: "<<Math::add(6,5) << std::endl;

// Alternatively, with 'using' directive
	using namespace Math;
	std::cout <<"Sum: "<<add(14, 26) << std::endl;

	return 0;
}
