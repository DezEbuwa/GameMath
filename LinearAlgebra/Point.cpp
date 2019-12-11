#include "Points.h"

Point2::Point2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point3::Point3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point2::AddVector2(Vector2* v)
{
	this->x += v->x;
	this->y += v->y;
}

void Point2::SubVector2(Vector2* v)
{
	this->x -= v->x;
	this->y -= v->y;
}

Point2& Point2::operator+=(const Point2& p2)
{
	this->x += p2.x;
	this->y += p2.y;
	return *this;
}

Point2& Point2::operator-=(const Point2& p2)
{
	this->x -= p2.x;
	this->y -= p2.y;
	return *this;
}


void Point3::AddVector3(Vector3* v)
{
	this->x += v->x;
	this->y += v->y;
	this->z += v->z;
}

void Point3::SubVector3(Vector3* v)
{
	this->x -= v->x;
	this->y -= v->y;
	this->z -= v->z;
}

Point3& Point3::operator+=(const Point3& p2)
{
	this->x += p2.x;
	this->y += p2.y;
	this->z += p2.z;
	return *this;
}

Point3& Point3::operator-=(const Point3& p2)
{
	this->x += p2.x;
	this->y += p2.y;
	this->z += p2.z;
	return *this;
}
