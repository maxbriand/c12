#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	

}

// create 4 nodes
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	int		value1 = 10;
	int		value2 = 20;
	int		value3 = 30;
	int		value4 = 40;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));

	node1->data = &value1;
	node2->data = &value2;
	node3->data = &value3;
	node4->data = &value4;

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	ft_list_reverse(&node1);
	while (node1)
	{
		printf("%d\n", *(int*)node1->next);
		node1->next;
	}
	return (0);
}
