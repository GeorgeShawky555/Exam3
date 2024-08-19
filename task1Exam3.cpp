#include <iostream>
#include <string>
using namespace std;
template <class t1,class t2>
t1 add(t1 para1, t2 para2)
{
	return para1 + para2;
}
template <class t>
class Number
{
	t value;
public:
	void setValue(t v)
	{
		value = v;

	}
	t getValue()
	{
		return value;
	}

};
int main()
{
	cout << add(1.5, 2.00) << endl;
	Number<int > n;
	n.setValue(55);
	cout << n.getValue() << endl;
}