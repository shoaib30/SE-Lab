/**
 * Project Untitled
 */


#ifndef _DOCTOR_H
#define _DOCTOR_H

class Doctor {
public:
    char Name[50];
    int EmpID;
    int DOB;
    char Gender;
    char Specialization[40];

    void Diagnose();

    void Prescribe();

    void Attends();
};

#endif //_DOCTOR_H
