#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class User
{
	string name;
	string email;
public:
	User(string n, string e) :name(n), email(e)
	{

	}
	void printDetails()
	{
		cout << "Name: " << name << "\n" << "Email: " << email << "\n";
	}
	string getName()
	{
		return name;
	}
	string getEmail()
	{
		return email;
	}
};
int main()
{
	User user("John", "john@example.com");
	user.printDetails();
	ofstream file("user.txt");
	if (file.is_open())
	{
		file << "Name: " << user.getName() << "\n" << "Email: " << user.getEmail() << "\n";
		file.close();
	}
	else
	{
		cerr << "Can't open the file\n";
	}
}