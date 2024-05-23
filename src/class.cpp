#include "class.h"

void base::basedClass::setNAME(std::string newNAME)
{
    this->NAME=newNAME;
}

std::string base::basedClass::getNAME()
{
    return this->NAME;
}

void base::basedClass::setHP(unsigned short int newHP)
{
    this->HP = newHP;
}

unsigned short int base::basedClass::getHP()
{
    return this->HP;
}

void base::basedClass::setATTACK(unsigned short int newATTACK)
{
    this->ATTACK = newATTACK;
}

unsigned short int base::basedClass::getATTACK()
{
    return this->ATTACK;
}

void base::basedClass::setARMOR(unsigned short int newARMOR)
{
    this->ARMOR = newARMOR;
}

unsigned short int base::basedClass::getARMOR()
{
    return this->ARMOR;
}

void base::basedClass::setSPEED(unsigned short int newSPEED)
{
    this->SPEED = newSPEED;
}

unsigned short int base::basedClass::getSPEED()
{
    return this->SPEED;
}

bool base::basedClass::isPlayerControl()
{
    return this->PlayerControl;
}

void profession::professionMage::setMAGIC(unsigned short int newMAGIC)
{
    this->MAGIC = newMAGIC;
}

unsigned short int profession::professionMage::getMAGIC()
{
    return this->MAGIC;
}

void profession::professionMage::setMP(unsigned short int newMP)
{
    this->MP = newMP;
}

unsigned short int profession::professionMage::getMP()
{
    return this->MP;
}

finalCharcter::player_professionMelee::player_professionMelee(std::string newNAME, unsigned short int newHP, unsigned short int newATTACK, unsigned short int newARMOR, unsigned short int newSPEED)
{
    this->PlayerControl = true;
    this->NAME = newNAME;
    this->HP = newHP;
    this->ATTACK = newATTACK;
    this->ARMOR= newARMOR;
    this->SPEED = newSPEED;
}

finalCharcter::player_professionMage::player_professionMage(std::string newNAME, unsigned short int newHP, unsigned short int newATTACK, unsigned short int newMAGIC, unsigned short int newMP, unsigned short int newARMOR, unsigned short int newSPEED)
{
    this->PlayerControl = true;
    this->NAME = newNAME;
    this->HP = newHP;
    this->ATTACK = newATTACK;
    this->ARMOR= newARMOR;
    this->SPEED = newSPEED;
    this->MAGIC = newMAGIC;
    this->MP = newMP;
}

finalCharcter::monster_professionMelee::monster_professionMelee(std::string newNAME, unsigned short int newHP, unsigned short int newATTACK, unsigned short int newARMOR, unsigned short int newSPEED)
{
    this->PlayerControl = false;
    this->NAME = newNAME;
    this->HP = newHP;
    this->ATTACK = newATTACK;
    this->ARMOR= newARMOR;
    this->SPEED = newSPEED;
}

finalCharcter::monster_professionMage::monster_professionMage(std::string newNAME, unsigned short int newHP, unsigned short int newATTACK, unsigned short int newMAGIC, unsigned short int newMP, unsigned short int newARMOR, unsigned short int newSPEED)
{
    this->PlayerControl = false;
    this->NAME = newNAME;
    this->HP = newHP;
    this->ATTACK = newATTACK;
    this->ARMOR= newARMOR;
    this->SPEED = newSPEED;
    this->MAGIC = newMAGIC;
    this->MP = newMP;
}
