/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:56:25 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/08 16:57:50 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :_rawBits(0)
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	if (DEBUG)
		std::cout << "Fixed int constructor called" << std::endl;
	_rawBits = num << _fractionalBits;
}

int Fixed::toInt(void) const
{
	return (_rawBits >> _fractionalBits); // same as /256 in this case
}

Fixed::Fixed(const float num)
{
	if (DEBUG)
		std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(num * (1 << _fractionalBits));
}

float Fixed::toFloat(void) const
{
	return ((float)_rawBits / (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	if (DEBUG)
		std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}
void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return *this;
}