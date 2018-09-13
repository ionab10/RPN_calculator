/* Iona Buchanan
ICS4U Creelman
2014
RPN Calculator*/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <sstream>
#include "RPN.h"

using namespace std;

int main() {
	RPN calc;
	LIST();
	char inputA[10] = "", inputB[10];
	char op[10];
	float a, b;
	
	cout << "This is an RPN calculator.\n\nEnter two numbers (float value) followed by a valid operation or 'q' to quit:" << endl << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "|\tabs\t|\t\t\t\t|\t!\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\tsqrt\t|\tcbrt\t|\troot\t|\tinv\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\tsquare\t|\tcube\t|\t^\t|\texp\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\tarcsin\t|\tarccos\t|\tarctan\t|\tln\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\tsin\t|\tcos\t|\ttan\t|\tlog\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\t7\t|\t8\t|\t9\t|\t+\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\t4\t|\t5\t|\t6\t|\t-\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\t1\t|\t2\t|\t3\t|\t*\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\t0\t\t\t|\t.\t|\t/\t|" << endl;
	cout << "|---------------------------------------------------------------|" << endl;
	cout << "|\t\t\t\tENTER\t\t\t\t|" << endl;
	cout << "-----------------------------------------------------------------" << endl << endl;
	
	/*cout << "addition (+)\t\tsubtraction (-)\t\tmultiplication (*)\t\tdivision (/)" << endl;
	cout << "nth power (^)\nlog base b (log)\nth root (root)" << endl; 
	cout << "sin\ncos\ntan\narcsin\narccos\narctan" << endl;
	cout << "inverse function (inv)\nsquare\ncube\nsquare root (sqrt)\ncube root (cbrt)" << endl;
	cout << "exponential function [e^x] (exp)\nnatual logarithm (ln)\ncommon logarithm (log)" << endl;
	cout << "absolute value (abs)\nfactorial (!)" << endl << endl;*/
	
	while (true) {
		cin >> inputA;
		if (istringstream(inputA) >> a)	{				//push a
            calc.push(a);
            
            cin >> inputB;
			if (istringstream(inputB) >> b)	{				//if second float is added, push float and wait for operation
            	calc.push(b);
            
            	cin >> op;
				//math with two inputs
				if (strcmp(op, "+") == 0) 
					calc.add();
				else if (strcmp(op, "-") == 0) 
					calc.sub(); 
				else if (strcmp(op, "*") == 0) 
					calc.mult(); 
				else if (strcmp(op, "/") == 0) 
					calc.div();	
				else if (strcmp(op, "^") == 0)
					calc.power();
				else if (strcmp(op, "log") == 0)
					calc.logarithm();	
				else if (strcmp(op, "root") == 0)
					calc.root();	
				
				else if(inputA[0] == 'q')			//quit
					break;
				else {
					cout << "Invalid input" << endl << endl;		//error checking
					continue;
				}
     
        }
            
            //perform operation of single float
           	else if (strcmp(inputB, "sin") == 0) 
				calc.sine(); 
           	else if (strcmp(inputB, "cos") == 0) 
				calc.cosine(); 
           	else if (strcmp(inputB, "tan") == 0) 
				calc.tangent(); 
           	else if (strcmp(inputB, "arcsin") == 0) 
				calc.arcsin(); 
           	else if (strcmp(inputB, "arccos") == 0) 
				calc.arccos(); 
           	else if (strcmp(inputB, "arctan") == 0) 
				calc.arctan(); 
           	else if (strcmp(inputB, "inv") == 0) 
				calc.inv(); 	
			else if (strcmp(inputB, "square") == 0) 
				calc.square();
			else if (strcmp(inputB, "cubed") == 0) 
				calc.cube();
           	else if (strcmp(inputB, "sqrt") == 0) 
				calc.sqroot(); 
           	else if (strcmp(inputB, "cbrt") == 0) 
				calc.cbroot(); 
           	else if (strcmp(inputB, "exp") == 0) 
				calc.epow(); 
           	else if (strcmp(inputB, "ln") == 0) 
				calc.ln(); 
			else if (strcmp(inputB, "log") == 0) 
				calc.log_10(); 
			else if (strcmp(inputB, "abs") == 0) 
				calc.absval(); 
			else if (strcmp(inputB, "!") == 0) 
				calc.fact(); 
            
        	else if(inputB[0] == 'q')			//quit
				break;
			else {
				cout << "Invalid input" << endl <<endl;			//error checking
				continue;
			}
				
		}
            
        	else if(inputA[0] == 'q')			//quit
				break;
			else {
				cout << "Invalid input" << endl << endl;		//error checking
				continue;
			}
						
		//calc.show();
		calc.display();
	}
	return 0;
}	
