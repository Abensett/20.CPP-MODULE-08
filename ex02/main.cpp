/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/21 19:13:52 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*************************************************************************** 
	MutantStack is a stack but iterable.
	Let's compare if it works by comparing to List and Vector.
****************************************************************************/
#include "MutantStack.hpp"

void	testList(void)
{
	std::list<int>	mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << "top = " << mstack.back() << std::endl;
	
	mstack.pop_back();

	std::cout << "size = " << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(-12);
	mstack.push_back(0);

	std::list<int>::iterator	it = mstack.begin();
	std::list<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}
void	testVector(void)
{
	std::vector<int>	mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << "top = " << *(mstack.end() - 1) << std::endl;
	
	mstack.pop_back();

	std::cout << "size = " << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(-12);
	mstack.push_back(0);

	std::vector<int>::iterator	it = mstack.begin();
	std::vector<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	testSubject(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top = " << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << "size = " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(-12);
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack <int>	s(mstack);
}

int	main(void)
{
	testSubject();
	cout << endl;
	testVector();
	cout << endl;
	testList();

	return (0);
}