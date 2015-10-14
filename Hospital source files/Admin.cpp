/**
 * Project Untitled
 */


#include "Admin.h"
#include <iostream>
using namespace std;
/**
 * Admin implementation
 */


void Admin::Registeration() {
    cout<<"Registered\n";
}

void Admin::Admission() {
    cout<<"Admitted\n";
}

void Admin::Discharge() {
    cout<<"Discharged\n";
}

void Admin::CollectFees() {
    cout<<"Fees Collected\n";
}

void Admin::TakesAttendance() {
    cout<<"Doctor attended";
}

int main()
{
    Admin a1;
    a1.Admission();
    a1.CollectFees();
    a1.Discharge();
    a1.Registeration();
    a1.TakesAttendance();
    return 0;
}
