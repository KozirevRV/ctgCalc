#pragma once
#include "ClassCtgCalc.h"
#include <math.h>

    //���� ������� ������
    void ClassCtgCalc::Calc()
    {
		member = x;
		result = member;
		double numerator = member;
    	
       for ( n=1; fabs(member)>precision; n++)
	   {
       	numerator *= -x * x;
	    member = numerator / (2 * n + 1);
		result += member;
	   }
    }

	//������� ��������
	double  ClassCtgCalc::AtanX()
    {
		return atan(x);
    }

	//�������
	void ClassCtgCalc::SET_X(double s_x)
	{
		x = s_x;
	}

	void  ClassCtgCalc::SET_precision(double s_precision)
	{
		precision = s_precision;
	}
	//�������
	double ClassCtgCalc::GET_result()
    {
		return result;
    }
	double ClassCtgCalc::GET_n()
	{
		return n;
	}


	

