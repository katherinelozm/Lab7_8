#pragma once

#include <string>

using std::string;

class Evidence{
	string name;
	string type;
	string place;
	bool fingerprint;
	bool process;
public:
	Evidence(string, string, string, bool, bool);
	string toString() const;
	string getName() const;
	string getType() const;
	string getPlace() const;
	bool getFingerprint() const;
	bool getProcess() const;
	void setName(string);
	void setType(string);
	void setPlace(string);
	void setFingerprint(bool);
	void setProcess(bool);
};