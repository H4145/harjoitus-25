/*
Eetu Salo

Harjoitus 25 (Palautus vko 51)

Muuta harjoituksen 24 toiminnallisuutta niin, etta
varaat henkilötiedoille tilan dynaamisesti (max 10 hlo).
Muuta valikko alla olevan esimerkin mukaiseksi ja toteuta valikossa
näkyvät toiminnot.

VALIKKO
0 Lopeta
1 Lisaa henkilo
2 Nayta henkilo
3 Nayta kaikki henkilot
4 Poista henkilon tiedot



*/



#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct HLO
{
	char nimi[32];
	float matka;
	int hattu;
};
const int MAX_HLO = 10;

int Valikko(void);
void TulostaKaikkiHenkilot(HLO[], int lkm);
void LisaaHenkilo(HLO[], int *lkm);
void TulostaHenkilo(HLO henkilo[]);
void PoistaTiedot(HLO henkilo[], int *lkm);



