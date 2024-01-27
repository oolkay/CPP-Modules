/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <oolkay@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:50:07 by diogmart          #+#    #+#             */
/*   Updated: 2024/01/27 14:27:04 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* oolkay = new Character("oolkay");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	oolkay->equip(tmp);
	tmp = src->createMateria("cure");
	oolkay->equip(tmp);
	
	ICharacter* acepni = new Character("acepni");
	oolkay->use(0, *acepni);
	oolkay->use(1, *acepni);
	
	delete acepni;
	delete oolkay;
	delete src;
	
	return 0;
}