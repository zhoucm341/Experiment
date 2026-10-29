#pragma once
#include"Graphic.h"
class Triangle : public Graphic
{
public:
	Triangle();
	Triangle(int at, int bt, int ct);
	void S() override;
	void C() override;
	void question(char arr[]) override;
	void Istype();
	int over();
	~Triangle();
private:
	int Tri_C;
	float Tri_S;
	int get_C;
	float get_S;
	int type;
	int t;
	int a;
	int b;
	int c;
};