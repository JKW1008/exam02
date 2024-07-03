#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list *tmp;
	int i = 0;
	
	if (!begin_list)
		return (0);
	tmp = begin_list;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
