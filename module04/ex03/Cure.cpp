/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <oolkay@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:59:50 by diogmart          #+#    #+#             */
/*   Updated: 2024/01/27 14:24:55 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& original) : AMateria(original.type) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& original) {
	AMateria::operator=(original);
	return (*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() <<" wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}
