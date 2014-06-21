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
	void speedUp(float xspeed, float yspeed, float zspeed);//����
	void speedDown(float xspeed, float yspeed, float zspeed);//����
	void turnLeft();//��y��
	void turnRight();//��y��
	void rotateUp();//��x zhou
	void rotateDown();//��x zhou
	void rotateRight();//��z��
	void rotateLeft();//��x zhou
	void move(float x, float y, float z);//��x, y, z����ƶ�����λ��
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