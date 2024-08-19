#include <iostream>
#include <vector>
using namespace std;
class Shape
{
public:
	virtual void draw() = 0;
};
class Circle:public Shape
{
public:
	void draw()
	{
		cout << "Circle is drawn.\n";
	}
};
class Square:public Shape
{
public:
	void draw()
	{
		cout << "Square is drawn.\n";
	}
};
class DrawingManager
{
public:
	void drawShapes(vector <Shape*> shapes)
	{
		for (int i = 0; i < shapes.size(); i++)
		{
			shapes.at(i)->draw();
		}
	}

};
int main()
{
	Circle c1;
	Square s1;
	vector <Shape*> shapeVec = {&c1,&s1};
	DrawingManager manager;
	manager.drawShapes(shapeVec);
}
// We are achieved the polymorphism here when we override the function that in the class Shape in the Circle and Square classes to print different messgaes.