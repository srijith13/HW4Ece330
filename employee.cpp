
#include <iostream>
#include <iomanip>
#include <string>
#include "employee.h"

using namespace std;

// constructor

Employee::Employee(long id, const string &last, const string &first, const string &initial,
		   int dept)
{
  myIdNum = id;
  myLastName = last;
  myFirstName = first;
  myMiddleInitial = initial;
  myDeptCode = dept;
}

// Accessor function defintions

void Employee::setIdNum (const long  id)
{
  myIdNum = id;
}

long Employee:: getIdNum () const				// get id number
{
  return myIdNum;
}


void Employee:: setLastName (const string &last)	// set last name
{
  myLastName = last;
}


string Employee:: getLastName () const			// return last name
{
  return myLastName;
}
 
 
void Employee:: setFirstName (const string &first)	// set first name
{
  myFirstName = first;
}


string Employee:: getFirstName () const			// return first name
{
  return myFirstName;
}


void Employee:: setMiddleInitial (const string &last)	// set middle initial
{
  myMiddleInitial = last;
}


string Employee:: getMiddleInitial () const		// return middle initial
{
  return myMiddleInitial;
}


void Employee::setDeptCode (const int dc)		// set department code
{
  myDeptCode = dc;
}


int Employee:: getDeptCode () const				// get department code
{
  return myDeptCode;
}

void Employee:: printEmployee ()			// print Employee information
{
  cout << endl;
  cout << "Employee ID Number: " << getIdNum() << endl;
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
}


SalariedEmployee::SalariedEmployee(long wd, long sc)
{
  workingdays = wd;
  salarycap = sc;
}

// SalariedEmployee function defintions

void SalariedEmployee:: setWorkDays(const long  wd)
{
    workingdays = wd;
}

long SalariedEmployee:: getWorkDays() const                               // get working days
{
  return   workingdays;
}

void SalariedEmployee:: setSalaryCap(const long  sc)
{
   salarycap = sc;
}

long SalariedEmployee:: getSalaryCap() const                               // get per day salary
{
  return   salarycap;
}

long SalariedEmployee:: salarytotal()
{
  long TS = 0;
  TS = workingdays * salarycap;  
}

void SalariedEmployee:: printSalariedEmployee ()                        // print salaried Employee information
{
  cout << endl;
  cout << "Employee Number of working days: " << getWorkDays() << endl;
  cout << "Employe salary per day: " << getSalaryCap () << endl;
  cout << "Employe  monthly salary: " << salarytotal() << endl;

}





HourlyEmployee::HourlyEmployee(long wh, long sc, long ot)
{
  workinghours = wh;
  salarycap = sc;
  overtime = ot;
}

// SalariedEmployee function defintions

void HourlyEmployee:: setWorkHours(const long  wh)
{
    workinghours = wh;
}

long HourlyEmployee:: getWorkHours() const                               // get working days
{
  return   workinghours;
}

void HourlyEmployee:: setSalaryCap(const long  sc)
{
   salarycap = sc;
}

long HourlyEmployee:: getSalaryCap() const                               // get per day salary
{
  return   salarycap;
}

void HourlyEmployee:: setOverTime(const long  ot)
{
   overtime = ot;
}

long HourlyEmployee:: getOverTime() const                               // get overtime hours
{
  return   overtime;
}

long HourlyEmployee:: hsalarytotal()
{
  long TS = 0;
  TS = (workinghours * salarycap) + (overtime * salarycap * 1.5);
}

void HourlyEmployee:: printHourlyEmployee ()                        // print Hourly Employee information
{
  cout << endl;
  cout << "Employee Number of working hours: " << getWorkHours() << endl;
  cout << "Employe salary per day: " << getSalaryCap () << endl;
  cout << "Employe overtime hours: " << getOverTime () << endl;
  cout << "Employe  total salary: " << hsalarytotal() << endl;

}

