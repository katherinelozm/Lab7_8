#include <string>
#include <sstream>
#include <vector>
#include "thecase.h"
#include "investigator.h"
#include "evidence.h"

using std::string;
using std::stringstream;
using std::vector;

TheCase::TheCase(int number, vector<Investigator> investigators, vector<Evidence> the_evidence, string hour, string date, bool closed)
	:number(number), investigators(investigators), the_evidence(the_evidence), hour(hour), date(date), closed(closed) {

}

string TheCase::toString() const{
	stringstream ss;
	ss << "Investigators: ";
	for (int i = 0; i < investigators.size() - 1; i++){
		ss << investigators[i].getName() << ", ";
	}
	ss << investigators[investigators.size()].getName();
	ss << " Evidence:";
	for (int i = 0; i < the_evidence.size() - 1; i++){
		ss << the_evidence[i].getName() << ", ";
	}
	ss << the_evidence[the_evidence.size()].getName();
	ss << " Hour: " << hour;
	ss << " Date: " << date;
	ss << (closed ? " Case Closed " : " Case Open ");
	return ss.str();
}

int TheCase::getNumber(){
	return number;
}

vector<Investigator> TheCase::getInvestigators(){
	return investigators;
}

vector<Evidence> TheCase::getEvidence(){
	return the_evidence;
}

string TheCase::getHour(){
	return hour;
}

string TheCase::getDate(){
	return date;
}

bool TheCase::getClosed(){
	return closed;
}

void TheCase::setNumber(int number){
	this->number = number;
}

void TheCase::setInvestigators(vector<Investigator> investigators){
	this->investigators = investigators;
}

void TheCase::setEvidence(vector<Evidence> the_evidence){
	this->the_evidence = the_evidence;
}

void TheCase::setHour(string hour){
	this->hour = hour;
}

void TheCase::setDate(string date){
	this->date = date;
}

void TheCase::setClosed(bool closed){
	this->closed = closed;
}