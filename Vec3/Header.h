#ifndef _HEADER_H_
#define _HEADER_H_

template<class var>
class vec3 {

public:
	var x, y, z;

	vec3() {
		x = y = z = 0;
	}
	vec3(const var& Xenter, const var& Yenter, const var& Zenter) {
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

	vec3 operator+= (const vec3& vec) {
		this->x += vec.x;
		this->y += vec.y;
		this->z += vec.z;
		return (*this);
	}

	vec3 operator-= (const vec3& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		this->z -= vec.z;
		return (*this);
	}

	vec3 operator= (const vec3& vec) {
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
		return (*this);
	}

	bool operator== (const vec3& vec) const {
		return (this->x == vec.x && this->y == vec.y && this->z == vec.z);
	}

	vec3 normalize(){
		var magnitude = sqrt((x*x) + (y*y) + (z*z));
		if (magnitude != 0) {
			this->x /= magnitude;
			this->y /= magnitude;
			this->z /= magnitude;
		}
		return(*this);
	}

	vec3 zero() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
		return (*this);
	}

	bool is_zero() const{
		return (this->x == 0 && this->y == 0 && this->z == 0)
	}

	var distance_to(const vec3 &v1, const vec3 &v2) const{
		var distancex = v2.x - v1.x;
		var distancey = v2.y - v1.y;
		var distancez = v2.z - v1.z;

		return sqrt(distancex * distancex + distancey * distancey + distancez * distancez);
	}

	var distance_squared(const vec3 &v1, const vec3 &v2) const {
		var distancex = v2.x - v1.x;
		var distancey = v2.y - v1.y;
		var distancez = v2.z - v1.z;

		return (distancex * distancex + distancey * distancey + distancez * distancez);
	}

};

#endif