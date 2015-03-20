#include "thecase.h"
#include "kidnap.h"
#include <sstream>
#include <string>

using std::string;
using std::stringstream;


Kidnap::Kidnap(int, vector<Investigator>, vector<Evidence>, string, string, bool, string ,string, string, bool, bool, int)
	:TheCase(number,investigators,the_evidence,hour,date,closed),vname(vname),vplace(vplace),vreason(vreason),vrescue(vrescue),vstate(vstate),vrcount(vrcount){

}
string Kidnap::toString() const{
	stringstream ss;

	ss << " ";
	return ss.str();

}
string Kidnap::getVName()const{
	return vname;
}
string Kidnap::getVPlace()const{
	return vplace;

}
string Kidnap::getVReason()const{
	return vreason;

}
bool Kidnap::getVRescue()const{
	return vrescue;
}
bool Kidnap::getVState()const{
	return vstate;

}
int Kidnap::getVRcount()const{
	return vrcount;

}
void Kidnap::setVname(string vname){
	this->vname = vname;

}
void Kidnap::setVPlace(string vplace){
	this->vplace=vplace;

}
void Kidnap::setVReason(string vreason){
	this->vreason=vreason;

}
void Kidnap::setVRescuse(bool vrescue){
	this->vrescue=vrescue;

}
void Kidnap::setVState(bool vstate){
	this->vstate=vstate;
}
void Kidnap::setVRCount(int vrcount){
	this->vrcount=vrcount;

}