#include "Plane.h"


Plane::Plane():dspeed(0.001f),rXSpeed(0.5f),rYSpeed(0.5f),rZSpeed(0.5f),Maxspeed(0.002f),Minspeed(0.001f)
{
	position.x = 0.0f;
	position.y = 0.0f;
	position.z = 0.0f;
	rotateX = 0.0f;
	rotateY = 0.0f;
	rotateZ = 0.0f;
	speed.x = 0.0f;
	speed.y = 0.0f;
	speed.z = -0.001f;
}

Plane::~Plane()
{
}

void Plane::move(float dx, float dy, float dz)
{
	position.x += dx;
	position.y += dy;
	position.z += dz;
}

void Plane::speedUp(float xspeed, float yspeed, float zspeed)
{
	speed.x += xspeed;
	speed.y += yspeed;
	speed.z += zspeed;
}

void Plane::speedDown(float xspeed, float yspeed, float zspeed)
{
	speed.x -= xspeed;
	speed.y -= yspeed;
	speed.z -= zspeed;
}

void Plane::rotateDown()
{
	rotateX -= rXSpeed;
}

void Plane::rotateUp()
{
	rotateX += rXSpeed;
}

void Plane::rotateRight()
{
	rotateZ += rZSpeed;
}

void Plane::rotateLeft()
{
	rotateZ -= rZSpeed;
}

void Plane::turnLeft()
{
	rotateY -= rYSpeed;
}

void Plane::turnRight()
{
	rotateY += rYSpeed;
}


void Plane::setPosition(float x, float y, float z)
{
	position.x = x;
	position.y = y;
	position.z = z;
}
