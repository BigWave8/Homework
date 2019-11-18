#include <iostream>
using namespace std;

class Conference
{
private:
	string name;
	int number_of_participants;
	float ticket_price;
	string city_hosting;


public:
	string purpose;
	int number_of_years_spent;

	Conference(string name, int number_of_participants, float ticket_price, string city_hosting, int year_of_foundatoin, string founder_of_the_conference, string purpose, int number_of_years_spent);
	Conference();
	~Conference();

	void setName(string name);
	void getName();
	void setNumber_of_participants(int number_of_participants);
	void getNumber_of_participants();
	void setTicket_price(float ticket_price);
	void getTicket_price();
	void setCity_hosting(string city_hosting);
	void getCity_hosting();
	void setYear_of_foundatoin(int year_of_foundatoin);
	void getYear_of_foundatoin();
	void setFounder_of_the_conference(string founder_of_the_conference);
	void getFounder_of_the_conference();
	void setPurpose(string purpose);
	void getPurpose();
	void setNumber_of_years_spent(int number_of_years_spent);
	void getNumber_of_years_spent();
	void getInfo(Conference obj);

protected:
	int year_of_foundatoin;
	string founder_of_the_conference;
};