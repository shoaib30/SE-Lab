/**
 * Project Untitled
 */


#ifndef _ADMIN_H
#define _ADMIN_H

class Admin {
public:
    int Name;
    int EmpID;
    int DOB;
    char Gender;

    void Registeration();

    void Admission();

    void Discharge();

    void CollectFees();

    void TakesAttendance();
};

#endif //_ADMIN_H
