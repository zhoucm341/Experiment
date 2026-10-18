#pragma once
class Tri
{
public:
	Tri();
	Tri(int at, int bt, int ct);
	void C();
	void S();
	void Istype();
	void print();
	void question(char arr[]);
	void readFile();
	void readFile(int n);
	~Tri();

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