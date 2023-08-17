#ifndef FLAP_HEL_VEC2_H
#define FLAP_HEL_VEC2_H

#include <Hel.h>

using namespace hel::math;
class Vector2
{
	public:
	float x;
	float y;
	
	Vector2();
	
	void operator=(const Vector2& other); //
	void operator+=(const Vector2& other);
	void operator-=(const Vector2& other); 
	void operator*=(float other);
	
	Vector2 operator+(const Vector2& other) const; 
	/* i know if you look at this subroutine at first glance and you're abi-savvy like me, you might think this function does a bunch of useless copy operations and modifies the calling object
	/ 	but actually according to the x86 (and presumably the powerpc) calling conventions, functions that return a non-primitive object (oxymoron) use space that's been allocated by the calling function
	/ 	so in this case instead of the first argument being the calling object (this ptr) it's actually the empty local vec2 object that is created by this operation, and the r4 register is the calling object */
	
	Vector2 operator-(const Vector2& other) const; //
	Vector2 operator-() const; // flips sign by multiplying -1
	
	Vector2 operator/(float other) const;
	Vector2 operator*(float other) const;
	Vector2 operator*(const Vector2& other) const;
	
	
	float distance(const Vector2& other);
	float angle(const Vector2& other);
};

#endif