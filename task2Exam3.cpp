#include <iostream>
#include<string>
using namespace  std;
//Inheritance:
class Animal
{
	
		string name;
	public:
		virtual void makeSound()
		{
			cout << "Animal Sound\n";
		}
};
class Dog :public Animal//"Is-a" relationship
{
public:
	void makeSound()
	{
		cout << "Dog Sound\n";
	}
};
//Composition:
class Screen
{
public:
	void screenMessage()
	{
		cout << "Screen Here\n";
	}
};
class Keyboard
{
public:
	void keyboardMessage()
	{
		cout<<"Keyboard Here"
	}
};







int main()
{
 
}

