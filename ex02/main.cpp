/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 22:09:08 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/10 12:42:20 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n--- ScavTrap Test ---\n";
    ScavTrap s("Scavy");
    s.guardGate();

    std::cout << "\n--- FragTrap Test ---\n";
    FragTrap f("Fragger");
    f.highFivesGuys();

    std::cout << "\n--- Copy Tests ---\n";
    ScavTrap original("Orig"), assigned("Temp");
    ScavTrap copy(original);   // copy constructor
    assigned = original;       // copy assignment

    FragTrap fragg("frag");
    FragTrap copyfrag(fragg); // copy constructor

    std::cout << "\n--- Edge Case ---\n";
    ScavTrap e("Edge");
    e.takeDamage(200);  // dies
    e.attack("Nobody"); // can't
    e.beRepaired(10);   // can't

    std::cout << "\nDone.\n";
    return 0;
}
