//Member Class
#include "Member.h"
#include <iostream>
#include <set>
#include <iterator>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>
#include <queue>

using namespace std;

Member::Member()
	{
		name = "";
		id = 0;
	}

Member::Member(string name, int id) : name(name), id(id) {}

void Member::setAll(string name, int id)
	{
		this->name = name;
		this->id = id;
	}
	string Member::getName()
	{
		return name;
	}
	int Member::getId()
	{
		return id;
	}

ostream& operator<<(ostream& os, const Member& m)
{
	os << "MEMBER INFORMATION" << endl << "MEMBER NAME : " << m.name << endl << "MEMBER ID : " << m.id << endl << endl;
	return os;
}
