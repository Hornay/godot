#pragma once

#include "core/object/object.h"

class PRS_Sphere : public Object {
	GDCLASS(PRS_Sphere, Object);

public:
	static bool TestSphereSphere(const PRS_Sphere &aSphereA, const PRS_Sphere &aSphereB);
	void Translate(const Vector3 &aNewCenter);

	Vector3 myCenter;
	float myRadius;
};
