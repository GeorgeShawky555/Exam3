#include <iostream>
using namespace std;
class Rectangle
{
	int length;
	int width;
public:
	Rectangle() :length(0), width(0)
	{
	}
	Rectangle(int l,int w):length(l),width(w)
	{
	}
	Rectangle operator +(Rectangle r)
	{
		Rectangle result;
		result.length = length + r.length;
		result.width = width + r.width;
		return result;
	}
	void print()
	{
		cout << "Length = " << length << "\t" << "Width = " << width << endl;
	}
};
int main()
{
	Rectangle r1(10, 20), r2(30, 40);
	Rectangle r3 = r1 + r2;
	r3.print();
}