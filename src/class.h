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

    class monster_professionMelee:virtual public control::monster,virtual public profession::professionMelee{
        public:
        monster_professionMelee(int newHP, int newATTACK, int newARMOR, int newSPEED);
    };

    class monster_professionMage:virtual public control::monster,virtual public profession::professionMage{
        public:
        monster_professionMage(int newHP, int newATTACK, int newMAGIC, int newMP, int newARMOR, int newSPEED);
    };
}