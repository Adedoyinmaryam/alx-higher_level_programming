#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - function to check if a singly linked list has a cycle in it.
 * @list: the singly linked list to check
 * Return: 0 if there is no cycle, 1 if there is cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);
	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
