#pragma once

#include "thecase.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class Kidnap : public TheCase{
	string vname, vplace, vreason;
	bool vrescue, vstate;
	int vrcount;

public:
	Kidnap(int, vector<Investigator>, vector<Evidence>, string, string, bool, string ,string, string, bool, bool, int);
	virtual string toString() const = 0;
	string getVName()const;
	string getVPlace()const;
	string getVReason()const;
	bool getVRescue()const;
	bool getVState()const;
	int getVRcount()const;
	void setVname(string);
	void setVPlace(string);
	void setVReason(string);
	void setVRescuse(bool);
	void setVState(bool);
	void setVRCount(int);
};