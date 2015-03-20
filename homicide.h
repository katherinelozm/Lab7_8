#pragma once


#include <string>
#include <vector>

using std::string;
using std::vector;

class Homicide : public TheCase{
	vector<string> suspects;
	string mainsuspect;
	string guilty;
	string victim;
public:
	Homicide(int, vector<Investigator>, vector<Evidence>, string, string, bool, vector<string>, string, string, string);
	virtual string toString() const = 0;
	vector<string> getSuspects() const;
	string getMainSuspect() const;
	string getGuilty() const;
	string getVictim() const;
	void setSuspects(vector<string>);
	void setMainSuspect(string);
	void setGuilty(string);
	void setVictim(string);
};