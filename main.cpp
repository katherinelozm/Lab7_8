#include <iostream>
#include "person.h"
#include "admin.h"
#include "investigator.h"
#include "forence.h"
#include "evidence.h"
#include "thecase.h"
#include "homicide.h"
#include "kidnap.h"

using namespace std;

int menu();
Person* readPerson();
TheCase* readCase(vector<Person*>, vector<Evidence>);
bool isAdmin(vector<Person*>, int);
bool isInvestigator(vector<Person*>, int);
bool isForence(vector<Person*>, int);
bool isHomicide(vector<TheCase*>, int);
bool isKidnap(vector<TheCase*>, int);
int main(){
	vector<Person*> persons;
    vector<Evidence> the_evidence;
    vector<TheCase*> cases;
    bool logged = false;
    int logged_pos;
	char ans;
	do{
		int option = menu();
		if(option==1){
			persons.push_back(readPerson());
			cout<<"Succesfully added!"<<endl;
		}else if(option==2){

        }else if(option==3){
            cases.push_back(readCase());
            cout<<"Succesfully added!"<<endl;
		}else if(option==4){
            string user, pass;
            cout << "User: ";
            cin >> user;
            cout << "Password: ";
            cin >> pass;
            for (int i = 0; i < persons.size(); i++){
                if (persons[i]->getUsername()==user && persons[i]->getPassword()==pass){
                    logged = true;
                    logged_pos = i;
                    break;
                }
            }
            while (logged){
                if (isAdmin(persons, logged_pos)){
                    cout << "Menu Admin" << endl;
                    cout << "1. View Case" << endl;
                    cout << "2. Add Case" << endl;
                    cout << "3. Delete Case" << endl;
                    int optionadmin;
                    cin>>optionadmin;
                    if(optionadmin==1){
                        cout<<"Cases:"<<endl;
                        for(int i=0;i<cases.size();i++){
                            if(isKidnap(cases,i)){
                                cout<<cases[i]->toString();
                            }
                        }
                    }else if(optionadmin==2){
                        cases.push_back(readCase(persons,cases));
                        cout<<"Succesfully added!"<<endl;
                    }else{

                    }
                } else if (isInvestigator(persons, logged_pos)){
                    cout << "Menu Investigator" << endl;
                    cout << "1. View Case" << endl;
                    cout << "2. Add Evidence" << endl;
                    cout << "3. Delete Evidence" << endl;
                    cout << "4. Delete Case" << endl;
                    int optionInv;
                    cin>>optionInv;
                    if(optionInv==1){
                        cout<<"Cases:"<<endl;
                        for(int i=0;i<persons.size();i++){
                            if(isInvestigator(persons,i)){
                                cout<<persons[i]->toString();
                            }
                        }

                    }else if(optionInv==2){

                    }else if(optionInv==3){

                    }else{

                    }
                } else if (isForence(persons, logged_pos)){
                    cout << "Menu Forence" << endl;
                    cout << "1. View Case" << endl;
                    cout << "2. Delete Case" << endl;
                    int optionFor;
                    cin>>optionFor;
                    if(optionFor==1){
                        cout<<"Cases:"<<endl;
                        for(int i=0;i<persons.size();i++){
                            if(isForence(persons,i)){
                                cout<<persons[i]->toString();
                            }
                        }
                    }
                    }else{

                    }

                }
            }
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


TheCase* readCase(vector<Person*> persons, vector<Evidence> the_evidence){
    int type;
    do{
        cout << "Type of Case:" << endl <<
                "1. Kidnap" << endl <<
                "2. Homicide" << endl;
        cin >> type;
        if(type < 1 || type > 2){
            cerr << "Error! Invalid option" << endl;
        }
    }while (type < 1 || type > 2);

    
    if (type == 1){
        vector<Investigator> inves;
        vector<Evidence>evides;
        cout<<"Kidnap Data:"<<endl;
        string hour, date, vname, vplace,vreason;
        bool vrescue, vstate, closed;
        int vrcount, number;
        bool adding = false;
        for (int i = 0; i < persons.size(); ++i)
        {
           if(isInvestigator(persons,i)){
                cout<<*persons[i]<<endl;
                cout<<"Agregar? 1/0";
                int theopt;
                cin>>theopt;
                if(theopt==1){
                    inves.push_back(*persons[i]);
                }
           }
        }
        for (int i = 0; i < the_evidence.size(); ++i)
        {
            cout<<the_evidence[i]<<endl;
            cout<<"Agregar? 1/0";
            int theopt;
            cin>>theopt;
            if(theopt==1){
                evides.push_back(the_evidence[i]);
            }
        }
        cout<<"Number: ";
        cin>>number;
        cout<<"Hour: ";
        cin>>hour;
        cout<<"Date: ";
        cin>>date;
        cout<<"Victim Name: ";
        cin>>vname;
        string<<"Victim Place: ";
        cin>>vplace;
        cout<<"Case state 1. Closed, 2. Open";
        int casest;
        cin>>casest;
        if(casest==1){
            closed=true;
        }else{
            closed=false;
        }
        cout<<"Reason: ";
        cin>>vreason;
        cout<<"Rescue 1. If sent, 2. If not sent  : ";
        int resc;
        cin>>resc;
        if(resc==1){
            vrescue=true;
        }else{
            vrescue=false;
        }
        cout<<"State 1. Alive, 2. Dead  : ";
        int statee;
        cin>>statee;
        if(statee==1){
            vstate=true;
        }else{
            vstate=false;
        }
        return new Kidnap(number,inves,evides,hour,date,closed,vname,vplace,vreason,vrescue,vstate,vrcount);

    }else{
        cout<<"Homicide Data:"<<endl;
        vector<Investigator> inves;
        vector<Evidence>evides;
        int number;
        string hour,date,mainsuspect,guilty,victim;
        bool closed;
        vector<string>suspects;
        for (int i = 0; i < persons.size(); ++i)
        {
           if(isInvestigator(persons,i)){
                cout<<*persons[i]<<endl;
                cout<<"Agregar? 1/0";
                int theopt;
                cin>>theopt;
                if(theopt==1){
                    inves.push_back(*persons[i]);
                }
           }
        }
        for (int i = 0; i < the_evidence.size(); ++i)
        {
            cout<<the_evidence[i]<<endl;
            cout<<"Agregar? 1/0";
            int theopt;
            cin>>theopt;
            if(theopt==1){
                evides.push_back(the_evidence[i]);
            }
        }
        cout<<"Number: ";
        cin>>number;
        cout<<"Hour: ";
        cin>>hour;
        cout<<"Date: ";
        cin>>date;
        cout<<"Case state 1. Closed, 2. Open";
        int casest;
        cin>>casest;
        if(casest==1){
            closed=true;
        }else{
            closed=false;
        }
        cout<<"Amount of suspects: ";
        int amount;
        cin>>amount;
        for(int i=0;i<amount;i++){
            string suspectat;
            cin>>suspectat;
            suspects.push_back(suspectat);
        }
        cout<<"Main suspect: ";
        cin>>mainsuspect;
        cout<<"Guilty :";
        cin>>guilty;
        cout<<"Victim: ";
        cin>>victim;
        return new  Homicide(number,inves,evides,hour,date,closed,suspects,mainsuspect,guilty,victim);
    }
}

int menu(){
	int option;
	cout << "Menu" << endl;
	cout << "1. Add Person" << endl;
	cout << "2. Delete Person" << endl;
    cout << "3. Add Case"
	cout << "4. Login" << endl;
	cin >> option;
	return option;
}

bool isAdmin(vector<Person*> persons, int pos){
    if (Admin* a = dynamic_cast<Admin*>(persons[pos])){
        return true;
    } else {
        return false;
    }
}

bool isInvestigator(vector<Person*> persons, int pos){
    if (Investigator* a = dynamic_cast<Investigator*>(persons[pos])){
        return true;
    } else {
        return false;
    }
}

bool isForence(vector<Person*> persons, int pos){
    if (Forence* a = dynamic_cast<Forence*>(persons[pos])){
        return true;
    } else {
        return false;
    }
}

bool isHomicide(vector<TheCase*> cases, int pos){
    if (Homicide* a = dynamic_cast<Homicide*>(cases[pos])){
        return true;
    } else {
        return false;
    }
}

bool isKidnap(vector<TheCase*> cases, int pos){
    if (Kidnap* a = dynamic_cast<Kidnap*>(cases[pos])){
        return true;
    } else {
        return false;
    }
}