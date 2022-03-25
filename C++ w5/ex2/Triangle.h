#pragma once
class Triangle
{
public:
	enum Type {
		Equilateral,
		Iososceles,
		Right,
		Normal,
		Invalid
	};

	Triangle(float length1, float length2, float length3);
	Type GetType();
	float* GetSideLength();
private:
	float side_length[3];
};


