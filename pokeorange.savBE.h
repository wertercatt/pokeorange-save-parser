typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned short    word;
typedef struct box_struct box_struct, *Pbox_struct;

typedef enum mon_species {
    BULBASAUR=1,
    IVYSAUR=2,
    VENUSAUR=3,
    CHARMANDER=4,
    CHARMELEON=5,
    CHARIZARD=6,
    SQUIRTLE=7,
    WARTORTLE=8,
    BLASTOISE=9,
    CATERPIE=10,
    METAPOD=11,
    BUTTERFREE=12,
    WEEDLE=13,
    KAKUNA=14,
    BEEDRILL=15,
    PIDGEY=16,
    KADABRA=64,
    ALAKAZAM=65,
    MACHOP=66,
    MACHOKE=67,
    MACHAMP=68,
    BELLSPROUT=69,
    SLOWBRO=80,
    ONIX=95,
    DROWZEE=96,
    HYPNO=97,
    KRABBY=98,
    KINGLER=99,
    VOLTORB=100,
    ELECTRODE=101,
    EXEGGCUTE=102,
    EXEGGUTOR=103,
    CUBONE=104,
    MAROWAK=105,
    HITMONLEE=106,
    HITMONCHAN=107,
    LICKITUNG=108,
    KOFFING=109,
    TAUROS=128,
    MAGIKARP=129
} mon_species;

typedef enum move_id {
    move_list=0,
    HORN DRILL=32,
    TACKLE=33,
    BODY SLAM=34,
    WRAP=35,
    ROCK THROW=88,
    SCREECH=103
} move_id;

struct box_struct {
    enum mon_species Species;
    byte Item;
    enum move_id Move1;
    enum move_id Move2;
    enum move_id Move3;
    enum move_id Move4;
    word ID;
    byte Exp[3];
    word HPExp;
    word AtkExp;
    word DefExp;
    word SpdExp;
    word SpcExp;
    byte DVs[2]; /* Atk, Def, Spd, Spc. Lowbits are HP */
    byte PP1;
    byte PP2;
    byte PP3;
    byte PP4;
    byte Happiness;
    byte Flags1;
    byte Flags2;
    byte CaughtLocation;
    byte Level;
};

