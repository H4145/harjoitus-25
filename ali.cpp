#include"maarittely.h"

int Valikko(void)
{
	int valinta;
	cout << "\nValikko\n\n";
	cout << "0. Lopetus\n";
	cout << "1. Uusi henkilo\n";
	cout << "2. Nayta henkilo\n";
	cout << "3. Nayta kaikki henkilot\n";
	cout << "4. Poista henkilon tiedot\n";
	cin >> valinta;
	return valinta;
}

void TulostaKaikkiHenkilot(HLO henkilo[], int lkm)
{

	for (int i = 0; i < lkm; i++)
	{
		cout << "\nNimi: " << henkilo[i].nimi << endl
			<< "Koulumatka: " << henkilo[i].matka << endl
			<< "Hatun koko: " << henkilo[i].hattu << endl << endl;
	}
}
void LisaaHenkilo(HLO p_henkilo[], int *lkm)
{
	cout << "Anna nimi: ";
	cin >> p_henkilo[*lkm].nimi;
	cout << "\nAnna koulumatka: ";
	cin >> p_henkilo[*lkm].matka;
	cout << "\nAnna hatun koko: ";
	cin >> p_henkilo[*lkm].hattu;
	(*lkm)++;
}

void TulostaHenkilo(HLO henkilo[])
{
	int nro;
	cout << "Tulostettavan henkilon numero? ";
	cin >> nro;
	if (nro > 10)
	{
		cout << " Ei voi suorittaa! ";
	}
	else
	{
		cout << "\n Nimi: " << henkilo[nro - 1].nimi << "\n Koulumatka: " << henkilo[nro - 1].matka << "\n Hatun koko: " << henkilo[nro - 1].hattu << endl;
	}
}

void PoistaTiedot(HLO p_henkilo[], int *lkm)
{
	int nro;
	cout << "\nValitse poistettava henkilo: ";
	cin >> nro;

	*p_henkilo[nro - 1].nimi = NULL;
	p_henkilo[nro - 1].matka = 0;
	p_henkilo[nro - 1].hattu = 0;

	for (nro; nro <= *lkm; nro++)
	{
		p_henkilo[nro - 1] = p_henkilo[nro];
	}

	(*lkm)--;
}

