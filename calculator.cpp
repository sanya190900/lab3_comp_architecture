#include "calculator.h"

int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
    return a + b;
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3... fix truncation error
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
// some modification
// adding division operation
// for integer and double types
// int Calculator::Div(int a, int b){
//	return a : b
//	}
//int Calculator::Div(double a, double b){
//	return a : b + 0.5
//	}
// we have 4 basic operations
// this file was modified too
// complete lab3
// the end
