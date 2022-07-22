/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/22 01:40:02 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************************************************************
	A gerer containers de sequence : vector, deque, list
	Non à gérer Associatifs : map, set
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
	cout << nb << " ";
}

template<typename T> void	Tester(const std::string name)
{

	int	fill[10];
	for (int i = 0; i < 10; i++)
		fill[i] = std::rand() % 100;

	T	container(fill, fill + 10);
	cout  << "  ["<< GREEN << name << END << "] ";
	std::for_each(container.begin(), container.end(), display);
	cout << endl;

	cout<<"easyfind("<< name <<","<< fill[5] << ") is "<< *(easyfind(container, fill[5])) << endl;

	std::for_each(easyfind(container, fill[5]), container.end(), display);
	cout << endl;

	cout << "easyfind("<<name<<", 150) == container.end() ? " << ((container.end() == easyfind(container, 150)) ? "true" : "false") << endl;
	cout << endl;
}

int	main(void)
{
	srand(time(NULL));

	Tester< std::list<int> >("list");
	Tester< std::vector<int> >("vector");
	Tester< std::deque<int> >("deque");

	return (0);
}
