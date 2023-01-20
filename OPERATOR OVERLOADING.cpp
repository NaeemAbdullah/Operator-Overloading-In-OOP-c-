#include<iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;

public:
	Rectangle()
	{
		length = 0;
		width = 0;
	}

	Rectangle(double l, double w)
	{
		length = l;
		width = w;
	}

	void display()
	{
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
	}

	Rectangle operator + (Rectangle& r)
	{
		Rectangle r3;
		r3.length = this->length + r.length;
		r3.width = this->width + r.width;
		return r3;
	}

	Rectangle operator - (Rectangle& r)
	{
		Rectangle r3;
		r3.length = this->length - r.length;
		r3.width = this->width - r.width;
		return r3;
	}

	Rectangle operator * (Rectangle& r)
	{
		Rectangle r3;
		r3.length = this->length * r.length;
		r3.width = this->width * r.width;
		return r3;
	}

	Rectangle operator / (Rectangle& r)
	{
		Rectangle r3;
		r3.length = this->length / r.length;
		r3.width = this->width / r.width;
		return r3;
	}

	void operator = (Rectangle& r)
	{
		this->length = r.length;
		this->width = r.width;
	}

	bool operator == (Rectangle& r)
	{
		if ((this->length == r.length) && (this->width == r.width))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator != (Rectangle& r)
	{
		if ((this->length == r.length) && (this->width == r.width))
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator > (Rectangle& r)
	{
		double area1 = this->length * this->width;
		double area2 = r.length * r.width;

		if (area1 > area2)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool operator >= (Rectangle& r)
	{
		double area1 = this->length * this->width;
		double area2 = r.length * r.width;

		if (area1 >= area2)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool operator < (Rectangle& r)
	{
		double area1 = this->length * this->width;
		double area2 = r.length * r.width;

		if (area1 < area2)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool operator <= (Rectangle& r)
	{
		double area1 = this->length * this->width;
		double area2 = r.length * r.width;

		if (area1 <= area2)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

};


int main()
{
	Rectangle r1(2.5, 1.5);		// 3.75
	Rectangle r2(4.3, 2.5);		// 10.75

 	Rectangle r3 = r1 + r2;
	Rectangle r4 = r1 - r2;
	Rectangle r5 = r1 * r2;
	Rectangle r6 = r1 / r2;

	Rectangle r7 = r1;

	/*if (r1 == r2)
	{
		cout << "Equal";
	}
	else
	{
		cout << "Not Equal";
	} */

	if (r1 > r2)
	{
		cout << "Rectangle 1 is greater than Rectangle 2"<<endl;
	}
	else
	{
		cout << "Rectangle 1 is NOT greater than Rectangle 2" << endl;
	}
}
