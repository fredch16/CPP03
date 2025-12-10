/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:23:52 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/10 14:23:13 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _atkdmg(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_ep = other._ep;
		this->_hp = other._hp;
		this->_atkdmg = other._atkdmg;
		this->_name = other._name;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_ep <= 0)
	{
		std::cout << "No energy left to attack!" << std::endl;
		return ;
	}
	if (this->_hp <= 0)
	{
		std::cout << "No hit points left. Cannot attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " dealing " << this->_atkdmg << " damage" << std::endl;
	this->_ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << "No hit points left. Cannot take further damage" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage" << std::endl;
	this->_hp -= amount;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep <= 0)
	{
		std::cout << "No energy left to repair!" << std::endl;
		return ;
	}
	if (this->_hp <= 0)
	{
		std::cout << "No hit points left. Cannot repair!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap" << this->_name << " repairs itself for " << amount << " health" << std::endl;
	this->_ep--;
	this->_hp += amount;
}
