#pragma once
#include "Graphic.h"
class Square : public Graphic{
public:
	Square();
	Square(int at, int bt);
	void S() override;
	void C() override;
	void question(char arr[]) override;
	int over();
	~Square();
private:
	int Squ_C;
	int Squ_S;
	int get_C;
	int get_S;
	int a;
	int b;
};