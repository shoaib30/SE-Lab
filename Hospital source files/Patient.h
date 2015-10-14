/**
 * Project Untitled
 */


#ifndef _PATIENT_H
#define _PATIENT_H

class Patient {
public:
    char Name[20];
    int DOB;
    char Gender;
    char Disease[50];

    void Admission();

    void Diagnosis();

    void Register();

    void Discharge();
};

#endif //_PATIENT_H
