/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:04:44 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/15 19:55:02 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_bstnew: Create new binary search tree.
**	
**	Creates a new binary search tree root and initializes all values.
**	If key parameter is null, then set key to null and size to 0.
**	Set left and right pointers to null by default.
**	Returns initialized root
*/
t_bst	*ft_bstnew(void const *key, size_t key_size)
{
	t_bst *root;

	root = ft_memalloc(sizeof(t_bst));
	if (root == NULL)
		return (NULL);
	root->content ft_memalloc(sizeof(key_size * sizeof(key)));
	if (key == NULL || root->content == NULL)
	{
		root->content = NULL;
		root->content_size = 0;
	}
	else
	{
		ft_memcpy(root->content, key, key_size);
		head->key_size = key_size;
	}
	root->left = NULL;
	root->right = NULL;
	return (root);
}
