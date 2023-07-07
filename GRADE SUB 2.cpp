#include <iostream>
#include<map>
using namespace std;

int main() {
   double totalcredits=0.0;
	double totalGp=0.0;
	string indexNo, program;

	map<string, double> coursename; //map saves the course name with figures as credit hours
	cout <<"GRADING SYSTEM" << endl;
	coursename ["ETHICS"] = 3.0;
	coursename ["C++"] = 3.0;
	coursename ["MATHEMATICS 2"] = 3.0;
	coursename ["WEB DESIGN"] = 3.0;
	coursename ["COMMUNICATION SKILLS 2"] = 2.0;
	coursename ["FRENCH 2"] = 2.0;
	coursename ["BASIC ELECTRONICS"] = 3.0;
	coursename ["ACADEMIC WRITING SKILLS"]=2.0;
	coursename ["APPLIED ELECTRICITY"]=3.0;
	coursename ["MICRO ECONOMICS"]=3.0;
	coursename ["ELECTRONICS 1"]=3.0;
	coursename ["BASIC ACCOUNTING"]=2.0;
	coursename ["CIRCUIT THEORY"]=3.0;
	coursename ["COMPUTER STUDIES I"]=3.0;
	coursename ["ENGINEERING DRAWING 2"]=3.0;
	coursename ["WORKSHOP TECHNOLOGY 2"]=1.0;
	coursename ["MECHANICAL ENGINEERING LAB 2"]=1.0;
	coursename ["NAUTICAL SCIENCE"]=2.0;
	coursename ["ELECTRICAL MACHINES"]=3.0;
	coursename ["ELECTRICAL ENGINEERING DRAWING"]=3.0;
	coursename ["INTRODUCTION TO MICRO ECONOMICS"]=2.0;
	coursename ["INTRODUCTION TO OCEANOGRAPHY"]=2.0;
	coursename ["SHIPBOARD OPERATIONS 2"]=2.0;
	coursename ["METEOROLOGY 2"]=2.0;
	coursename ["NAVIGATION 2"]=3.0;
	coursename ["PRINCIPLES OF MANAGEMENT"]=2.0;
	coursename ["TERRESTRIAL NAVIGATION"]=3.0;
	coursename ["MARINE ENEGINEERING SYSTEMS"]=3.0;
	coursename ["CARGO OPERATIONS 2"]=2.0;
	coursename ["MARITIME LAW"]=2.0;
	coursename ["SHIP STABILITY AND CONSTRUCTION 1"]=3.0;
	coursename ["COMPUTER STUDIES 2"]=2.0;
	coursename ["GENERAL SHIP KNOWLEDGE"]=2.0;
	coursename ["COMMUNICATION SKILLS 1"]=2.0;
	coursename ["INTRODUCTION TO MACRO ECONOMICS"]=3.0;
	coursename ["ORGANIZATIONAL BEHAVIOUR"]=2.0;
	coursename ["CARGO SCIENCE"]=4.0;
	coursename ["TRANSPORT ECONOMICS"]=3.0;
	coursename ["INTRODUCTION TO CONTRACT LAW"]=2.0;
	coursename ["INTRODUCTION TO HUMAN RESOURCE MANAGEMENT"]=2.0;
	coursename ["INTRODUCTION TO FINANCIAL ACCOUNTING"]=4.0;
	coursename ["INTERNATIONAL TRADE"]=4.0;
	coursename ["MARINE ENVIRONMENTAL STUDIES"]=2.0;
	coursename ["LAW 1"]=1.0;
	coursename ["ELEMENTS OF ECONOMICS 2"]=2.0;
	coursename ["INTRODUCTION TO MARINE ENGINEERING"]=2.0;
	coursename ["PROBABILITY AND STATISTICS"]=2.0;
	coursename ["GENERAL SHIP KNOWLEDGE 2"]=1.0;
	coursename ["CARGO HANDLING"]=2.0;
	coursename ["INFORMATION TECHNOLOGY 2"]=1.0;
	coursename ["COMPUTER LITERACY 2"]=2.0;
	coursename ["BUSINESS STATISTICS"]=3.0;
	coursename ["PRINCIPLES OF ECONOMICS"]=3.0;
	coursename ["BUSINESS COMMUNICATION"]=2.0;
	coursename ["FUNCTIONAL FRENCH 2"]=2.0;
	
	cout <<"ENTER PROGRAM: ";
            getline(cin,program);
        cout <<"ENTER INDEX NUMBER: " ;
             cin >> indexNo;
                 cin.ignore();
   
    string courses; //courses pursued that semester
    //sum of credithourS
    double marks = 100;
    cout <<"ENTER FULL COURSE NAMES, IN CAPITAL LETTERS"<<endl;
    cout <<"ENTER COURSES: (type done to finish)" <<endl;
    
    while (true) {
    	cout <<"COURSE: ";
    	getline(cin,courses);
       if (courses == "done")	 {
         	break;
 }
       if (coursename.find(courses) != coursename.end()) {
           double credits = coursename[courses];
           totalcredits += credits;
     	
        cout <<" CREDITS: " <<totalcredits<<endl;

		cout <<"ENTER SCORES: ";
		 cin >> marks;
		 cin.ignore();

	if(marks >=80&&marks<=100){
		totalGp += 4.0 * credits;
		}
    	else if(marks >=75 &&marks  <=79){
	       totalGp += 3.85 * credits;
	} 
        else if (marks >=70&&marks<=74){
        	totalGp += 3.5 * credits;
	}
    	else if (marks >=65&&marks<=69){
		    totalGp += 3.0 * credits;
	}
    	else if (marks >=60&&marks<=64){
		    totalGp += 2.5 * credits;
	}
	    else if(marks >=55&marks<=59){
	        totalGp += 2.0 * credits;
	}
        else if(marks>=50&&marks<=54){
         	totalGp += 1.5 * credits;
	}
      	else if(marks>=45&&marks<=49){
	    	totalGp += 1.0 * credits;
	}
        else if(marks>=0&&marks<=44){
        	cout <<"Failed"<<endl;
	}
	else{
		cout <<"INVALID MARKS" <<endl;
	}
}
  else {cout <<"INVALID COURSE NAME" <<endl;
       
	 }
}
  cout << "GPA IS: ";
    double gpa = totalGp / totalcredits;
    cout << gpa << endl;
    
    if(gpa >=3.6 && gpa <=4.0 ){
    	cout <<"FIRST CLASS"<<endl;
	}
	else if(gpa >= 3.0 && gpa<=3.59){
		cout <<"SECOND CLASS UPPER"<<endl;
	}
	else if (gpa >=2.5 && gpa<=2.99){
		cout <<"SECOND CLASS LOWER"<<endl;
	}
	else if(gpa >=2.0 && gpa<= 2.49){
		cout <<"THIRD CLASS"<<endl;
	}
	else if(gpa >=1.5 && gpa <=1.99){
		cout <<"PASS"<<endl;
	}
	else if(gpa >=0 && gpa<=1.49){
		cout <<"FAIL"<<endl;
	} 
	else{
		cout <<"COMEBACK NEXT YEAR";
	}
	return 0;
}
