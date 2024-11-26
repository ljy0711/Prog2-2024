// 010_complex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

class Complex {
private:
	double real; //실수
	double imag; //허수

public:
/*	Complex() {
		real = 0;
		imag = 0;
	} //매개 변가 없는 초기화 생성자
	Complex(double real, double imag) {
		this->real = real;
		this->imag = imag;
	} //매개  변수가 2개 있는 초기화 생성자 */
	void SetReal(double real) {
		this->real = real;
	} //this->real은 double real임
	double GetReal() {
		return	this->real;
	}
	void SetImag(double imag) {
		this->imag = imag;
	}
	double GetImag() {
		return imag;
	}
};

int main()
{   //사용방법 3가지
	Complex c1;
	Complex c2 = Complex(2, 3);
	Complex c3(2, 4);

	cout << "c1= " << c1.GetReal() << "," << c1.GetImag() << endl;
	cout << "c2= " << c2.GetReal() << "," << c2.GetImag() << endl;
	cout << "c3= " << c3.GetReal() << "," << c3.GetImag() << endl;
}

