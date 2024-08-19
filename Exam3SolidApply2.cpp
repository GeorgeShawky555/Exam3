#include <iostream>
using namespace std;
class Shape
{
public:
	virtual void draw() = 0;
};
class Circle :public Shape
{
public:
	void draw()
	{
		cout << "Drawing a circle.\n";
	}
};
class Rectangle :public Shape
{
public:
	void draw()
	{
		cout << "Drawing a rectangle\n";
	}
};
class Triangle : public Shape
{
public:
	void draw()
	{
		cout << "Drawing a triangle\n";
	}
};
int main()
{
	Circle c;
	c.draw();
	Rectangle r;
	r.draw();
	Triangle t;
	t.draw();
}