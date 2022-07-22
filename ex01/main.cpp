/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/22 02:39:16 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <list>
#include <vector>
#include <deque>
#define GREEN "\x1B[32m"
#define END "\x1B[0m"

using std::cout;
using std::endl;

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span sp2 = Span(10000);
	std::vector<int>	vect;
	for (int i = 1; i <= 10000; i++)
			vect.push_back(i);
	sp2.fillRange< std::vector<int> >(vect.begin(), vect.end());

	cout << sp2 << endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	try {
	 	sp.addNumber(11);
	 }
	catch (std::exception &e){
		cout << e.what()<<endl;
	}
	Span sp3 = Span(2);
	// sp3.addNumber(1);
	// sp3.addNumber(1);
	try {
	 	sp3.shortestSpan();
	 }
	catch (std::exception &e){
		cout << e.what()<<endl;
	}

	return 0;
}
