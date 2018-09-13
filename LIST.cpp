#include <iostream>
#include "LIST.h"

using namespace std;

LIST::LIST() {				//constructor
	head = NULL; 
	size = 0;
}

void  LIST::show() {
	NODE *ptr = head;
	int count = 0;
	
	cout << "head " << head  << endl;
	while (ptr && count < 10) {					//display top ten elements
		cout << ptr << " " << ptr->num << " next " << ptr->next << endl;
		ptr = ptr->next;
		count++;
	}
	cout << endl;
}
		
void LIST::push(float x) {
	NODE *newnode = new NODE;		//new node
	newnode->num = x;				//assign float
	newnode->next = head;			//change head
	head = newnode;
	size++;							//size of list increase by 1
}

float LIST::pop() {
	float x;
	
	if (!isEmpty()) {				//if list is not empty
		x = head->num;					//head of list
		NODE *temp = head;
		head = head->next;				//change head
		delete temp; 					//delete node
		
		size--;
		return x;
	}
	
	else
		cout << "List empty" << endl;		//error
}

void  LIST::display() {
	NODE *ptr = head;
	cout << "\t\t\t\t\t" << ptr->num << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

LIST::~LIST() {
	NODE *temp;

	while (head != NULL) {			//until there is nothing left, delete all elements and nodes
		temp = head;
		head = head->next;
	delete temp; 
	}
}
