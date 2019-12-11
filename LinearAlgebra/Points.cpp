#include "Points.h"

Point2::Point2()
{
	this->x = 0.0f;
	this->y = 0.0f;
}

Point2::Point2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point3::Point3()
{
	this->x = 0.0f;
	this->y = 0.0f;
	this->z = 0.0f;
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

Vector2 operator+(const Point2& p1, const Point2& p2)
{
	return Vector2(p1.x + p2.x, p1.y + p2.y);
}

Vector2 operator-(const Point2& p1, const Point2& p2)
{
	return Vector2(p1.x - p2.x, p1.y - p2.y);
}


Vector3 operator + (const Point3& p1, const Point3& p2)
{
	return Vector3(p1.x + p2.x, p1.y + p2.y, p1.z + p2.z);
}

Vector3 operator - (const Point3& p1, const Point3& p2)
{
	return Vector3(p1.x - p1.x, p1.y - p2.y, p1.z - p2.z);
}