#include<iostream>
#include<cmath>

using namespace std;

class Vec
{
	private:
		int len;
		double *vec;
	public:
		Vec(int l,  double *v);
		Vec(int l);
		Vec(const Vec &obj); 
		~Vec();
	public:
		void set(double arg, int coord);
		double get(int coord);
		double euc_norm();
		double max_norm();
		void print();
};

Vec::Vec(int l, double *v)
{
    len = l;
	vec = new double[len];
	for (int i = 0; i < len; i++)
		*(vec+i) = *(v+i);
}
Vec::Vec(int l)
{
	len = l;
	vec = new double[len];
	for(int i = 0; i < len; i++)
		*(vec+i) = 0;
}
Vec::Vec(const Vec &obj)
{
	len = obj.len;
	vec = new double[obj.len];
	for (int i = 0; i < len; i++)
		*(vec+i) = *(obj.vec+i);
}
Vec::~Vec()
	{
		delete vec;
	}

void Vec::set(double arg, int coord)
{
	vec[coord] = arg;
}
double Vec::get(int coord)
{
	return vec[coord];
}
double Vec::euc_norm()
{
	double euc = 0;
	for(int i = 0; i < len; i++)
		euc+=vec[i]*vec[i];
	return sqrt(euc);
}
double Vec::max_norm()
{
	double max = fabs(vec[0]);
	for(int i = 1; i < len; i++)
		if(max < fabs(vec[i]))
			max = fabs(vec[i]);
	return max;
}
void Vec::print()
{
	cout << "(";
	for(int i = 0; i < len; i++)
	{
		cout << vec[i];
		if (i == (len - 1))
			cout << ")" << endl;
		else
			cout << ",";
	}
}

int main(void)
{
    double y1[3] = {1,2,3};
    double y2[5] = {2,1,0,5,7};
    Vec x(3, y1),y(5, y2),z(4);
	Vec u = x;

    y.print();
    x.print();
    z.print();
    u.print();

    x.set(23, 2);  u.set(34, 1);  z.set(-3, 3);
    cout << "x[2] = " << x.get(2) << endl;   // вывод будет x[2] = 23
    cout << "u[1] = " << u.get(1) << endl;   // вывод будет u[1] = 34
    cout << "euc_norma y: " << y.euc_norm() << endl;
	cout << "max_norma z: " << z.max_norm() << endl;
    return 0;
}
