#include "Triangle.h"

Triangle::Triangle(float length1, float length2, float length3)
{
	side_length[0] = length1;
	side_length[1] = length2;
	side_length[2] = length3;
}

Triangle::Type Triangle::GetType()
{
	if (side_length[0] == side_length[1] && side_length[2]==side_length[1]) {
		return Equilateral;
	}
	if (side_length[0] == side_length[1] || side_length[1] == side_length[2] || side_length[0] == side_length[2]) {
		return Iososceles;
	}
	if (((side_length[0] * side_length[0]) + (side_length[1] * side_length[1]) == side_length[2] * side_length[2]) || ((side_length[1] * side_length[1]) + (side_length[2] * side_length[2]) == side_length[0] * side_length[0]) || ((side_length[0] * side_length[0]) + (side_length[2] * side_length[2]) == side_length[1] * side_length[1])) {
		return Right;
	}
	
	if ((side_length[0] + side_length[1]) < side_length[2] || (side_length[1] + side_length[2]) < side_length[0] || (side_length[1] + side_length[3] < side_length[2])) {
		return Invalid;
	}
	else {
		return Normal;
	}
}

float* Triangle::GetSideLength()
{
	return side_length;
}
