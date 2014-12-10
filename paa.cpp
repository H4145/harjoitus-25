#include"maarittely.h"

int main()
{
	HLO henkilo[MAX_HLO];
	int valinta = 1;
	int lkm = 0;
	int hlo = 0;

	HLO*henki = NULL;
	cout << "Montako henkiloa laitetaan? " << endl;
	cin >> hlo;
	if (hlo <= MAX_HLO)
		henki = new HLO[hlo];
	else
	{
		cout << "Liian monta henkiloa, rajataan " <<MAX_HLO<<":een"<< endl;
		hlo = MAX_HLO;
		henki = new HLO[hlo];
	}
	


	while (true)
	{
		valinta = Valikko();


		switch (valinta)
		{
		case 0:return 0;
		case 1:
			if (lkm < hlo)
				LisaaHenkilo(henkilo, &lkm);
			else
				cout << "Liikaa henkiloita! " << endl;
			break;

		case 2:

			TulostaHenkilo(henkilo);
			break;

		case 3:

			TulostaKaikkiHenkilot(henkilo, lkm);
			break;

		case 4:
			PoistaTiedot(henkilo, &lkm);
			break;

		/*case 5:
			TallennaTiedostoon(henkilo, lkm);
			break;*/

		/*case 6:
			HaeTiedostosta(henkilo, &lkm);
			break;*/



		}

	}
	delete henki;
}