#ifndef LIST_
#define LIST_

#include <iostream>
#include <string.h>

using namespace std;

struct NODE {
       float num;
       NODE *next;
};

class LIST {
	protected: 
		NODE *head;
		int size;
	public:
		LIST();				//constructor
	 	void push(float);
	 	float pop();
	 	bool isEmpty() {head == NULL;}
	 	void show();		//display list
		void display();		//display top of list
	 	~LIST();			//deconstructor
};
#endif

