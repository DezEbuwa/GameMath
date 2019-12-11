#ifndef POINTS_H
#define POINTS_H

#include "Vectors.h"

class Point2
{
public:
	float x, y;
	Point2();
	Point2(float, float);
	void AddVector2(Vector2*);
	void SubVector2(Vector2*);
	Point2& operator += (const Point2&);
	Point2& operator -= (const Point2&);
	friend Vector2 operator + (const Point2&, const Point2&);
	friend Vector2 operator - (const Point2&, const Point2&);
};

class Point3
{
public:

	float x, y, z;
	Point3();
	Point3(float, float, float);
	void AddVector3(Vector3*);
	void SubVector3(Vector3*);
	Point3& operator += (const Point3&);
	Point3& operator -= (const Point3&);
	friend Vector3 operator + (const Point3&, const Point3&);
	friend Vector3 operator - (const Point3&, const Point3&);
};

#endif