#include <string>
#include <sstream>
#include "person.h"
using std::string;
using std::stringstream;

Investigator::Investigator(string name,string username,string password,int age ,string id,string bday,int currentp,int solvedp,int unsolvedp)
	:Person(name,username,password,age,id,bday),currentp(currentp),solvedp(solvedp),unsolvedp(unsolvedp){

}
string Investigator::toString()const{
	stringstream ss;
	ss << Person::toString() << "Current Cases: " << currentp << " Solved Cases: " << solvedp << " Unsolved Cases: " << unsolvedp;
	return ss.str();
}
void Investigator::setCurrentp(int currentp){
	this->currentp=currentp;
}
void Investigator::setSolvedp(int solvedp){
	this->solvedp=solvedp;
}
void Investigator::setUnsolvedp(int unsolvedp){
	this->unsolvedp=unsolvedp;
}
int Investigator::getCurrentp()const{
	return currentp;
}
int Investigator::getSolvedp()const{
	return solvedp;
}
int Investigator::getUnsolvedp()const{
	return unsolvedp;
}
