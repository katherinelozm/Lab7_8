#include <string>
#include <sstream>
#include <vector>
#include "thecase.h"
#include "homicide.h"
#include "thecase.h"
#include "investigator.h"
#include "evidence.h"

using std::string;
using std::stringstream;
using std::vector;

Homicide::Homicide(int number, vector<Investigator> investigators, vector<Evidence> the_evidence, string hour, string date, bool closed, vector<string> suspects, string mainsuspect, string guilty, string victim)
	:TheCase(number, investigators, the_evidence, hour, date, closed), suspects(suspects), mainsuspect(mainsuspect), guilty(guilty), victim(victim) {
}

string Homicide::toString(){
	stringstream ss;
	ss << TheCase::toString();
	ss << " Suspects: ";
	for (int i = 0; i < suspects.size() - 1; i++){
		ss << suspects[i] << ", ";
	}
	ss << suspects[suspects.size()];
	ss << " Main Suspect: " << mainsuspect;
	ss << " Guilty: " << guilty;
	ss << " Victim: " << victim;
	return ss.str();
}

vector<string> Homicide::getSuspects() const{
	return suspects;
}

string Homicide::getMainSuspect() const{
	return mainsuspect;
}

string Homicide::getGuilty() const{
	return guilty;
}

string Homicide::getVictim() const{
	return victim;
}

void Homicide::setSuspects(vector<string> suspects){
	this->suspects = suspects;
}

void Homicide::setMainSuspect(string mainsuspect){
	this->mainsuspect = mainsuspect;
}

void Homicide::setGuilty(string guilty){
	this->guilty = guilty;
}

void Homicide::setVictim(string victim){
	this->victim = victim;
}