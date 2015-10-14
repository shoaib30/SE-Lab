/**
 * Project Untitled
 */


#include "Patient.h"
#include <iostream>
using namespace std;
/**
 * Patient implementation
 */


void Patient::Admission() {
    cout<<"Admitted\n";
}

void Patient::Diagnosis() {
    cout<<"Diagnosed\n";
}

void Patient::Register() {
    cout<<"Registered\n";
}

void Patient::Discharge() {
    cout<<"Discharged\n";
}

int main()
{
    Patient p1;
    p1.Admission();
    p1.Diagnosis();
    p1.Discharge();
    p1.Register();
    return 0;
}
