/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:38:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/22 04:07:50 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <string>
#include <iostream>
#include <iomanip>

template<typename T> typename T::iterator	easyfind(T &t, int n)
{
	return (std::find(t.begin(), t.end(), n));					// take iterator begin, fin , value to find
}

#endif
