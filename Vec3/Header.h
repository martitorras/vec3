#ifndef _HEADER_H_
#define _HEADER_H_
#include <iostream>

template<class var>
class vec3 {

public:
	var x, y, z;

	vec3() {
		x = y = z = 0;
	}
	vec3(var Xenter, var Yenter, var Zenter) {
		x = Xenter;
		y = Yenter;
		z = Zenter;
	}
	vec3(const vec3& vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}
	~vec3() {};

	vec3 operator+ (const vec3& vec) const {
		return (this->x + vec.x, this->y + vec.y, this->z + vec.z);
	}

	vec3 operator- (const vec3& vec) const {
		return (this->x - vec.x, this->y - vec.y, this->z - vec.z);
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

	bool is_zero() const{
		return (this->x == 0 && this->y == 0 && this->z == 0)
	}

	var distance_to(const vec3 &v1, const vec3 &v2) const{
		T1 distancex = v2.x - v1.x;
		T1 distancey = v2.y - v1.y;
		T1 distancez = v2.z - v1.z;

		return sqrt(distancex * distancex + distancey * distancey + distancez * distancez);
	}

};

#endif