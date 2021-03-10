#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>
#include <set>
#include <iterator>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>
#include <queue>

using namespace std;

///Member Class.-----------------------------------------------
class Member
{
private:
	string name;
	int id;

public:
	Member();
	Member(string name, int id);
	void setAll(string name, int id);
	string getName();
	int getId();
	friend ostream& operator<<(ostream& os, const Member& m);
};

#endif
