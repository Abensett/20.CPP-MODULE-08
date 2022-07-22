/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:38:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/22 02:27:11 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <vector>
# include <iostream>
# include <limits>

class Span
{
	public:
		Span( unsigned int N);
		Span(const Span &span);
		virtual ~Span();

		Span	&operator=(const Span &span);

		// member functions
		void	addNumber(int n);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		void	printData(std::ostream &o, const unsigned int max = 10) const;

		// templated functions
		template<typename T> void	fillRange(typename T::iterator begin, typename T::iterator end);

		// exceptions
		class AlreadyFull : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					 return ("Span::Exception : full");
				}
		};

		class NotFilledEnough : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					 return ("Span::Exception : not filled enough");
				}
		};

	private:
		Span(void);
		unsigned int		_N;
		unsigned int		_stored;
		std::vector<int>	_data;

};

std::ostream	&operator<<(std::ostream &o, const Span &span);

typedef std::vector<int>::const_iterator vectIt;

// templated functions

template<typename T> void	Span::fillRange(typename T::iterator begin, typename T::iterator end)
{
	typename T::iterator	it;

	it = begin;
	while (it != end)
	{
		addNumber(*it);
		it++;
	}
}

#endif
