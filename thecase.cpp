#include <string>
#include <sstream>
#include <vector>
#include "thecase.h"
#include "investigator.h"
#include "evidence.h"

using std::string;
using std::stringstream;
using std::vector;

TheCase(int number, vector<Investigator> investigators, vector<Evidence> the_evidence, string hour, string date, bool closed)
	:number(number), investigators(investigators), the_evidence(the_evidence), hour(hour), date(date), closed(closed) {

}

virtual string toString() const{
	stringstream ss;
	ss << "Investigators: ";
	for (int i = 0; i < investigators.size() - 1; i++){
		ss << investigators[i].getName() << ", ";
	}
	ss << investigators[investigators.size()].getName();
	ss << " Evidence:"
	for (int i = 0; i < the_evidence.size() - 1; i++){
		ss << the_evidence[i].getName() << ", ";
	}
	ss << the_evidence[the_evidence.size()].getName();
	ss << " Hour: " << hour;
	ss << " Date: " << date;
	ss << closed ? " Case Closed " : " Case Open ";
	return ss.str();
}

int getNumber() const{
	return number;
}

vector<Investigator> getInvestigators(){
	return investigators;
}

vector<Evidence> getEvidence(){
	return evidence;
}

string getHour(){
	return hour;
}

string getDate(){
	return date;
}

bool getClosed(){
	return closed;
}

void setNumber(int number){
	this->number = number;
}

void setInvestigators(vector<Investigator> investigators){
	this->investigators = investigators;
}

void setEvidence(vector<Evidence>){
	this->the_evidence = the_evidence;
}

void setHour(string){
	this->hour = hour;
}

void setDate(string){
	this->date = date;
}

void setClosed(bool){
	this->closed = closed;
}