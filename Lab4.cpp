#include <iostream>
#include "conference.h"
#include "conference_methods.cpp"
using namespace std;

int main()
{
	Conference TruskavetsC("DKZ", 350, 200, " Truskavets", 2013, "Melnyk", "science", 6);
	Conference CITB("InformationTB", 250, 250, "Kiev", 2012, "Dodonov", "information", 7);
	Conference LC("Protection of information", 100, 100, "Lviv", 2016, "Shevchenko", "safety", 4);
	TruskavetsC.getInfo(TruskavetsC);
	cout << endl;
	CITB.getInfo(CITB);
	cout << endl;
	LC.getInfo(LC);
	cout << endl;

	return 0;
}
