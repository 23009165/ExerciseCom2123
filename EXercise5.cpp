#include <iostream>
#include <string>
using namespace std;


int main() {
	int age;
	string Names;
	string Location;
	string Attractive;
	string kind;
	string cook;
	string wellDressed;
	string choice;
	char gender;

	cout<< "What are your full names ?"<<endl;
	cin>> Names;
	cout<< "what's your age ?"<<endl;
	cin>> age;
	cout<<" place you stay ?"<<endl;
    cin>> Location;
	cout<< "Gender preference?"<<endl;
	cin>> gender;

	cout<<"the person must be attractive? Y/N"<<endl;
	cin>> Attractive;
	cout<<"The person must must be kind ? Y/N"<<endl;
	cin>> kind;
	cout<<"The person must be able to cook? Y/N"<<endl;
	cin>> cook;
	cout<<"The persons must be well dress? Y/N"<<endl;
	cin>> wellDressed;



	if( age >=18 && age <= 35){
	  if(gender == 'm'){
	  	if(Attractive == "Y" || kind == "Y" || cook == "Y" || "well dressed == Y" ){
	  		cout<< "Do you approve your match?"<<endl;
	  		cin>>choice;
	  		if( choice == "yes"){
	  			cout<<"you have found your match";
			  }
			  else if(choice == "no"){
			  	cout<<"Not your match....!wait for your match!";
		}

		  }
		  else{
		  	cout<<"not my match";
		  }

	  }
	  else if(gender == 'f'){
	  		if(Attractive == "Y" || kind == "Y" || cook == "Y" || "well dressed == Y" ){
	  		cout<< "Do you approve your match?";
	  		cin>>choice;

	  		if( choice == "yes"){
	  			cout<<"you have found your match";
			  }
			  else if(choice == "no"){
			  	cout<<"wait for your match";
			  }

		  }
		  else{
		  	cout<<"not my match";
		  }

	  }

	}
	else{
		cout<< "under age";

	}


	return 0;
}
