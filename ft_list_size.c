#include "ft_list.h"

// This function, named "ft_list_size", recursively calculates the size (number of nodes) of a linked list.
int ft_list_size(t_list *begin_list)
{
    // If the given node (begin_list) is NULL, it means we've reached the end of the list or the list is empty.
    // In this case, return 0.
    if (begin_list == 0)
        return (0);
    // Otherwise, count this node (1) and add the count of the remaining nodes in the list.
    // This is done by recursively calling 'ft_list_size' with the next node.
    else
        return (1 + ft_list_size(begin_list->next));
}
