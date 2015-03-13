#include <string>
#include <sstream>
#include "person.h"
using std::string;
using std::stringstream;

Forence::Forence(string name,string username,string password,int age,string id ,string bday,string firstday,string schedule)
	:Person(name,username,password,age,id,bday),firstday(firstday),schedule(schedule){

}
string Forence::toString()const{
	stringstream ss;
	ss << Person::toString() << "First Day: "<< firstday << " Schedule: "<<schedule;
	return ss.str();
}
void Forence::setFirstday(string firstday){
	this->firstday=firstday;
}
void Forence::setSchedule(string schedule){
	this->schedule=schedule;
}
string Forence::getFirstday()const{
	return firstday;
}
string Forence::getSchedule()const{
	return schedule;
}