/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) 
{
	
	if (head == NULL || K <= 1)
	{
		return NULL;
	}
	int i = 2;
	struct node *prev = head;
	struct node *curr = head->next;
	
		while (prev && curr)
		{
			if (i%K == 0 && curr->next)
			{
				//struct node *temp = curr;
				prev->next = curr->next;
				prev = curr;
				curr = prev->next;

				//printf("%d is deleted", curr->num);
				//free(temp);
			}
			else if (i%K == 0 && curr->next == NULL)
			{
				prev->next = NULL;
			}
			else
			{

				prev = prev->next;
				curr = curr->next;
			}
			i = i + 1;

		}

	
	return head;
}