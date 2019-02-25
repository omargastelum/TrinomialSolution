#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c;
	double d;
	double x1, x2, xofvertex;
	int i;

	for (i = 1; i <= 3; i++)
	{

		cout << "Enter A: " << endl;
		cin >> a;
		cout << "Enter B: " << endl;
		cin >> b;
		cout << "Enter C: " << endl;
		cin >> c;

		d = (pow(b, 2) - 4 * a*c);
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		xofvertex = (-b / (2 * a));
		yofvertex = (a*(xofvertex*xofvertex)) + (b*xofvertex) + c;

		if (a < 0)
		{
			cout << "There is a maximum point of " << yofvertex << endl;
		}
		else
		{
			cout << "There is a minimum point of " << yofvertex << endl;
		}

		cout << "The value for a is " << a << endl;
		cout << "The value for b is " << b << endl;
		cout << "The value for c is " << c << endl;

		cout << "************************************" << endl;

		cout << "The x1 value is " << x1 << endl;
		cout << "The x2 value is " << x2 << endl;
		cout << "The x of vertex is " << xofvertex << endl;

	}
	system("pause");
}

/*
Name: Omar Gastelum
Project: Quadratic Equation Solution
Date: 2/20/19
Result:
Enter A:
1
Enter B:
2
Enter C:
1
There is a minimum point.
The value for a is 1
The value for b is 2
The value for c is 1
************************************
The x1 value is -1
The x2 value is -1
The x of vertex is -1
Enter A:
1
Enter B:
5
Enter C:
6
There is a minimum point.
The value for a is 1
The value for b is 5
The value for c is 6
************************************
The x1 value is -2
The x2 value is -3
The x of vertex is -2.5
Enter A:
-1
Enter B:
2
Enter C:
1
There is a maximum point.
The value for a is -1
The value for b is 2
The value for c is 1
************************************
The x1 value is -0.414214
The x2 value is 2.41421
The x of vertex is 1

*/
