#include <iostream>
#include "person.h"
#include "admin.h"
#include "investigator.h"
#include "forence.h"
#include "evidence.h"
#include "thecase.h"
#include "homicide.h"

using namespace std;

int main(){
	vector<Person*> persons;
	bool logged = false;
	int logged_pos;
	int ans;
	do{
		cout << "Menu" << endl;
		cout << "1. Add Person" << endl;
		cout << "2. Delete Person" << endl;
		cout << "3. Login" << endl;
		cout << "0. Exit" << endl;
		cin >> ans;
		if (ans==1){
			
		} else if (ans==2){
			
		} else if (ans==3){
			
		}	
	} while (ans!=0);
	return 0;
}