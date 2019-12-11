#include <iostream>
#include "Points.h"
#include "Vectors.h"


using namespace std;
int main()
{
	/*
	Point2* p = new Point2(1, 0);
	Vector2* v = new Vector2(2, 3);

	p->AddVector2(v);
	cout << p->x << ", " << p->y;
	*/

	Point2 i(1, 1);
	Point2 p(0, -1);
	Vector2 v = p - i;


	cout << "Vector from point to point: (" << v.x << ", " << v.y << ")" << endl;
	cout << "Vector length: " << v.GetLength();

	cin.get();

}