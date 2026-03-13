#include<iostream>
using namespace std;

//base class
class Animal{
public:
	//virtual functions
	virtual void eat(){
		cout << "animal is eating." << endl;
	}
	
	virtual void makesound(){
		cout << "animal makes a sound." << endl;
	}
	
	//virtual desturctor
	virtual ~animal(){
};

//derived class: Dog
class Dog : public Animal {
public:
	void eat() override{
	    cout << "Dog eats bones." << endl;
		}
		
	void makesound() override{
		cout << "dog barks." << endl;
		}
};

//derived class: Cat
class Cat : public Animal{
public:
	void eat() override{
	    cout << "cat eats fish." << endl;
		}
		
		void makesound() override{
		    cout << "cat meows." << endl;
			}
};

//derived class: Eagle
class Eagle: public Animal{
public:
	void eat() override{
	    cout << "eagle eats small animals." << endl;
		}
		
		void makesound() override{
		    cout << "eagle screeches " << endl;
			}
};

//derived class: Snake
class Snake: public Animal{
public:
	void eat() override{
	    cout << "snake swallows its prey."<< endl;
		}
		
		void makesound() override{
		    cout << "snake hisses." << endl;
			}
			
};

//main function
int main(){
	// creating objects using base class pointers
	Animal* animals[4];
	
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Eagle();
	animals[3] = new Snake();
	
	//simulating animal behavior
	for (int i = 0; i < 4; i++) {
		animals[i]->eat();
		animals[i]->makesound();
		cout << "--------------" << endl;
	}
	
	// free memory
	for (int i = 0; i < 4; i++){
		delete animals[i];
	}
	
	return 0;
}
