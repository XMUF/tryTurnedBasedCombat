class basedClass
{
private:
    int HP;
    int ATTACK;
    int ARMOR;
    int SPEED;

public:
    void setHP(int newHP);
    int getHP();

    void setATTACK(int newATTACK);
    int getATTACK();

    void setARMOR(int newARMOR);
    int getARMOR();

    void setSPEED(int newSPEED);
    int getSPEED();
};

void basedClass::setHP(int newHP)
{
    this->HP = newHP;
}

int basedClass::getHP()
{
    return this->HP;
}

void basedClass::setATTACK(int newATTACK)
{
    this->ATTACK = newATTACK;
}

int basedClass::getATTACK()
{
    return this->ATTACK;
}

void basedClass::setARMOR(int newARMOR)
{
    this->ARMOR = newARMOR;
}

int basedClass::getARMOR()
{
    return this->ARMOR;
}

void basedClass::setSPEED(int newSPEED)
{
    this->SPEED = newSPEED;
}

int basedClass::getSPEED()
{
    return this->SPEED;
}

class player : public basedClass
{
private:
    bool isPlayerControl = true;
};

class monster : public basedClass
{
private:
    bool isPlayerControl = false;
};

class professionMelee : public basedClass
{
};

class professionMage : public basedClass
{
};

class player_professionMelee : public player, public professionMelee
{
public:
}

