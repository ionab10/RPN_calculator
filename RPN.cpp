#include "RPN.h"
#include "LIST.h"
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cmath>		//math operations and functions

using namespace std;

//math two inputs

void RPN::add() {
	push(pop() + pop());
}

void RPN::sub() {
	push(pop() - pop());
}

void RPN::mult() {
	push(pop() * pop());
}

void RPN::div() {
		push(pop() / pop());
}

void RPN::power() {
	push(pow(pop(), pop()));
}

void RPN::logarithm() {
	push(log(pop())/log(pop()));
}

void RPN::root() {
	push(pow(pop(), (1/pop())));
}


//math one input

void RPN::sine() {
	push(sin(pop()));
}

void RPN::cosine() {
	push(cos(pop()));
}

void RPN::tangent() {
	push(tan(pop()));
}

void RPN::arcsin() {
	push(asin(pop()));
}

void RPN::arccos() {
	push(acos(pop()));
}

void RPN::arctan() {
	push(atan(pop()));
}

void RPN::inv() {
	push(1/pop());
}

void RPN::square() {
	push(pow(pop(), 2));
}

void RPN::cube() {
	push(pow(pop(), 2));
}

void RPN::sqroot() {
	push(sqrt(pop()));
}

void RPN::cbroot() {
	push(cbrt(pop()));
}

void RPN::epow() {
	push(exp(pop()));
}

void RPN::ln() {
	push(log(pop()));
}

void RPN::log_10() {
	push(log10(pop()));
}

void RPN::absval() {
	push(abs(pop()));
}

void RPN::fact() {
	float x, y = 1;
	x = pop();
	
	for (int i=1; i<=x; i++)		//multiply whole numbers up until x
		y = y * i;
	
	push(y);
}


