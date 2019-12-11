#include "Vectors.h"

Vector2::Vector2()
{
	this->x = 0.0f;
	this->y = 0.0f;
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector3::Vector3()
{
	this->x = 0.0f;
	this->y = 0.0f;
	this->z = 0.0f;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector2 Vector2::GetUnit()
{
	double mag = this->GetLength();
	return Vector2(this->x * (1/mag), this->y * (1 / mag));
}

Vector3 Vector3::GetUnit()
{
	double mag = this->GetLength();
	return Vector3(this->x * (1 / mag), this->y * (1 / mag), this->z * (1 / mag));
}

double Vector2::GetLength()
{
	return sqrt((double) this->x * this->x + (double) this->y * this->y);
}

double Vector3::GetLength()
{
	double x2 = (double) this->x * this->x;
	double y2 = (double) this->y * this->y;
	double z2 = (double) this->y * this->y;
	return sqrt((double)this->x * this->x + (double)this->y * this->y + (double)this->y * this->y);
}