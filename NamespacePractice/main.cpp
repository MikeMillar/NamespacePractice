#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;
using namespace jwp;

class Animal {
public:
	void speak() { cout << "Grrrr" << endl; };
};

class Dog: public Animal {
public:
	void bark() { cout << "Wooof!" << endl; }
};

class Husky : public Dog {
public:
	void shed() { cout << "Furr is everywhere!" << endl; }
};

int main() {

	cats::Cat cat;
	cat.speak();

	Cat cat2;
	cat2.speak();

	jwp::Cat cat3;
	cat3.speak();

	Animal a;
	a.speak();

	Dog b;
	b.speak();
	b.bark();

	Husky c;
	c.speak();
	c.bark();
	c.shed();



	return 0;
}