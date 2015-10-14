/**
 * Project Untitled
 */


#include "Doctor.h"
#include <iostream>
using namespace std;
/**
 * Doctor implementation
 */


void Doctor::Diagnose() {
    cout<<"Diagnosed\n";
}

void Doctor::Prescribe() {
    cout<<"Prescribed\n";
}

void Doctor::Attends() {
    cout<<"Attended\n";
}

int main()
{
    Doctor d1;
    d1.Attends();
    d1.Diagnose();
    d1.Prescribe();
    return 0;
}
