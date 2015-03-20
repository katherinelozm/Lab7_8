#include <string>
#include <sstream>
#include "person.h"
#include "admin.h"
using std::string;
using std::stringstream;

Admin::Admin(string name, string username, string password, int age, string id, string bday,string pass,string spot):Person(name,username,password,age,id,bday),pass(pass),spot(spot){

}

string Admin::toString()const{
	stringstream ss;
	ss << Person::toString() << "Pass: " << pass << " Spot: "<< spot;
	return ss.str();
}
void Admin::setPass(string pass){
	this->pass=pass;
}
void Admin::setSpot(string spot){
	this->spot=spot;
}
string Admin::getPass()const{
	return pass;
}
string Admin::getSpot()const{
	return spot;
}