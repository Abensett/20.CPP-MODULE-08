/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/21 15:45:52 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*************************************************************************** 
	A gerer containers de sequence : vector, deque, list
	Non : map, set 
****************************************************************************/

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>
#define GREEN "\x1B[32m"
#define END "\x1B[0m"

using std::cout;
using std::endl;

static void	display(int nb)
{
	std::cout << nb << " ";
}

template<typename T> void	Tester(const std::string name)
{

	int	fill[10];
	for (int i = 0; i < 10; i++)
		fill[i] = std::rand() % 100;

	T	container(fill, fill + 10);
	cout  << "  ["<< GREEN << name << END << "] ";
	std::for_each(container.begin(), container.end(), display);
	std::cout << std::endl;

	std::cout<<"easyfind(container, " << fill[5] << ") is " << *(easyfind(container, fill[3])) << std::endl;

	std::for_each(easyfind(container, fill[5]), container.end(), display);
	std::cout << std::endl;

	std::cout << "easyfind(container, 150) == container.end() ? " << ((container.end() == easyfind(container, 150)) ? "true" : "false") << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	srand(time(NULL));

	Tester< std::list<int> >("list");
	Tester< std::vector<int> >("vector");
	Tester< std::deque<int> >("deque");
	
	return (0);
}