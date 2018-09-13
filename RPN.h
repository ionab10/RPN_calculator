#ifndef RPN_
#define RPN_
#include "LIST.h"

class RPN: public LIST {		//calculator operations and functions
	public:
		//operations with two inputs
		void add();
		void sub();
		void mult();
		void div();
		void power();			//raise x to the power of y
		void logarithm();		//log base x of y
		void root();			//yth root of x
		
		//operations with one input
		void cosine();
		void sine();
		void tangent();
		void arcsin();
		void arccos();
		void arctan();
		void inv();			//inverse (1/x)
		void square();		
		void cube();
		void sqroot();		//square root
		void cbroot();		//cube root
		void epow();		//exponential function (e^x)
		void ln();			//natual logarithm (log base e)
		void log_10();		//common logarithm (log base 10)
		void absval();		//absolute value
		void fact();		//factorial
};
#endif
