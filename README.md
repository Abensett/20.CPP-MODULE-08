# 20.-CPP-MODULE-08

## La STL = Standard Template Library
* [Containers templates](#Containers-templates)  
* [Iterators](#Iterators)  
* [Algorithmes](#Algorithmes)  


### Containers templates
> Self-explanatory see the example
> * list
> * map
> * vector ->  equivalent tableau
```C++
list<int>			lst;
list<int>::const_iterator	iter;
list<int>::const_iterator	itend = lst.end();
for (iter = lst.begin(); iter != itened; iter++)
{
	cout << *it << endl; 				// Deferencement possible	
}
```
### Iterators
> "Pointeurs pour les containers"  
> Plus d'informations dans le projet : [Ft_containers](../../../21.-Ft_containers)
### Algorithmes
```C++
#include <algorithm>
for_each(lst.begin(),lst.end(), display) 		// (iter, itend, fcn)
```

