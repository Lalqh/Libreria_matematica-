#pragma once
#include <iostream>
using namespace std;

class Math
{
private:
	const float pi = 3.141692;

public:
	void matrix(int c1, int c2, int r1, int r2);
	void calSeno(float seno);
	void calCoseno(float cos);
	void calTangente(float tan);
};

