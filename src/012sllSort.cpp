/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	if (head == NULL)
	{
		return;
	}
	int a[3] = { 0 },i=0;     //hashing technique used to store the frequency of each integer
	struct node *curr = head;
	while (head)
	{
		a[head->data]++;
		head = head->next;
	}
	while (curr&&i<3)
	{
		if (a[i] > 0)
		{
			curr->data = i;
			a[i]--;
			curr = curr->next;
		}
		else
		{
			i++;
		}
	}


	
}