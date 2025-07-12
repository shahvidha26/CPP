#include<iostream>
#include<string>

struct Person {
	std::string name;
	int age;
	float height;
 };

int main() {
 	Person vidhi = {"shah vidhi", 26, 5.5f};
 	std::cout <<"Name: "<< vidhi.name <<"\nAge: "<<vidhi.age<<"\nHeight: "<<vidhi.height<< std::endl;
 	return 0;
}
