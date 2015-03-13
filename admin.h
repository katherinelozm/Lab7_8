#ifndef ADMIN_H
#define ADMIN_H

#include "person.h"
#include <string>
using std::string;

class Admin:public Person{
	string pass, spot;
public:
	Admin(string,string,string,int,string,string,string,string);
	virtual string toString()const=0;
	void setPass(string);
	void setSpot(string);
	string getPass()const;
	string getSpot()const;

};

#endif