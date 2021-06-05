#pragma once
#include "ClassCtgCalc.h"
#include <math.h>

    //Сама функция асчёта
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

	//функция проверки
	double  ClassCtgCalc::AtanX()
    {
		return atan(x);
    }

	//сеттеры
	void ClassCtgCalc::SET_X(double s_x)
	{
		x = s_x;
	}

	void  ClassCtgCalc::SET_precision(double s_precision)
	{
		precision = s_precision;
	}
	//геттеры
	double ClassCtgCalc::GET_result()
    {
		return result;
    }
	double ClassCtgCalc::GET_n()
	{
		return n;
	}


	

