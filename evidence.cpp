#include <string>
#include <sstream>
#include "evidence.h"

using std::string;
using std::stringstream;

Evidence::Evidence(string name, string type, string place, bool fingerprint, bool process)
	:name(name), type(type), place(place), fingerprint(fingerprint), process(process) {
}

string Evidence::toString() const{
	stringstream ss;
	ss << "Name: " << name << " Type: " << type << " Place: " << place << " Fingerprint: " << fingerprint << " Process: " << process;
	return ss.str();
}

string Evidence::getName() const{
	return name;
}

string Evidence::getType() const{
	return type;
}

string Evidence::getPlace() const{
	return place;
}

bool Evidence::getFingerprint() const{
	return fingerprint;
}

bool Evidence::getProcess() const{
	return process;
}

void Evidence::setName(string name){
	this->name = name;
}

void Evidence::setType(string type){
	this->type = type;
}

void Evidence::setPlace(string place){
	this->place = place;
}

void Evidence::setFingerprint(bool fingerprint){
	this->fingerprint = fingerprint;
}

void Evidence::setProcess(bool process){
	this->process = process;
}