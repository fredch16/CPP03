/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 22:09:08 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/08 16:54:14 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    std::cout << "=== Constructors and Basic Tests ===" << std::endl;

    Fixed a;
    Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);             // copy constructor

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d (copy of b): " << d << std::endl;

    a = Fixed(5.05f);        // assignment operator
    std::cout << "a (after assignment): " << a << std::endl;


    std::cout << "\n=== Comparison Operators ===" << std::endl;

    std::cout << "b > a: "  << (b > a)  << std::endl;
    std::cout << "b < a: "  << (b < a)  << std::endl;
    std::cout << "b >= a: " << (b >= a) << std::endl;
    std::cout << "b <= a: " << (b <= a) << std::endl;
    std::cout << "b == d: " << (b == d) << std::endl;
    std::cout << "b != a: " << (b != a) << std::endl;


    std::cout << "\n=== Arithmetic Operators ===" << std::endl;

    Fixed x(2.5f);
    Fixed y(1.5f);

    std::cout << "x + y = " << (x + y) << std::endl;
    std::cout << "x - y = " << (x - y) << std::endl;
    std::cout << "x * y = " << (x * y) << std::endl;
    std::cout << "x / y = " << (x / y) << std::endl;


    std::cout << "\n=== Increment / Decrement ===" << std::endl;

    Fixed inc(0);

    std::cout << "Start:        " << inc << std::endl;
    std::cout << "++inc:        " << ++inc << std::endl;
    std::cout << "inc after:    " << inc << std::endl;

    std::cout << "inc++:        " << inc++ << std::endl;
    std::cout << "inc after:    " << inc << std::endl;

    std::cout << "--inc:        " << --inc << std::endl;
    std::cout << "inc after:    " << inc << std::endl;

    std::cout << "inc--:        " << inc-- << std::endl;
    std::cout << "inc after:    " << inc << std::endl;


    std::cout << "\n=== min / max ===" << std::endl;

    Fixed e(3.14f);
    Fixed f(6.28f);

    std::cout << "min(e, f): " << Fixed::min(e, f) << std::endl;
    std::cout << "max(e, f): " << Fixed::max(e, f) << std::endl;

    const Fixed g(100);
    const Fixed h(50);

    std::cout << "min(g, h) const: " << Fixed::min(g, h) << std::endl;
    std::cout << "max(g, h) const: " << Fixed::max(g, h) << std::endl;


    std::cout << "\n=== Finished Tests ===" << std::endl;

    return 0;
}
