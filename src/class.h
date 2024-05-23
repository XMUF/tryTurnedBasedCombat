#include <string>
namespace base
{
    class basedClass
    {
    protected:
        std::string NAME;
        unsigned short int HP;
        unsigned short int ATTACK;
        unsigned short int ARMOR;
        unsigned short int SPEED;
        bool PlayerControl;

    public:
        void setNAME(std::string newNAME);
        std::string getNAME();

        void setHP(unsigned short int newHP);
        unsigned short int getHP();

        void setATTACK(unsigned short int newATTACK);
        unsigned short int getATTACK();

        void setARMOR(unsigned short int newARMOR);
        unsigned short int getARMOR();

        void setSPEED(unsigned short int newSPEED);
        unsigned short int getSPEED();

        bool isPlayerControl();
    };
}

namespace control
{
    class player : virtual public base::basedClass
    {
    protected:


    public:
    };

    class monster : virtual public base::basedClass
    {
    protected:


    public:
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
        unsigned short int MAGIC;
        unsigned short int MP;

    public:
        void setMAGIC(unsigned short int newMAGIC);
        unsigned short int getMAGIC();
        void setMP(unsigned short int newMP);
        unsigned short int getMP();
    };
}

namespace finalCharcter
{
    class player_professionMelee : virtual public control::player, virtual public profession::professionMelee
    {
    public:
        player_professionMelee(std::string newNAME,unsigned short int newHP, unsigned short int newATTACK, unsigned short int newARMOR, unsigned short int newSPEED);
    };

    class player_professionMage : virtual public control::player, virtual public profession::professionMage
    {
    public:
        player_professionMage(std::string newNAME,unsigned short int newHP, unsigned short int newATTACK, unsigned short int newMAGIC, unsigned short int newMP, unsigned short int newARMOR, unsigned short int newSPEED);
    };

    class monster_professionMelee : virtual public control::monster, virtual public profession::professionMelee
    {
    public:
        monster_professionMelee(std::string newNAME,unsigned short int newHP, unsigned short int newATTACK, unsigned short int newARMOR, unsigned short int newSPEED);
    };

    class monster_professionMage : virtual public control::monster, virtual public profession::professionMage
    {
    public:
        monster_professionMage(std::string newNAME,unsigned short int newHP, unsigned short int newATTACK, unsigned short int newMAGIC, unsigned short int newMP, unsigned short int newARMOR, unsigned short int newSPEED);
    };
}