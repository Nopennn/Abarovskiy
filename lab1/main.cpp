#include <iostream> 
#include <stdio.h>
using namespace std;
class Complex 
{
public:  
	double re, im; 
    Complex(){}
    Complex(int x, int y)
    {
        re = x;
        im = y;
    }
	Complex add(Complex a)
	{
	   	double resre, resim;
	   	resre = a.re + re;
	   	resim = a.im + im;
	   	return Complex(resre, resim);
	}
	Complex sub(Complex a)
	{
	   	double resre, resim;
	   	resre = re - a.re;
	   	resim = im - a.im;
	   	return Complex(resre, resim);
	}
	Complex mul(Complex a)
	{
	   	double resre, resim;
	   	resre = a.re * re - a.im * im;
	   	resim = re * a.im + im * a.re;
	   	return Complex(resre, resim);
	}
	Complex div(Complex a)
	{
	   	double resre, resim;
	   	resre = (re * a.re + im * a.im) / (a.re*a.re + a.im*a.im);
	   	resim = (a.re * im - re * a.im) / (a.re*a.re + a.im*a.im);
	   	return Complex(resre, resim);
	}
	bool equ(Complex a)
	{
	   	return (re == a.re && im == a.im);
	}
	Complex conj()
	{
	   	return Complex(re, -im);
	}
	~Complex(){}
};

int main()
{
	double re, im;
	bool f;
	Complex com1, com2, com;
	printf("Enter complex number one\n");
	scanf("%lf %lf", &re, &im);
	com1 = Complex(re, im);
	printf("Enter complex number two\n");
	scanf("%lf %lf", &re, &im);
	com2 = Complex(re, im);
	com = com1.add(com2);
	printf("Sum = (%lf, %lf)\n", com.re, com.im);
	com = com1.sub(com2);
	printf("Sub = (%lf, %lf)\n", com.re, com.im);
	com = com1.mul(com2);
	printf("Mul = (%lf, %lf)\n", com.re, com.im);
	com = com1.div(com2);
	printf("Div = (%lf, %lf)\n", com.re, com.im);
	f = com1.equ(com2);
	printf("Equ = %d\n", f);
	com = com1.conj();
	printf("Conj1 = (%lf, %lf)\n", com.re, com.im);
	com = com2.conj();
	printf("Conj2 = (%lf, %lf)\n", com.re, com.im);
	
}
