#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;
using namespace jwp;

class Animal {
public:
	void speak() { cout << "Grrrr" << endl; };
};

class Dog : public Animal {
public:
	void bark() { cout << "Wooof!" << endl; }
};

class Husky : public Dog {
public:
	void shed() { cout << "Furr is everywhere!" << endl; }
};

class Frog {	
private: // Private variables are encapsulated away, so that you can't access its data from outside the class.
	string name;
	string getName() { return name; }
public: // Public allows access to methods or data located in the public section
	Frog(string name): name(name) {}
	void info() { cout << "My name is: " << getName() << endl; }
};

class Machine {
private:
	int id;
public:
	Machine(): id(0) { cout << "Machine no-argument constructor called" << endl; }
	Machine(int id): id(id) { cout << "Machine id argument constructor called" << endl; }
	void info() { cout << "ID: " << id << endl; }
};

class Vehicle : public Machine {
public:
	Vehicle() { cout << "Vehicle no-argument constructor called" << endl; }
	Vehicle(int id): Machine(id) { cout << "Vehicle id argument constructor called" << endl; }
};

class Car : public Vehicle {
private:
public:
	Car(): Vehicle(999) { cout << "Car no-argument constructor called" << endl; }

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

	Frog frog("Bob");
	frog.info();

	Machine m;
	m.info();

	Machine n(23);
	n.info();

	Vehicle v;
	v.info();

	Vehicle y(12);
	y.info();

	Car w;
	w.info();

	return 0;
}