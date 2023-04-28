#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - single link list
 * @str: string - (malloc string)
 * @len: length of string
 * @next: points to next node
 *
 * Description: single link list node struct
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);


#endif
