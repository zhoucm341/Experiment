#pragma once
#include "Graphic.h"
class Round : public Graphic{
public:
	Round();
	Round(int Rt);
	void S() override;
	void C() override;
	void question(char arr[]) override;
	int over();
	~Round();
private:
	float Rou_C;
	float Rou_S;
	float get_C;
	float get_S;
	int R;
};