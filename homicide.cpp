#include <string>
#include <sstream>
#include <vector>
#include "thecase.h"
#include "homicide.h"

using std::string;
using std::stringstream;
using std::vector;

Homicide(int number, vector<Investigator> investigators, vector<Evidence> the_evidence, string hour, string date, bool closed, vector<string> suspects, string mainsuspect, string guilty, string victim)
	:number(number), investigators(investigators), the_evidence(the_evidence), hour(hour), date(date), closed(closed), suspects(suspects), mainsuspect(mainsuspect), guilty(guilty), victim(victim) {
}

string toString() const{
	stringstream ss;
	ss << TheCase::toString();
	ss << " Suspects: ";
	for (int i = 0; i < suspects.size() - 1; i++){
		ss << suspects[i].getName() << ", ";
	}
	ss << suspects[suspects.size()].getName();
	ss << " Main Suspect: " << mainsuspect;
	ss << " Guilty: " << guilty;
	ss << " Victim: " << victim;
}

vector<string> getSuspects() const{
	return suspects;
}

string getMainSuspect() const{
	return mainsuspect;
}

string getGuilty() const{
	return guilty;
}

string getVictim() const{
	return 
}

void setSuspects(vector<string> suspects){
	this->suspects = suspects;
}

void setMainSuspect(string mainsuspect){
	this->mainsuspect = mainsuspect;
}

void setGuilty(string guilty){
	this->guilty = guilty;
}

void setVictim(string victim){
	this->victim = victim;
}