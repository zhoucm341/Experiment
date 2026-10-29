#pragma once
class Graphic
{
public:
	Graphic();
	virtual void S();
	virtual void C();
	virtual void question(char arr[]);
	int choose(char arr[]);
	~Graphic();
};