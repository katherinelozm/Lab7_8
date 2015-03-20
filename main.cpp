#include <iostream>
#include "person.h"
#include "admin.h"
#include "investigator.h"
#include "forence.h"
#include "evidence.h"
#include "thecase.h"
#include "homicide.h"

using namespace std;

int menu();
Person* readPerson();

int main(){
	vector<Person*> persons;
	char ans;
	do{
		int option = menu();
		if(option==1){
			persons.push_back(readPerson());
			cout<<"Succesfully added!"<<endl;
		}else if(option==2){

		}else{

		}


	}while(ans=='Y' || ans=='y');


	return 0;
}

Person* readPerson(){
    int type;
    do{
        cout << "Type of Person:" << endl <<
                "1. Admin" << endl <<
                "2. Forence" << endl <<
                "3. Investigator" << endl;
        cin >> type;
        if(type < 1 || type > 3){
            cerr << "Error! Invalid option" << endl;
        }
    }while (type < 1 || type > 3);

    
    if (type == 1){
    	string name, username,password,id,bday,spot,pass;
    	int age;
    	cout<<"Admin Data:"<<endl;
    	cout<<"Name: ";
    	cin>>name;
    	cout<<"Username: ";
    	cin>>username;
    	cout<<"Password: ";
    	cin>>password;
    	cout<<"Age: ";
    	cin>>age;
    	cout<<"ID: ";
    	cin>>id;
    	cout<<"Birth date: ";
    	cin>>bday;
    	cout<<"Pass: ";
    	cin>>pass;
    	cout<<"Spot: ";
    	cin>>spot;
    	return new Admin(name,username,password,age,id,bday,pass,spot);
    }else if(type==2){
    	string name, username,password,id,bday,firstday,schedule;
    	int age;
    	cout<<"Forence Data:"<<endl;
    	cout<<"Admin Data:"<<endl;
    	cout<<"Name: ";
    	cin>>name;
    	cout<<"Username: ";
    	cin>>username;
    	cout<<"Password: ";
    	cin>>password;
    	cout<<"Age: ";
    	cin>>age;
    	cout<<"ID: ";
    	cin>>id;
    	cout<<"Birth date: ";
    	cin>>bday;
    	cout<<"First Day: ";
    	cin>>firstday;
    	cout<<"Schedule: ";
    	cin>>schedule;
    	return new Forence(name,username,password,age,id,bday,firstday,schedule);
    }else{
    	string name, username,password,id,bday,firstday,schedule;
    	int age,currentp,solvedp,unsolvedp;
    	cout<<"Investigator Data:"<<endl;
    	cout<<"Admin Data:"<<endl;
    	cout<<"Name: ";
    	cin>>name;
    	cout<<"Username: ";
    	cin>>username;
    	cout<<"Password: ";
    	cin>>password;
    	cout<<"Age: ";
    	cin>>age;
    	cout<<"ID: ";
    	cin>>id;
    	cout<<"Birth date: ";
    	cin>>bday;
    	cout<<"Current Case: ";
    	cin>>currentp;
    	cout<<"Solved Cases: ";
    	cin>>solvedp;
    	cout<<"Unsolved Cases: ";
    	cin>>unsolvedp;

    	return new Investigator(name,username,password,age,id,bday,currentp,solvedp,unsolvedp);
    }
}

int menu(){
	int option;
	cout << "Menu" << endl;
	cout << "1. Add Person" << endl;
	cout << "2. Delete Person" << endl;
	cout << "3. Login" << endl;
	cin >> option;
	return option;
}