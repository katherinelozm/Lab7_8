#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

class TheCase{
	int number;
	vector<Investigator> investigators;
	vector<Evidence> the_evidence;
	string hour;
	string date;
	bool closed;
public:
	TheCase(int, vector<Investigator>, vector<Evidence>, string, string, bool);
	virtual string toString() const = 0;
	int getNumber();
	vector<Investigator> getInvestigators();
	vector<Evidence> getEvidence();
	string getHour();
	string getDate();
	bool getClosed();
	void setNumber(int);
	void setInvestigators(vector<Investigator>);
	void setEvidence(vector<Evidence>);
	void setHour(string);
	void setDate(string);
	void setClosed(bool);
};