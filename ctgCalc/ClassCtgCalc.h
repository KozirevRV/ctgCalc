#pragma once

class ClassCtgCalc
{
private:
	double x; //���� ����������
	double precision; // ��������
	double result; //��������� �������
	double member; // ���� ����
	int n; //����� ������ ���� / ����� ��������
    const double pi = 3.14159265358979323846;

public:
	void Calc();
	double AtanX();
	void SET_precision(double s_precision);
	void SET_X(double s_x); 
	double GET_result();
	double GET_n();
};

