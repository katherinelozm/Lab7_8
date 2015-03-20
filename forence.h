#ifndef FORENCE_H
#define FORENCE_H

#include "person.h"
#include <string>
using std::string;

class Forence:public Person{
	string firstday, schedule;
public:
	Forence(string,string,string,int,string,string,string,string);
	string toString()const;
	void setFirstday(string);
	void setSchedule(string);
	string getFirstday()const;
	string getSchedule()const;

};

#endif