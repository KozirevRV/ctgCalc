#pragma once

class ClassCtgCalc
{
private:
	double x; //Сама переменная
	double precision; // Точность
	double result; //результат расчёта
	double member; // член ряда
	int n; //число членов ряда / число итераций
    const double pi = 3.14159265358979323846;

public:
	void Calc();
	double AtanX();
	void SET_precision(double s_precision);
	void SET_X(double s_x); 
	double GET_result();
	double GET_n();
};

