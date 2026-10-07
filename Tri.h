class Tri
{
public:
	Tri();
	Tri(int at, int bt, int ct);
	void C(int a, int b, int c);
	float S(int a, int b, int c);
	int Istype(int a, int b, int c);
	void print();
	~Tri();
	int Tri_C;
private:
	int a;
	int b;
	int c;
};