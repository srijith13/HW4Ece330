#ifndef EMPLOYEE
#define EMPLOYEE
#include <string>

using namespace std;

class Employee
{
public:
  Employee(long = 0, const string & ="" , const string & ="", const string & = "", int =0);	// constructor
  
  void setIdNum (const long );			// set id number
  long getIdNum () const;				// get id number
  void setLastName (const string &);	// set last name
  string getLastName () const;			// return last name
  void setFirstName (const string &);	// set first name
  string getFirstName () const;			// return first name
  void setMiddleInitial (const string &);	// set middle initial
  string getMiddleInitial () const;		// return set middle initial
  void setDeptCode(const int);			// set department code
  int getDeptCode () const;				// get department code
  void printEmployee ();				// print Employee information
 
  
  
private:
  long  myIdNum;			//Employee id number
  string myLastName;		//Employee last name
  string myFirstName;		//Employee first name
  string myMiddleInitial;	//Employee middle intial
  int myDeptCode;			//Department code
};

class SalariedEmployee
{
private:
   long workingdays;   // monthly working days for salary
   long salarycap;     // the salary range of the employee per day

public:
   SalariedEmployee(long = 0, long = 0); 
   void setWorkDays (const long );              
   long getWorkDays () const;                               
   void setSalaryCap (const long );                  
   long getSalaryCap () const;                               
   long salarytotal();
   void printSalariedEmployee ();  
};

class HourlyEmployee
{
private:
   long workinghours;   // daily  working hours 
   long salarycap;   // the salary range of the employee per hour
   long overtime;    // overtime no of hours

public:
   HourlyEmployee(long = 0, long = 0, long = 0);
   void setWorkHours (const long );             
   long getWorkHours () const;                        
   void setSalaryCap (const long );                  
   long getSalaryCap () const;                               
   void setOverTime (const long );                  
   long getOverTime () const;                               
   long hsalarytotal();
   void printHourlyEmployee ();
};




#endif
