#include <iostream>
using namespace std;
#include <cmath>
class GeometricShape
{
public:
	virtual float area() = 0;
	virtual float perimeter() = 0;
};
class Triangle :public GeometricShape
{
	float base, height, hypotenuse;
public:
	Triangle():base(0),height(0), hypotenuse(0)
	{

	}
	Triangle(float paraBase,float paraHeight,float paraHypotenuse):base(paraBase),height(paraHeight), hypotenuse(paraHypotenuse)
	{

	}
	float area()
	{
		return 0.5 * base * height;
	}
	float perimeter()
	{
		return base + height + hypotenuse;
	}
	void setDimensions(float base, float height)
	{
		this-> base = base;
		this-> height = height;//حطيتلك ذيس اهو عشان عارف ان انت بتحبهاااااا 
		hypotenuse = (sqrt((base * base) + (height * height)));
	}
	void setDimensions(float hypotenuse)
	{
		this->hypotenuse = hypotenuse;
	}
	bool operator == (Triangle trgl)
	{
		return (this->area() == trgl.area());
	}
	friend void display(Triangle trgl);

};
 void display(Triangle trgl)
{
	 cout << "Base: " << trgl.base << endl;
	 cout << "Height: " << trgl.height << endl;
	 cout << "Hypotenuse: " << trgl.hypotenuse << endl;
	 cout << "Area: " << trgl.area() << endl;
	 cout << "Perimeter: " << trgl.perimeter() << endl;
}

class Ellipse :public GeometricShape
{
	float halfMajor;
	float halfMinor;
	const float pi = 3.141592;
public:
	Ellipse():halfMajor(0),halfMinor(0)
	{

	}
	Ellipse(float paraMajor,float paraMinor):halfMajor(paraMajor),halfMinor(paraMinor)
	{

	}
	float area()
	{
		return pi * halfMajor * halfMinor;
	}
	float perimeter()
	{
		return  (pi * (3 * (halfMajor + halfMinor) - sqrt(((3 * halfMajor) + halfMinor) * (halfMajor + (3 * halfMinor)))));
	}
	void setDimension(float halfMajor,float halfMinor)
	{
		this->halfMajor = halfMajor;
		this->halfMinor = halfMinor;
	}
};
int main()
{
	

}

