#ifndef SPORTFACILITY_H
#define SPORTFACILITY_H
#include <iostream>
#include <set>
#include <iterator>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>
#include <queue>

using namespace std;

class SportFacility
{

friend ostream& operator<<(ostream& os, const SportFacility& sf);

private:
	int id;
	string desc;
	int capacity;
	string indicator;
	int duration;
	string startTime;
	double rentalFee;

public:
    //default constructor
	SportFacility();

    //non-default constructor
	SportFacility(int, string, int, string, int, string, double);

	//setters
	void setId(int id);
    void setDescription(string desc);
    void setCapacity(int capacity);
    void setIndicator(string indicator);
    void setDuration(int duration);
    void setStarttime(string startTime);
    void setRentalFee(double rentalFee);

    //getters
    int getId() const;
    string getDesc() const;
    int getCapacity() const;
    string getIndicator() const;
    int getDuration() const;
    string getStartTime() const;
    double getRentalFee() const;

	/*void setAll(int id, string desc, int capacity, string indicator, int duration, string startTime, double rentalFee)
	{
		this->id = id;
		this->desc = desc;
		this->capacity = capacity;
		this->indicator = indicator;
		this->duration = duration;
		this->startTime = startTime;
		this->rentalFee = rentalFee;
	}*/



	bool operator<(const SportFacility& sf) const
	{
		if (desc.compare(sf.desc) < 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};

#endif
