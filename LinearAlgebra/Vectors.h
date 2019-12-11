#ifndef VECTORS_H
#define VECTORS_H
#include <math.h> 

class Vector2
{
public:
	float x, y;
	Vector2();
	Vector2(float, float);
	Vector2 GetUnit();
	double GetLength();
};

class Vector3
{
public:
	float x, y, z;
	Vector3();
	Vector3(float, float, float);
	Vector3 GetUnit();
	double GetLength();
};

#endif
