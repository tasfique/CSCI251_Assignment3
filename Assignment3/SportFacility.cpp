//Sportfacility
#include "SportFacility.h"
#include <iostream>
#include <set>
#include <iterator>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>
#include <queue>
using namespace std;

SportFacility::SportFacility()
{
		id = 0;
		desc = "";
		capacity = 0;
		indicator = "EMPTY";
		duration = 0;
		startTime = "";
		rentalFee = 0.0;
}

SportFacility::SportFacility(int id, string desc, int capacity, string indicator, int duration, string startTime, double rentalFee) : id(id), desc(desc), capacity(capacity), indicator(indicator), duration(duration), startTime(startTime), rentalFee(rentalFee) {}

//SportFacility(int, string, int, string, int, string, double);
void SportFacility::setId(int id)
{
    this->id = id;
}

void SportFacility::setDescription(string desc)
{
    this->desc = desc;
}

void SportFacility::setCapacity(int capacity)
{
    this->capacity = capacity;
}

void SportFacility::setIndicator(string indicator)
{
    this->indicator = indicator;
}

void SportFacility::setDuration(int duration)
{
    this->duration = duration;
}

void SportFacility::setStarttime(string startTime)
{
    this->startTime = startTime;
}

void SportFacility::setRentalFee(double rentalFee)
{
    this->rentalFee = rentalFee;
}

int SportFacility::getId() const
{
    return id;
}
string SportFacility::getDesc() const
{
    return desc;
}
int SportFacility::getCapacity() const
{
    return capacity;
}
string SportFacility::getIndicator() const
{
    return indicator;
}
int SportFacility::getDuration() const
{
    return duration;
}
string SportFacility::getStartTime() const
{
    return startTime;
}
double SportFacility::getRentalFee() const
{
    return rentalFee;
}


ostream& operator<<(ostream& os, const SportFacility& sf)
{
	os << "FACILITY INFORMATION" << endl << "FACILITY ID : " << sf.id << endl << "FACILITY DESCRIPTION : " << sf.desc << endl << "FACILITY INDICATOR : " << sf.indicator << endl << "FACILITY DURATION : " << sf.duration << " hours" << endl << "FACILITY START TIME : " << sf.startTime << endl << "FACILITY RENTAL FEE : " << sf.rentalFee << endl << endl;
	return os;
}

