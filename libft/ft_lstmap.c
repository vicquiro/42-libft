#include "libft.h"

/**
 * @brief Itera la lista ’lst’ y aplica la función ’f’ al
        contenido de cada nodo. Crea una lista resultante
        de la aplicación correcta y sucesiva de la función
        ’f’ sobre cada nodo. La función ’del’ se utiliza
        para eliminar el contenido de un nodo, si hace falta.
 * @param lst  Puntero a un nodo

 * @param f  dirección de un puntero a una función usada
            en la iteración de cada elemento de la lista.
 
 * @param del  Puntero a función utilizado para eliminar
                el contenido de un nodo, si es necesario 
 
 * @return t_list*  La nueva lista.
                    NULL si falla la reserva de memoria.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*aux;

	new_list = 0;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&aux, del);
			return (0);
		}
		ft_lstadd_back(&new_list, aux);
		lst = lst->next;
	}
	return (new_list);
}
