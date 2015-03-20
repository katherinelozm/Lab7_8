#include <string>
#include <sstream>
#include "person.h"
using std::string;
using std::stringstream;

Person::Person(string name,string username,string password,int age,string id,string bday):name(name),username(username),password(password),age(age),id(id),bday(bday){

}
string Person::toString()const{
	stringstream ss;
	ss << "Name: " << name << " Username: " << username << " Password: " << password << " Age: " << age << " ID: " << id << " Birthdate: " <<bday << " ";
	return ss.str();
} 

void Person::setName(string name){
	this->name=name;
}

void Person::setUsername(string username){
	this->username=username;
}

void Person::setPassword(string password){
	this->password=password;
}

void Person::setAge(int age){
	this->age=age;
}

void Person::setID(string id){
	this->id=id;
}

void Person::setBday(string bday){
	this->bday=bday;
}

string Person::getName() const{
	return name;
}

string Person::getUsername() const{
	return username;
}

string Person::getPassword() const{
	return password;
}

int Person::getAge() const{
	return age;
}

string Person::getID()const{
	return id;
}

string Person::getBday()const{
	return bday;
}