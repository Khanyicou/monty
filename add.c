#include "monty.h"

/**
 * f_add - adds the top two elements
 * @head: The stack head
 * @counter: The line_number
 * Return: n/a
*/

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free_stack(*head);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	*head = h->next;
	 h->next->n = aux;
	free(h);
}
