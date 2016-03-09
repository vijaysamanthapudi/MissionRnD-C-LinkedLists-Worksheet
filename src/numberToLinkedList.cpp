/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
struct node *create_node(struct node *head, int num);
struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N)
{
	struct node *head=NULL;
	if (N < 0)
	{
		N = -1*N;
	}
	if (N == 0)
	{
		head = create_node(head, N);
	}
	

	while (N)
	{
		head=create_node(head,N % 10);
		N /= 10;

	}
	
	return head;
}



struct node *create_node(struct node*head, int num)
{

	struct node *h = (struct node*)malloc(sizeof(struct node));
	h->num = num;
	h->next = head;
	head = h;
	return head;


}