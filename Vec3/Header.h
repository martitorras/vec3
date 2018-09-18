#ifndef _HEADER_H_
#define _HEADER_H_
#include <iostream>

template<class T1>
class vec3 {
private:
	T1 x, y, z;
public:
	vec3() {
		x = y = z = 0;
	}
	vec3(T1 Xenter, T1 Yenter, T1 Zenter) {
		x = Xenter;
		y = Yenter;
		z = Zenter;
	}
	vec3(T1 value) {
		x = y = z = value;
	}
	~vec3() {};

	vec3 operator+ (const vec3& vec) const {
		vec3<T1> res(this->x + vec.x, this->y + vec.y, this->z + vec.z);
		return res;
	}

	vec3 operator- (const vec3& vec) const {
		vec3<T1> res(this->x - vec.x, this->y - vec.y, this->z - vec.z);
		return res;
	}

	void operator+= (const vec3& vec) {
		this->x += vec.x;
		this->y += vec.y;
		this->z += vec.z;
	}

	void operator-= (const vec3& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		this->z -= vec.z;
	}

	void operator= (const vec3& vec) {
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
	}

	bool operator== (const vec3& vec) const {
		return (this->x == vec.x && this->y == vec.y && this->z == vec.z);
	}

	void normalize(){
		T magnitude = sqrt((x*x) + (y*y) + (z*z));
		if (magnitude != 0) {
			this->x /= magnitude;
			this->y /= magnitude;
			this->z /= magnitude;
		}
	}

	void zero() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	bool is_zero(){
		return (this->x == 0 && this->y == 0 && this->z == 0)
	}

	T1 distance_to(const vec3 &v1, const vec3 &v2)
	{
		T1 distancex = v2.x - v1.x;
		T1 distancey = v2.y - v1.y;
		T1 distancez = v2.z - v1.z;

		return sqrt(distancex * distancex + distancey * distancey + distancez * distancez);
	}

	void print() {
		cout << this->x << ", " << this->y << ", " << this->z << endl;
	}

};

#endif