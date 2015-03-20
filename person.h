#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

class Person{
	string name, username, password, id, bday;
	int age;
public:
	Person(string,string,string,int,string,string);
	virtual string toString()const=0;
	void setName(string);
	void setUsername(string);
	void setPassword(string);
	void setAge(int);
	void setID(string);
	void setBday(string);
	string getName() const;
	string getUsername() const;
	string getPassword() const;
	int getAge() const;
	string getID()const;
	string getBday()const;
};

#endif