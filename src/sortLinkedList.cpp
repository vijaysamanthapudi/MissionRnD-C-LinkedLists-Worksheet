 /*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head)
{
	if (head == NULL)
	{
		return NULL;
	}

	struct node *prev = head, *curr = head->next;
	while (curr)
	{
		prev = head;
		while (prev)
		{
			if (prev->num > curr->num)
			{
				int temp = prev->num;
				prev->num = curr->num;
				curr->num = temp;
			}
			prev = prev->next;

		}
		curr = curr->next;
	}
	return head;
	
}