#include "prs_volumes_3d.h"

bool PRS_Sphere::TestSphereSphere(const PRS_Sphere &aSphereA, const PRS_Sphere &aSphereB) {
	Vector3 distance = aSphereA.myCenter - aSphereB.myCenter;
	float distanceSquared = distance.dot(distance);
	float radiusSum = aSphereA.myRadius + aSphereB.myRadius;
	return distanceSquared <= radiusSum*radiusSum;
}

void PRS_Sphere::Translate(const Vector3 &aNewCenter) {
	myCenter = aNewCenter;
}
