#ifndef INVESTIGATOR_H
#define INVESTIGATOR_H

#include "person.h"
#include <string>
using std::string;

class Investigator:public Person{
	int currentp, solvedp, unsolvedp;
public:
	Investigator(string,string,string,int,string,string,int,int,int);
	virtual string toString()const=0;
	void setCurrentp(int);
	void setSolvedp(int);
	void setUnsolvedp(int);
	int getCurrentp()const;
	int getSolvedp()const;
	int getUnsolvedp()const;

};

#endif