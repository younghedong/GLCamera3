#ifndef PLANE_H
#define PLANE_H
#include "GL_ARB_multitexture.h"
#include "WGL_ARB_multisample.h"
#include "bitmap.h"
#include "camera.h"
#include "gl_font.h"
#include "input.h"
#include "mathlib.h"
#include "model_obj.h"
#include <string>


class Plane
{
public:
	Plane();
	~Plane();
	void speedUp(float xspeed, float yspeed, float zspeed);//加速
	void speedDown(float xspeed, float yspeed, float zspeed);//减速
	void turnLeft();//绕y轴
	void turnRight();//绕y轴
	void rotateUp();//绕x zhou
	void rotateDown();//绕x zhou
	void rotateRight();//绕z轴
	void rotateLeft();//绕x zhou
	void move(float x, float y, float z);//向x, y, z轴各移动多少位移
	//void update();
	void setPosition(float x, float y, float z);

	Vector3 &getPosition();
	inline float getRotateX();
	inline float getRotateY();
	inline float getRotateZ();
private:
	Vector3 position;
	Vector3 speed;
	float rotateX;
	float rotateY;
	float rotateZ;
	const float dspeed;
	const float rXSpeed;
	const float rYSpeed;
	const float rZSpeed;
	const float Maxspeed;
	const float Minspeed;

};


inline float Plane::getRotateX()
{
	return rotateX;
}

inline float Plane::getRotateY()
{
	return rotateY;
}

inline float Plane::getRotateZ()
{
	return rotateZ;
}

inline Vector3& Plane::getPosition()
{
	return position;
}
#endif