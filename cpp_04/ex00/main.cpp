/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:58:27 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:58:28 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    //Animal
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    //WrongAnimal
    // const WrongAnimal* meta1 = new WrongAnimal();
    // const WrongAnimal* i1 = new WrongCat();

    // std::cout << i1->getType() << " " << std::endl;
    // i1->makeSound(); //will output the WrongAnimal sound!
    // meta1->makeSound();

    // delete meta1;
    // delete i1;

    return 0;
}