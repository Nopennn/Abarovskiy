#include <iostream> 
 
class Complex 
{
public:
	double re, im;
    Complex(){}
    Complex(double r, double i) 
    {
    	re = r; im = i;
    }
    Complex& operator = (Complex);
    Complex operator + (Complex);
    Complex operator - (Complex);
    Complex operator * (Complex&);
    Complex operator / (Complex&);
    bool operator == (Complex& com); 
    Complex conj()
	{
	   	return Complex(re, -im);
	}
	~Complex(){} 
};

Complex& Complex::operator = (Complex com) 
{  
    this->re = com.re; 
    this->im = com.im; 
    return *this;
}
 
bool Complex::operator==(Complex& com) 
{
    if(this->re == com.re && this->im == com.im) 
        return 1; 
    else 
        return 0;
}
 
Complex Complex::operator*(Complex &com) 
{  
    double i, j;  
    i = re * com.re - im * com.im; 
    j = re * com.im + com.re * im; 
    re = i; 
    im = j; 
    return *this; 
} 
 
Complex Complex::operator/(Complex &com) 
{  
    double i, j, k; 
    k = re * re +com.im * com.im; 
    i = (re * com.re + im * com.im) / k; 
    j = (com.re * im - re * com.im) / k; 
    re = i; 
    im = j; 
    return *this;
}
 
Complex Complex::operator+(Complex com) 
{ 
    this->re = this->re + com.re; 
    this->im = this->im + com.im; 
    return *this;
} 
 
Complex Complex::operator-(Complex com) 
{ 
    this->re = this->re - com.re; 
    this->im = this->im - com.im; 
    return *this;
}
 
int main() 
{
    double re, im;
	bool f;
	Complex com1, com2, com, comsub, Ccom1, Ccom2;
	printf("Enter complex number one\n");
	scanf("%lf %lf", &re, &im);
	com1 = Complex(re, im);
	printf("Enter complex number two\n");
	scanf("%lf %lf", &re, &im);
	com2 = Complex(re, im);
	Ccom1 = com1;
	Ccom2 = com2;
	printf("com1 = (%lf, %lf)\n", com1.re, com1.im);
	printf("com2 = (%lf, %lf)\n", com2.re, com2.im);
	com = com1 + com2;
	printf("Sum = (%lf, %lf)\n", com.re, com.im);
	com1 = Ccom1;
	com2 = Ccom2;
	comsub = com1 - com2;
	printf("Sub = (%lf, %lf)\n", comsub.re, comsub.im);
	com1 = Ccom1;
	com2 = Ccom2;
	com = com1 * com2;
	printf("Mul = (%lf, %lf)\n", com.re, com.im);
	com1 = Ccom1;
	com2 = Ccom2;
	com = com1 / com2;
	printf("Div = (%lf, %lf)\n", com.re, com.im);
	com1 = Ccom1;
	com2 = Ccom2;
	f = (com1 == com2);
	printf("Equ = %d\n", f);
	com1 = Ccom1;
	com2 = Ccom2;
	com1 = com1.conj();
	printf("Conj1 = (%lf, %lf)\n", com1.re, com1.im);
	com1 = Ccom1;
	com2 = Ccom2;
	com2 = com2.conj();
	printf("Conj2 = (%lf, %lf)\n", com2.re, com2.im);
}
