// 从第117行开始才是使用的
namespace base
{
    class basedClass
    {
    protected:
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
}

namespace control
{
    class player : virtual public base::basedClass
    {
    protected:
        bool isPlayerControl = true;
    };

    class monster : virtual public base::basedClass
    {
    protected:
        bool isPlayerControl = false;
    };
}

namespace profession
{
    class professionMelee : virtual public base::basedClass
    {
    };

    class professionMage : virtual public base::basedClass
    {
    protected:
        int MAGIC;
        int MP;

    public:
        void setMAGIC(int newMAGIC);
        int getMAGIC();
        void setMP(int newMP);
        int getMP();
    };
    void professionMage::setMAGIC(int newMAGIC)
    {
        this->MAGIC = newMAGIC;
    }
    int professionMage::getMAGIC()
    {
        return this->MAGIC;
    }
    void professionMage::setMP(int newMP)
    {
        this->MP = newMP;
    }
    int professionMage::getMP()
    {
        return this->MP;
    }
}

namespace finalCharcter
{
    class player_professionMelee : virtual public control::player, virtual public profession::professionMelee
    {
    public:
        player_professionMelee(int newHP, int newATTACK, int newARMOR, int newSPEED);
    };

    class player_professionMage : virtual public control::player, virtual public profession::professionMage
    {
    public:
        player_professionMage(int newHP, int newATTACK, int newMAGIC, int newMP, int newARMOR, int newSPEED);
    };
    class monster_professionMelee : virtual public control::monster, virtual public profession::professionMelee
    {
    public:
        monster_professionMelee(int newHP, int newATTACK, int newARMOR, int newSPEED);
    };

    class monster_professionMage : virtual public control::monster, virtual public profession::professionMage
    {
    public:
        monster_professionMage(int newHP, int newATTACK, int newMAGIC, int newMP, int newARMOR, int newSPEED);
    };

    player_professionMelee::player_professionMelee(int newHP, int newATTACK, int newARMOR, int newSPEED)
    {
        this->setHP(newHP);
        this->setATTACK(newATTACK);
        this->setARMOR(newARMOR);
        this->setSPEED(newSPEED);
    }
    player_professionMage::player_professionMage(int newHP, int newATTACK, int newMAGIC, int newMP, int newARMOR, int newSPEED)
    {
        this->setHP(newHP);
        this->setATTACK(newATTACK);
        this->setMAGIC(newMAGIC);
        this->setMP(newMP);
        this->setARMOR(newARMOR);
        this->setSPEED(newSPEED);
    }

    monster_professionMelee::monster_professionMelee(int newHP, int newATTACK, int newARMOR, int newSPEED)
    {
        this->setHP(newHP);
        this->setATTACK(newATTACK);
        this->setARMOR(newARMOR);
        this->setSPEED(newSPEED);
    }
    monster_professionMage::monster_professionMage(int newHP, int newATTACK, int newMAGIC, int newMP, int newARMOR, int newSPEED)
    {
        this->setHP(newHP);
        this->setATTACK(newATTACK);
        this->setMAGIC(newMAGIC);
        this->setMP(newMP);
        this->setARMOR(newARMOR);
        this->setSPEED(newSPEED);
    }
}
