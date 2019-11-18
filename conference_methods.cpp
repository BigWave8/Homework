#include <iostream>
using namespace std;

void Conference::setName(string name1)
{
	name = name1;
}

void Conference::getName()
{
	cout << "Name: " << name << endl;
}

void Conference::setNumber_of_participants(int number_of_participants1)
{
	number_of_participants = number_of_participants1;
}

void Conference::getNumber_of_participants()
{
	cout << "Number of participants: " << number_of_participants << endl;
}

void Conference::setTicket_price(float ticket_price1)
{
	ticket_price = ticket_price1;
}

void Conference::getTicket_price()
{
	cout << "Ticket price: " << ticket_price << endl;
}

void Conference::setCity_hosting(string namecity_hosting1)
{
	city_hosting = namecity_hosting1;
}

void Conference::getCity_hosting()
{
	cout << "City hosting: " << city_hosting << endl;
}

void Conference::setYear_of_foundatoin(int year_of_foundatoin1)
{
	year_of_foundatoin = year_of_foundatoin1;
}


void Conference::getYear_of_foundatoin()
{
	cout << "Year of foundatoin: " << year_of_foundatoin << endl;
}

void Conference::setFounder_of_the_conference(string founder_of_the_conference1)
{
	founder_of_the_conference = founder_of_the_conference1;
}

void Conference::getFounder_of_the_conference()
{
	cout << "Founder of the conference: " << founder_of_the_conference << endl;
}

void Conference::setPurpose(string purpose1)
{
	purpose = purpose1;
}

void Conference::getPurpose()
{
	cout << "Purpose: " << purpose << endl;
}

void Conference::setNumber_of_years_spent(int number_of_years_spent1)
{
	number_of_years_spent = number_of_years_spent1;
}

void Conference::getNumber_of_years_spent()
{
	cout << "Number of years spent: " << number_of_years_spent << endl;
}

void Conference::getInfo(Conference obj)
{
	obj.getName();
	obj.getNumber_of_participants();
	obj.getTicket_price();
	obj.getCity_hosting();
	obj.getYear_of_foundatoin();
	obj.getFounder_of_the_conference();
	obj.getPurpose();
	obj.getNumber_of_years_spent();
}

Conference::Conference() {}

Conference::Conference(string name, int number_of_participants, float ticket_price, string city_hosting, int year_of_foundatoin, string founder_of_the_conference, string purpose, int number_of_years_spent)
{
	setName(name);
	setNumber_of_participants(number_of_participants);
	setTicket_price(ticket_price);
	setCity_hosting(city_hosting);
	setYear_of_foundatoin(year_of_foundatoin);
	setFounder_of_the_conference(founder_of_the_conference);
	setPurpose(purpose);
	setNumber_of_years_spent(number_of_years_spent);
}

Conference::~Conference()
{
	cout << "End of conference conference" << endl;
}
