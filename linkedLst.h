#include<iostream>
#include "node.h"
using namespace std;
class linked_list
{
private:
	Node* head; Node* last;
public:
	linked_list()
	{
		head = NULL; last = NULL;
	}
	void insertLast(Node** head, int item);
	void reverse(Node ** head);
	void display(Node* head);
};
