#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

ofstream fout("CSE_Department.txt");
ofstream fout2("EEE_Department.txt");
ofstream fout3("ME_Department.txt");
ofstream fout4("BME_Department.txt");
ofstream fout5("ECE_Department.txt");
ofstream fout6("CE_Department.txt");

ofstream fout7("Professor.txt");
ofstream fout8("Lecturer.txt");

class Student
{
protected:
    int studentID;
    string name;
    string email;

public:
    Student() {}

    Student(int studentID, string name, string email)
    {
        this->studentID = studentID;
        this->name = name;
        this->email = email;
    }

    void getEmail()
    {
        fout << "email: " << email << endl;
    }

    void getStudentID()
    {
        fout << "student_id: " << studentID << endl;
    }

    void getName()
    {
        fout << "name: " << name << endl;
    }

    void print()
    {
        cout << "student_id: " << studentID << endl;
        cout << "name: " << name << endl;
        cout << "email: " << email << endl;
    }

    virtual float get_CGPA() = 0;
    virtual void display() = 0;
    virtual int getRoll() = 0;
    virtual void getSection() = 0;
    virtual void getRoomNo() = 0;
    virtual void display_console() = 0;
};

class CSE : virtual public Student
{
protected:
    int cse_roll;
    char cse_section;
    int cse_room_no;

    string cse_course1_code;
    string cse_course1_title;
    float cse_course1_credit;
    float cse_course1_grade;

    string cse_course2_code;
    string cse_course2_title;
    float cse_course2_credit;
    float cse_course2_grade;

public:
    CSE() {}

    CSE(int studentID, string name, string email, int cse_roll, char cse_section, int cse_room_no,
        string cse_course1_code, string cse_course1_title, float cse_course1_credit, float cse_course1_grade,
        string cse_course2_code, string cse_course2_title, float cse_course2_credit, float cse_course2_grade)
        : Student(studentID, name, email)
    {
        this->cse_roll = cse_roll;
        this->cse_section = cse_section;
        this->cse_room_no = cse_room_no;

        this->cse_course1_code = cse_course1_code;
        this->cse_course1_title = cse_course1_title;
        this->cse_course1_credit = cse_course1_credit;
        this->cse_course1_grade = cse_course1_grade;

        this->cse_course2_code = cse_course2_code;
        this->cse_course2_title = cse_course2_title;
        this->cse_course2_credit = cse_course2_credit;
        this->cse_course2_grade = cse_course2_grade;
    }

    void get_cse_course1_info()
    {
        fout << "code1: " << cse_course1_code << endl;
        fout << "title1: " << cse_course1_title << endl;
        fout << "credit1: " << cse_course1_credit << endl;
        fout << "grade1: " << cse_course1_grade << endl;
    }

    void get_cse_course2_info()
    {
        fout << "code2: " << cse_course2_code << endl;
        fout << "title2: " << cse_course2_title << endl;
        fout << "credit2: " << cse_course2_credit << endl;
        fout << "grade2: " << cse_course2_grade << endl;
    }
    int getRoll()
    {
        return cse_roll;
    }

    void getSection()
    {
        fout << "section: " << cse_section << endl;
    }

    void getRoomNo()
    {
        fout << "room_no: " << cse_room_no << endl;
    }

    float get_CGPA()
    {
        float ans;
        ans = (cse_course1_grade * cse_course1_credit + cse_course2_grade * cse_course2_credit) / (cse_course1_credit + cse_course2_credit);
        return ans;
    }
    void display()
    {

        getName();
        getStudentID();
        getEmail();

        fout << getRoll() << endl;
        getSection();
        getRoomNo();

        get_cse_course1_info();
        get_cse_course2_info();

        fout << get_CGPA() << endl;

        fout << endl;
    }
    void display_console()
    {
        print();

        cout << "roll: " << cse_roll << endl;
        cout << "section: " << cse_section << endl;
        cout << "room_no: " << cse_room_no << endl;
        cout << "CGPA :" << get_CGPA() << endl;
    }
};

class EEE : virtual public Student
{
protected:
    int eee_roll;
    char eee_section;
    int eee_room_no;

    string eee_course1_code;
    string eee_course1_title;
    float eee_course1_credit;
    float eee_course1_grade;

    string eee_course2_code;
    string eee_course2_title;
    float eee_course2_credit;
    float eee_course2_grade;

public:
    EEE() {}

    EEE(int studentID, string name, string email, int eee_roll, char eee_section, int eee_room_no,
        string eee_course1_code, string eee_course1_title, float eee_course1_credit, float eee_course1_grade,
        string eee_course2_code, string eee_course2_title, float eee_course2_credit, float eee_course2_grade)
        : Student(studentID, name, email)

    {
        this->eee_roll = eee_roll;
        this->eee_section = eee_section;
        this->eee_room_no = eee_room_no;

        this->eee_course1_code = eee_course1_code;
        this->eee_course1_title = eee_course1_title;
        this->eee_course1_credit = eee_course1_credit;
        this->eee_course1_grade = eee_course1_grade;

        this->eee_course2_code = eee_course2_code;
        this->eee_course2_title = eee_course2_title;
        this->eee_course2_credit = eee_course2_credit;
        this->eee_course2_grade = eee_course2_grade;
    }

    int getRoll()
    {
        return eee_roll;
    }

    void getSection()
    {
        fout2 << "section: " << eee_section << endl;
    }

    void getRoomNo()
    {
        fout2 << "room_no: " << eee_room_no << endl;
    }

    void get_eee_course1_info()
    {
        fout2 << "code1: " << eee_course1_code << endl;
        fout2 << "title1: " << eee_course1_title << endl;
        fout2 << "credit1: " << eee_course1_credit << endl;
        fout2 << "grade1: " << eee_course1_grade << endl;
    }

    void get_eee_course2_info()
    {
        fout2 << "code2: " << eee_course2_code << endl;
        fout2 << "title2: " << eee_course2_title << endl;
        fout2 << "credit2: " << eee_course2_credit << endl;
        fout2 << "grade2: " << eee_course2_grade << endl;
    }

    float get_CGPA()
    {
        float ans;

        ans = (eee_course1_grade * eee_course1_credit + eee_course2_grade * eee_course2_credit) / (eee_course1_credit + eee_course2_credit);
        return ans;
    }

    void display()
    {

        getName();
        getStudentID();
        getEmail();

        fout2 << "roll :" << getRoll() << endl;
        getSection();
        getRoomNo();

        get_eee_course1_info();
        get_eee_course2_info();

        fout2 << get_CGPA() << endl;

        fout2 << endl;
    }

    void display_console()
    {
        print();

        cout << "roll: " << eee_roll << endl;
        cout << "section: " << eee_section << endl;
        cout << "room_no: " << eee_room_no << endl;
    }
};

class ME : virtual public Student
{
protected:
    int me_roll;
    char me_section;
    int me_room_no;

    string me_course1_code;
    string me_course1_title;
    float me_course1_credit;
    float me_course1_grade;

    string me_course2_code;
    string me_course2_title;
    float me_course2_credit;
    float me_course2_grade;

public:
    ME() {}

    ME(int studentID, string name, string email, int me_roll, char me_section, int me_room_no,
       string me_course1_code, string me_course1_title, float me_course1_credit, float me_course1_grade,
       string me_course2_code, string me_course2_title, float me_course2_credit, float me_course2_grade)
        : Student(studentID, name, email)
    {
        this->me_roll = me_roll;
        this->me_section = me_section;
        this->me_room_no = me_room_no;

        this->me_course1_code = me_course1_code;
        this->me_course1_title = me_course1_title;
        this->me_course1_credit = me_course1_credit;
        this->me_course1_grade = me_course1_grade;

        this->me_course2_code = me_course2_code;
        this->me_course2_title = me_course2_title;
        this->me_course2_credit = me_course2_credit;
        this->me_course2_grade = me_course2_grade;
    }

    int getRoll()
    {
        return me_roll;
    }

    void getSection()
    {
        fout3 << "section: " << me_section << endl;
    }

    void getRoomNo()
    {
        fout3 << "room_no: " << me_room_no << endl;
    }

    void get_me_course1_info()
    {
        fout3 << "code1: " << me_course1_code << endl;
        fout3 << "title1: " << me_course1_title << endl;
        fout3 << "credit1: " << me_course1_credit << endl;
        fout3 << "grade1: " << me_course1_grade << endl;
    }

    void get_me_course2_info()
    {
        fout3 << "code2: " << me_course2_code << endl;
        fout3 << "title2: " << me_course2_title << endl;
        fout3 << "credit2: " << me_course2_credit << endl;
        fout3 << "grade2: " << me_course2_grade << endl;
    }

    float get_CGPA()
    {
        float ans;

        ans = (me_course1_grade * me_course1_credit + me_course2_grade * me_course2_credit) / (me_course1_credit + me_course2_credit);
        return ans;
    }

    void display()
    {
        getName();
        getStudentID();
        getEmail();

        fout3 << "roll :" << getRoll() << endl;
        getSection();
        getRoomNo();

        get_me_course1_info();
        get_me_course2_info();

        fout3 << get_CGPA() << endl;

        fout3 << endl;
    }

    void display_console()
    {
        print();

        cout << "roll: " << me_roll << endl;
        cout << "section: " << me_section << endl;
        cout << "room_no: " << me_room_no << endl;
    }
};

class BME : virtual public Student
{
protected:
    int bme_roll;
    char bme_section;
    int bme_room_no;

    string bme_course1_code;
    string bme_course1_title;
    float bme_course1_credit;
    float bme_course1_grade;

    string bme_course2_code;
    string bme_course2_title;
    float bme_course2_credit;
    float bme_course2_grade;

public:
    BME() {}

    BME(int studentID, string name, string email, int bme_roll, char bme_section, int bme_room_no,
        string bme_course1_code, string bme_course1_title, float bme_course1_credit, float bme_course1_grade,
        string bme_course2_code, string bme_course2_title, float bme_course2_credit, float bme_course2_grade)
        : Student(studentID, name, email)
    {
        this->bme_roll = bme_roll;
        this->bme_section = bme_section;
        this->bme_room_no = bme_room_no;

        this->bme_course1_code = bme_course1_code;
        this->bme_course1_title = bme_course1_title;
        this->bme_course1_credit = bme_course1_credit;
        this->bme_course1_grade = bme_course1_grade;

        this->bme_course2_code = bme_course2_code;
        this->bme_course2_title = bme_course2_title;
        this->bme_course2_credit = bme_course2_credit;
        this->bme_course2_grade = bme_course2_grade;
    }

    void get_bme_course1_info()
    {
        fout4 << "code1: " << bme_course1_code << endl;
        fout4 << "title1: " << bme_course1_title << endl;
        fout4 << "credit1: " << bme_course1_credit << endl;
        fout4 << "grade1: " << bme_course1_grade << endl;
    }

    void get_bme_course2_info()
    {
        fout4 << "code2: " << bme_course2_code << endl;
        fout4 << "title2: " << bme_course2_title << endl;
        fout4 << "credit2: " << bme_course2_credit << endl;
        fout4 << "grade2: " << bme_course2_grade << endl;
    }

    int getRoll()
    {
        return bme_roll;
    }

    void getSection()
    {
        fout4 << "section: " << bme_section << endl;
    }

    void getRoomNo()
    {
        fout4 << "room_no: " << bme_room_no << endl;
    }

    float get_CGPA()
    {
        float ans;

        ans = (bme_course1_grade * bme_course1_credit + bme_course2_grade * bme_course2_credit) / (bme_course1_credit + bme_course2_credit);
        return ans;
    }

    void display()
    {
        getName();
        getStudentID();
        getEmail();

        fout4 << "roll :" << getRoll() << endl;
        getSection();
        getRoomNo();

        get_bme_course1_info();
        get_bme_course2_info();

        fout4 << get_CGPA() << endl;

        fout4 << endl;
    }

    void display_console()
    {
        print();

        cout << "roll: " << bme_roll << endl;
        cout << "section: " << bme_section << endl;
        cout << "room_no: " << bme_room_no << endl;
    }
};

class ECE : virtual public Student
{
protected:
    int ece_roll;
    char ece_section;
    int ece_room_no;

    string ece_course1_code;
    string ece_course1_title;
    float ece_course1_credit;
    float ece_course1_grade;

    string ece_course2_code;
    string ece_course2_title;
    float ece_course2_credit;
    float ece_course2_grade;

public:
    ECE() {}

    ECE(int studentID, string name, string email, int ece_roll, char ece_section, int ece_room_no,
        string ece_course1_code, string ece_course1_title, float ece_course1_credit, float ece_course1_grade,
        string ece_course2_code, string ece_course2_title, float ece_course2_credit, float ece_course2_grade)
        : Student(studentID, name, email)
    {
        this->ece_roll = ece_roll;
        this->ece_section = ece_section;
        this->ece_room_no = ece_room_no;

        this->ece_course1_code = ece_course1_code;
        this->ece_course1_title = ece_course1_title;
        this->ece_course1_credit = ece_course1_credit;
        this->ece_course1_grade = ece_course1_grade;

        this->ece_course2_code = ece_course2_code;
        this->ece_course2_title = ece_course2_title;
        this->ece_course2_credit = ece_course2_credit;
        this->ece_course2_grade = ece_course2_grade;
    }

    void get_ece_course1_info()
    {
        fout5 << "code1: " << ece_course1_code << endl;
        fout5 << "title1: " << ece_course1_title << endl;
        fout5 << "credit1: " << ece_course1_credit << endl;
        fout5 << "grade1: " << ece_course1_grade << endl;
    }

    void get_ece_course2_info()
    {
        fout5 << "code2: " << ece_course2_code << endl;
        fout5 << "title2: " << ece_course2_title << endl;
        fout5 << "credit2: " << ece_course2_credit << endl;
        fout5 << "grade2: " << ece_course2_grade << endl;
    }

    int getRoll()
    {
        // fout5 << "roll: " << ece_roll << endl;
        return ece_roll;
    }

    void getSection()
    {
        fout5 << "section: " << ece_section << endl;
    }

    void getRoomNo()
    {
        fout5 << "room_no: " << ece_room_no << endl;
    }

    float get_CGPA()
    {
        float ans;
        ans = (ece_course1_grade * ece_course1_credit + ece_course2_grade * ece_course2_credit) / (ece_course1_credit + ece_course2_credit);
        // fout5 << "CGPA: " << ans << endl;
        return ans;
    }

    void display()
    {
        getName();
        getStudentID();
        getEmail();

        fout5 << "roll :" << getRoll() << endl;
        getSection();
        getRoomNo();

        get_ece_course1_info();
        get_ece_course2_info();

        fout5 << get_CGPA() << endl;

        fout5 << endl;
    }

    void display_console()
    {
        print();

        cout << "roll: " << ece_roll << endl;
        cout << "section: " << ece_section << endl;
        cout << "room_no: " << ece_room_no << endl;
    }
};

class CE : virtual public Student
{
protected:
    int ce_roll;
    char ce_section;
    int ce_room_no;

    string ce_course1_code;
    string ce_course1_title;
    float ce_course1_credit;
    float ce_course1_grade;

    string ce_course2_code;
    string ce_course2_title;
    float ce_course2_credit;
    float ce_course2_grade;

public:
    CE() {}

    CE(int studentID, string name, string email, int ce_roll, char ce_section, int ce_room_no,
       string ce_course1_code, string ce_course1_title, float ce_course1_credit, float ce_course1_grade,
       string ce_course2_code, string ce_course2_title, float ce_course2_credit, float ce_course2_grade)
        : Student(studentID, name, email)
    {
        this->ce_roll = ce_roll;
        this->ce_section = ce_section;
        this->ce_room_no = ce_room_no;

        this->ce_course1_code = ce_course1_code;
        this->ce_course1_title = ce_course1_title;
        this->ce_course1_credit = ce_course1_credit;
        this->ce_course1_grade = ce_course1_grade;

        this->ce_course2_code = ce_course2_code;
        this->ce_course2_title = ce_course2_title;
        this->ce_course2_credit = ce_course2_credit;
        this->ce_course2_grade = ce_course2_grade;
    }

    void get_ce_course1_info()
    {
        fout6 << "code1: " << ce_course1_code << endl;
        fout6 << "title1: " << ce_course1_title << endl;
        fout6 << "credit1: " << ce_course1_credit << endl;
        fout6 << "grade1: " << ce_course1_grade << endl;
    }

    void get_ce_course2_info()
    {
        fout6 << "code2: " << ce_course2_code << endl;
        fout6 << "title2: " << ce_course2_title << endl;
        fout6 << "credit2: " << ce_course2_credit << endl;
        fout6 << "grade2: " << ce_course2_grade << endl;
    }

    int getRoll()
    {
        // fout6 << "roll: " << ce_roll << endl;
        return ce_roll;
    }

    void getSection()
    {
        fout6 << "section: " << ce_section << endl;
    }

    void getRoomNo()
    {
        fout6 << "room_no: " << ce_room_no << endl;
    }

    float get_CGPA()
    {
        float ans;
        ans = (ce_course1_grade * ce_course1_credit + ce_course2_grade * ce_course2_credit) / (ce_course1_credit + ce_course2_credit);
        // fout6 << "CGPA: " << ans << endl;
        return ans;
    }

    void display()
    {
        getName();
        getStudentID();
        getEmail();

        fout6 << getRoll() << endl;
        getSection();
        getRoomNo();

        get_ce_course1_info();
        get_ce_course2_info();

        fout6 << get_CGPA() << endl;

        fout6 << endl;
    }

    void display_console()
    {
        print();

        cout << "roll: " << ce_roll << endl;
        cout << "section: " << ce_section << endl;
        cout << "room_no: " << ce_room_no << endl;
    }
};

void displayCSEDeptStudents()
{
    // Open and read the CSE Department file here

    ifstream cseFile("CSE_Department.txt");

    if (!cseFile.is_open())
    {
        cerr << "Failed to open CSE Department file." << endl;
        return;
    }

    string line;

    while (getline(cseFile, line))
    {
        cout << line << endl;
    }

    cseFile.close();
}

void displayEEEDeptStudents()
{
    // Open and read the EEE Department file here

    ifstream eeeFile("EEE_Department.txt");

    if (!eeeFile.is_open())
    {
        cerr << "Failed to open EEE Department file." << endl;
        return;
    }

    string line;

    while (getline(eeeFile, line))
    {
        cout << line << endl;
    }

    eeeFile.close();
}

void displayMEDeptStudents()
{
    // Open and read the ME Department file here

    ifstream meFile("ME_Department.txt");

    if (!meFile.is_open())
    {
        cerr << "Failed to open ME Department file." << endl;
        return;
    }

    string line;

    while (getline(meFile, line))
    {
        cout << line << endl;
    }

    meFile.close();
}

void displayBMEDeptStudents()
{

    // Open and read the BME Department file here

    ifstream bmeFile("BME_Department.txt");

    if (!bmeFile.is_open())
    {
        cerr << "Failed to open BME Department file." << endl;
        return;
    }

    string line;

    while (getline(bmeFile, line))
    {
        cout << line << endl;
    }

    bmeFile.close();
}

void displayECEDeptStudents()
{

    // Open and read the ECE Department file here

    ifstream eceFile("ECE_Department.txt");

    if (!eceFile.is_open())
    {
        cerr << "Failed to open ECE Department file." << endl;
        return;
    }

    string line;

    while (getline(eceFile, line))
    {
        cout << line << endl;
    }

    eceFile.close();
}

void displayCEDeptStudents()
{

    // Open and read the CE Department file here

    ifstream ceFile("CE_Department.txt");

    if (!ceFile.is_open())
    {
        cerr << "Failed to open CE Department file." << endl;
        return;
    }

    string line;

    while (getline(ceFile, line))
    {
        cout << line << endl;
    }

    ceFile.close();
}

class Teacher
{
protected:
    int id;
    string name;

public:
    Teacher() {}
    Teacher(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
 
    friend ostream &operator<<(ostream &os, const Teacher &teacher);
};

ostream &operator<<(ostream &os, const Teacher &teacher)
{
    os << "ID: " << teacher.id << ", Name: " << teacher.name;
    return os;
}

class Professor : public Teacher
{
protected:
    string department;
    float base_salary;
    float research_grant;
    int citation;

public:
    Professor() {}

    Professor(int id, string name, string department, float base_salary, float research_grant, int citation)
        : Teacher(id, name), department(department), base_salary(base_salary), research_grant(research_grant), citation(citation) {}

    friend float calc_prof_salary(const Professor &P);

    friend ostream &operator<<(ostream &os, const Professor &professor);

    void show_prof()
    {
        fout7 << "ID: " << id << endl;
        fout7 << "Name: " << name << endl;
        fout7 << "Department: " << department << endl;
        fout7 << "Base Salary: " << base_salary << endl;
        fout7 << "Research Grant: " << research_grant << endl;
        fout7 << "Citation: " << citation << endl;
    }
};

ostream &operator<<(ostream &os, const Professor &professor)
{
    os << "ID: " << professor.id << "\n";
    os << "Name: " << professor.name << "\n";
    os << "Department: " << professor.department << "\n";
    os << "Base Salary: " << professor.base_salary << "\n";
    os << "Research Grant: " << professor.research_grant << "\n";
    os << "Citation: " << professor.citation << "\n";

    return os;
}

float calc_prof_salary(const Professor &P)
{
    float ans;
    ans = P.base_salary + P.research_grant + P.citation * 1000;
    return ans;
}

class Lecturer : public Teacher
{
protected:
    string department;
    float base_salary;
    float research_grant;
    int citation;

public:
    Lecturer() {}

    Lecturer(int id, string name, string department, float base_salary, float research_grant, int citation) : Teacher(id, name)
    {
        this->department = department;
        this->base_salary = base_salary;
        this->research_grant = research_grant;
        this->citation = citation;
    }

    friend float calc_lec_salary(const Lecturer &L);
    friend ostream &operator<<(ostream &os, const Lecturer &lecturer);

    void show_lec()
    {
        fout8 << "ID: " << id << endl;
        fout8 << "Name: " << name << endl;
        fout8 << "Department: " << department << endl;
        fout8 << "Base Salary: " << base_salary << endl;
        fout8 << "Research Grant: " << research_grant << endl;
        fout8 << "Citation: " << citation << endl;
    }
};

ostream &operator<<(ostream &os, const Lecturer &lecturer)
{
    os << "Department: " << lecturer.department << endl;
    os << static_cast<const Teacher &>(lecturer) << endl; // Call base class operator<<
    os << "Base Salary: " << lecturer.base_salary << endl;
    os << "Research Grant: " << lecturer.research_grant << endl;
    os << "Citation: " << lecturer.citation << endl;

    return os;
}

float calc_lec_salary(const Lecturer &L)
{
    float ans;
    ans = L.base_salary + L.research_grant + L.citation * 500;
    return ans;
}

int main()
{
    vector<float> cse_cgpa;
    vector<float> eee_cgpa;
    vector<float> me_cgpa;
    vector<float> bme_cgpa;
    vector<float> ece_cgpa;
    vector<float> ce_cgpa;

    vector<int> cse_dept_roll;
    vector<int> eee_dept_roll;
    vector<int> me_dept_roll;
    vector<int> bme_dept_roll;
    vector<int> ece_dept_roll;
    vector<int> ce_dept_roll;

    Student *cse[10]; // Declaring an array of pointers to CSE objects

    // Assigning the CSE objects to the array
    cse[0] = new CSE(1, "arman", "armanr.rafi@gmail.com", 2107046, 'A', 101, "CSE-1204", "Digital Logic Design", 3, 3.5, "CSE-1206", "Object Oriented Programming", 3, 3.5);
    cse[1] = new CSE(2, "john", "john@gmail.com", 2107047, 'B', 102, "CSE-1205", "Data Structures", 3, 3.7, "CSE-1207", "Algorithms", 3, 3.9);
    cse[2] = new CSE(3, "sarah", "sarah@gmail.com", 2107048, 'A', 103, "CSE-1208", "Structured Programming", 3, 3.8, "CSE-1209", "Data Structures ", 3, 3.6);
    cse[3] = new CSE(4, "alice", "alice@gmail.com", 2107049, 'B', 104, "CSE-1210", "Data Structures ", 3, 3.9, "CSE-1211", " Data Structures", 3, 3.7);
    cse[4] = new CSE(5, "David", "david@gmail.com", 2107050, 'A', 105, "CSE-1212", "Operating Systems", 3, 3.8, "CSE-1213", "Computer Networks", 3, 3.7);
    cse[5] = new CSE(6, "Sophia", "sophia@gmail.com", 2107051, 'B', 106, "CSE-1214", "Database Management", 3, 3.7, "CSE-1215", "Software Engineering", 3, 3.6);
    cse[6] = new CSE(7, "Michael", "michael@gmail.com", 2107052, 'A', 107, "CSE-1216", "Computer Architecture", 3, 3.9, "CSE-1217", "Web Development", 3, 3.8);
    cse[7] = new CSE(8, "Emma", "emma@gmail.com", 2107053, 'B', 108, "CSE-1218", "Artificial Intelligence", 3, 3.8, "CSE-1219", "Machine Learning", 3, 3.9);
    cse[8] = new CSE(9, "William", "william@gmail.com", 2107054, 'A', 109, "CSE-1220", "Computer Graphics", 3, 3.7, "CSE-1221", "Computer Vision", 3, 3.6);
    cse[9] = new CSE(10, "Olivia", "olivia@gmail.com", 2107055, 'B', 110, "CSE-1222", "Software Testing", 3, 3.6, "CSE-1223", "Cybersecurity", 3, 3.9);

    for (int i = 0; i < 10; i++)
    {
        cse_cgpa.push_back(cse[i]->get_CGPA());

        cse_dept_roll.push_back(cse[i]->getRoll());
    }
    // for run time initialization

    // for(int i=0;i<10;i++)
    // {
    //     int id, roll, room;
    //     float c1,g1,c2,g2;
    //     char sec;
    //     string name,mail,code1,title1,code2,title2;

    //     cout<<"enter id,name,mail,roll,section,room,code1,tit1,c1,g1,cpde2,tit2,c2,g2"<<endl;
    //     cin>>id;
    //     getline(cin,name);
    //     getline(cin,mail);
    //     cin>>roll;
    //     cin>>sec;
    //     cin>>room;
    //     getline(cin,code1);
    //     getline(cin,title1);
    //     cin>>c1>>g1;
    //     getline(cin,code2);
    //     getline(cin,title2);
    //     cin>>c2>>g2;

    //     cse[i]=new CSE(id,name,mail,roll,sec,room,code1,title1,c1,g1,code2,title2,c2,g2);

    // }

    // Displaying CSE department students
    for (int i = 0; i < 10; ++i)
    {
        cse[i]->display(); // Accessing and call methods on each CSE object
    }

    Student *eee[10];

    eee[0] = new EEE(1, "arman", "armanr.rafi@gmail.com", 2107046, 'A', 101, "EEE-1204", "Digital Logic Design", 3, 3.5, "EEE-1206", "Electromagnetic Fields ", 3, 3.5);
    eee[1] = new EEE(2, "john", "john@gmail.com", 2107047, 'B', 102, "EEE-1205", "Electromagnetic Fields", 3, 3.7, "EEE-1207", "Renewable Energy", 3, 3.9);
    eee[2] = new EEE(3, "sarah", "sarah@gmail.com", 2107048, 'A', 103, "EEE-1208", "Control Systems", 3, 3.8, "EEE-1209", "Renewable Energy", 3, 3.6);
    eee[3] = new EEE(4, "alice", "alice@gmail.com", 2107049, 'B', 104, "EEE-1210", "Electromagnetic Fields", 3, 3.9, "EEE-1211", "Power Electronics", 3, 3.7);
    eee[4] = new EEE(5, "David", "david@gmail.com", 2107050, 'A', 105, "EEE-1212", "Digital Signal Processing", 3, 3.8, "EEE-1213", "Power Systems", 3, 3.7);
    eee[5] = new EEE(6, "Sophia", "sophia@gmail.com", 2107051, 'B', 106, "EEE-1214", "Microelectronics", 3, 3.7, "EEE-1215", "Electric Machines", 3, 3.6);
    eee[6] = new EEE(7, "Michael", "michael@gmail.com", 2107052, 'A', 107, "EEE-1216", "Communication Systems", 3, 3.9, "EEE-1217", "Control Systems", 3, 3.8);
    eee[7] = new EEE(8, "Emma", "emma@gmail.com", 2107053, 'B', 108, "EEE-1218", "Power Electronics", 3, 3.8, "EEE-1219", "Renewable Energy", 3, 3.9);
    eee[8] = new EEE(9, "William", "william@gmail.com", 2107054, 'A', 109, "EEE-1220", "Digital Signal Processing", 3, 3.7, "EEE-1221", "Microelectronics", 3, 3.6);
    eee[9] = new EEE(10, "Olivia", "olivia@gmail.com", 2107055, 'B', 110, "EEE-1222", "Electric Machines", 3, 3.6, "EEE-1223", "Communication Systems", 3, 3.9);

    for (int i = 0; i < 10; i++)
    {
        eee_cgpa.push_back(eee[i]->get_CGPA());

        eee_dept_roll.push_back(eee[i]->getRoll());
    }

    // for(int i=0;i<10;i++)
    // {
    //     int id, roll, room;
    //     float c1,g1,c2,g2;
    //     char sec;
    //     string name,mail,code1,title1,code2,title2;

    //     cout<<"enter id,name,mail,roll,section,room,code1,tit1,c1,g1,cpde2,tit2,c2,g2"<<endl;
    //     cin>>id;
    //     getline(cin,name);
    //     getline(cin,mail);
    //     cin>>roll;
    //     cin>>sec;
    //     cin>>room;
    //     getline(cin,code1);
    //     getline(cin,title1);
    //     cin>>c1>>g1;
    //     getline(cin,code2);
    //     getline(cin,title2);
    //     cin>>c2>>g2;

    //     eee[i]=new EEE(id,name,mail,roll,sec,room,code1,title1,c1,g1,code2,title2,c2,g2);
    // }

    for (int i = 0; i < 10; ++i)
    {
        eee[i]->display();
    }
    Student *me[10]; // Declare an array of pointers to ME objects

    // Assign the ME objects to the array

    me[0] = new ME(1, "Ethan", "ethan@gmail.com", 2107101, 'A', 201, "ME-1201", "Thermodynamics", 3, 3.5, "ME-1202", "Fluid Mechanics", 3, 3.6);
    me[1] = new ME(2, "Lily", "lily@gmail.com", 2107102, 'B', 202, "ME-1203", "Mechanics of Materials", 3, 3.7, "ME-1204", "Machine Design", 3, 3.8);
    me[2] = new ME(3, "Daniel", "daniel@gmail.com", 2107103, 'A', 203, "ME-1205", "Thermal Systems", 3, 3.8, "ME-1206", "Heat Transfer", 3, 3.9);
    me[3] = new ME(4, "Olivia", "olivia@gmail.com", 2107104, 'B', 204, "ME-1207", "Dynamics of Machinery", 3, 3.9, "ME-1208", "Control Systems", 3, 3.7);
    me[4] = new ME(5, "William", "william@gmail.com", 2107105, 'A', 205, "ME-1209", "Fluid Dynamics", 3, 3.6, "ME-1210", "Mechatronics", 3, 3.8);
    me[5] = new ME(6, "Mia", "mia@gmail.com", 2107106, 'B', 206, "ME-1211", "Automotive Engineering", 3, 3.7, "ME-1212", "Thermodynamics II", 3, 3.9);
    me[6] = new ME(7, "James", "james@gmail.com", 2107107, 'A', 207, "ME-1213", "Materials Science", 3, 3.8, "ME-1214", "Engineering Design", 3, 3.7);
    me[7] = new ME(8, "Sophia", "sophia@gmail.com", 2107108, 'B', 208, "ME-1215", "Heat and Mass Transfer", 3, 3.9, "ME-1216", "Vibration Analysis", 3, 3.8);
    me[8] = new ME(9, "Benjamin", "benjamin@gmail.com", 2107109, 'A', 209, "ME-1217", "Finite Element Analysis", 3, 3.7, "ME-1218", "Robotics", 3, 3.6);
    me[9] = new ME(10, "Ava", "ava@gmail.com", 2107110, 'B', 210, "ME-1219", "Engineering Ethics", 3, 3.6, "ME-1220", "Environmental Engineering", 3, 3.9);

    for (int i = 0; i < 10; i++)
    {
        me_cgpa.push_back(me[i]->get_CGPA());
        me_dept_roll.push_back(me[i]->getRoll());
    }

    // for(int i=0;i<10;i++)
    // {
    //     int id, roll, room;
    //     float c1,g1,c2,g2;
    //     char sec;
    //     string name,mail,code1,title1,code2,title2;

    //
    //     cout<<"enter id,name,mail,roll,section,room,code1,tit1,c1,g1,cpde2,tit2,c2,g2"<<endl;
    //     cin>>id;
    //     getline(cin,name);
    //     getline(cin,mail);
    //     cin>>roll;
    //     cin>>sec;
    //     cin>>room;
    //     getline(cin,code1);
    //     getline(cin,title1);
    //     cin>>c1>>g1;
    //     getline(cin,code2);
    //     getline(cin,title2);
    //     cin>>c2>>g2;

    //     me[i]=new ME(id,name,mail,roll,sec,room,code1,title1,c1,g1,code2,title2,c2,g2);

    // }

    // Displaying ME department students

    for (int i = 0; i < 10; ++i)
    {
        me[i]->display();
    }
    // Creating BME department students

    Student *bme[10]; // Declare an array of pointers to BME objects

    // Assign the BME objects to the array

    bme[0] = new BME(11, "Sophie", "sophie@gmail.com", 2207046, 'A', 201, "BME-1201", "Biomechanics", 3, 3.5, "BME-1202", "Human Anatomy", 3, 3.7);
    bme[1] = new BME(12, "Ethan", "ethan@gmail.com", 2207047, 'B', 202, "BME-1203", "Medical Imaging", 3, 3.8, "BME-1204", "Biomaterials", 3, 3.9);
    bme[2] = new BME(13, "Ava", "ava@gmail.com", 2207048, 'A', 203, "BME-1205", "Biomechanics", 3, 3.7, "BME-1206", "Biomedical Signals", 3, 3.6);
    bme[3] = new BME(14, "Liam", "liam@gmail.com", 2207049, 'B', 204, "BME-1207", "Bioinformatics", 3, 3.9, "BME-1208", "Biomechanics", 3, 3.8);
    bme[4] = new BME(15, "Mia", "mia@gmail.com", 2207050, 'A', 205, "BME-1209", "Biomedical Imaging", 3, 3.8, "BME-1210", "Clinical Engineering", 3, 3.7);
    bme[5] = new BME(16, "Noah", "noah@gmail.com", 2207051, 'B', 206, "BME-1211", "Biomechanics", 3, 3.7, "BME-1212", "Biomedical Ethics", 3, 3.6);
    bme[6] = new BME(17, "Aria", "aria@gmail.com", 2207052, 'A', 207, "BME-1213", "Biomechanical Design", 3, 3.9, "BME-1214", "Biomedical Instrumentation", 3, 3.8);
    bme[7] = new BME(18, "Jackson", "jackson@gmail.com", 2207053, 'B', 208, "BME-1215", "Clinical Biomechanics", 3, 3.8, "BME-1216", "Biomedical Signal Processing", 3, 3.9);
    bme[8] = new BME(19, "Abigail", "abigail@gmail.com", 2207054, 'A', 209, "BME-1217", "Biomechanics of Injury", 3, 3.7, "BME-1218", "Rehabilitation Engineering", 3, 3.6);
    bme[9] = new BME(20, "Lucas", "lucas@gmail.com", 2207055, 'B', 210, "BME-1219", "Tissue Engineering", 3, 3.6, "BME-1220", "Biomechanics Research", 3, 3.9);

    for (int i = 0; i < 10; i++)
    {
        bme_cgpa.push_back(bme[i]->get_CGPA());
        bme_dept_roll.push_back(bme[i]->getRoll());
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     int id, roll, room;
    //     float c1, g1, c2, g2;
    //     char sec;
    //     string name, mail, code1, title1, code2, title2;

    //     cout<<"enter id,name,mail,roll,section,room,code1,tit1,c1,g1,cpde2,tit2,c2,g2"<<endl;
    //     cin>>id;
    //     getline(cin,name);
    //     getline(cin,mail);
    //     cin>>roll;
    //     cin>>sec;
    //     cin>>room;
    //     getline(cin,code1);
    //     getline(cin,title1);
    //     cin>>c1>>g1;
    //     getline(cin,code2);
    //     getline(cin,title2);
    //

    //     bme[i] = new BME(id, name, mail, roll, sec, room, code1, title1, c1, g1, code2, title2, c2, g2);
    // }

    // Displaying BME department students

    for (int i = 0; i < 10; ++i)
    {
        bme[i]->display(); // Access and call methods on each BME object
    }

    Student *ece[10]; // Declaring an array of pointers to ECE objects

    // Assigning the ECE objects to the array

    ece[0] = new ECE(11, "Emily", "emily@gmail.com", 2208001, 'A', 201, "ECE-2101", "Analog Electronics", 3, 3.5, "ECE-2102", "Digital Electronics", 3, 3.6);
    ece[1] = new ECE(12, "Daniel", "daniel@gmail.com", 2208002, 'B', 202, "ECE-2103", "Microprocessors", 3, 3.7, "ECE-2104", "Control Systems", 3, 3.8);
    ece[2] = new ECE(13, "Sophie", "sophie@gmail.com", 2208003, 'A', 203, "ECE-2105", "Communication Systems", 3, 3.8, "ECE-2106", "Electromagnetics", 3, 3.9);
    ece[3] = new ECE(14, "William", "william@gmail.com", 2208004, 'B', 204, "ECE-2107", "Digital Signal Processing", 3, 3.9, "ECE-2108", "VLSI Design", 3, 3.7);
    ece[4] = new ECE(15, "Oliver", "oliver@gmail.com", 2208005, 'A', 205, "ECE-2109", "Embedded Systems", 3, 3.7, "ECE-2110", "RF Engineering", 3, 3.8);
    ece[5] = new ECE(16, "Ava", "ava@gmail.com", 2208006, 'B', 206, "ECE-2111", "Power Electronics", 3, 3.8, "ECE-2112", "Optoelectronics", 3, 3.9);
    ece[6] = new ECE(17, "Mia", "mia@gmail.com", 2208007, 'A', 207, "ECE-2113", "Biomedical Engineering", 3, 3.7, "ECE-2114", "Robotics", 3, 3.8);
    ece[7] = new ECE(18, "Liam", "liam@gmail.com", 2208008, 'B', 208, "ECE-2115", "Wireless Communications", 3, 3.6, "ECE-2116", "Antenna Theory", 3, 3.7);
    ece[8] = new ECE(19, "Ella", "ella@gmail.com", 2208009, 'A', 209, "ECE-2117", "Digital Image Processing", 3, 3.9, "ECE-2118", "FPGA Design", 3, 3.8);
    ece[9] = new ECE(20, "Noah", "noah@gmail.com", 2208010, 'B', 210, "ECE-2119", "Nanoelectronics", 3, 3.7, "ECE-2120", "Microwave Engineering", 3, 3.6);

    for (int i = 0; i < 10; i++)
    {
        ece_cgpa.push_back(ece[i]->get_CGPA());
        ece_dept_roll.push_back(ece[i]->getRoll());
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     int id, roll, room;
    //     float c1, g1, c2, g2;
    //     char sec;
    //     string name, mail, code1, title1, code2, title2;

    //     cout<<"enter id,name,mail,roll,section,room,code1,tit1,c1,g1,cpde2,tit2,c2,g2"<<endl;
    //     cin>>id;
    //     getline(cin,name);
    //     getline(cin,mail);
    //     cin>>roll;
    //     cin>>sec;
    //     cin>>room;
    //     getline(cin,code1);
    //     getline(cin,title1);
    //     cin>>c1>>g1;
    //     getline(cin,code2);
    //     getline(cin,title2);
    //     cin>>c2>>g2;

    //     ece[i] = new ECE(id, name, mail, roll, sec, room, code1, title1, c1, g1, code2, title2, c2, g2);
    // }

    // Displaying ECE department students

    for (int i = 0; i < 10; ++i)
    {
        ece[i]->display(); // Accessing and call methods on each ECE object
    }

    Student *ce[10]; // Declaring an array of pointers to CE objects

    // Assigning the CE objects to the array

    ce[0] = new CE(21, "Ethan", "ethan@gmail.com", 2309001, 'A', 301, "CE-3101", "Structural Analysis", 3, 3.5, "CE-3102", "Concrete Technology", 3, 3.6);
    ce[1] = new CE(22, "Sophie", "sophie@gmail.com", 2309002, 'B', 302, "CE-3103", "Geotechnical Engineering", 3, 3.7, "CE-3104", "Transportation Engineering", 3, 3.8);
    ce[2] = new CE(23, "Aiden", "aiden@gmail.com", 2309003, 'A', 303, "CE-3105", "Environmental Engineering", 3, 3.8, "CE-3106", "Fluid Mechanics", 3, 3.9);
    ce[3] = new CE(24, "Isabella", "isabella@gmail.com", 2309004, 'B', 304, "CE-3107", "Hydrology", 3, 3.9, "CE-3108", "Structural Design", 3, 3.7);
    ce[4] = new CE(25, "Lucas", "lucas@gmail.com", 2309005, 'A', 305, "CE-3109", "Surveying", 3, 3.7, "CE-3110", "Construction Management", 3, 3.8);
    ce[5] = new CE(26, "Emma", "emma@gmail.com", 2309006, 'B', 306, "CE-3111", "Project Management", 3, 3.8, "CE-3112", "Engineering Ethics", 3, 3.9);
    ce[6] = new CE(27, "Mason", "mason@gmail.com", 2309007, 'A', 307, "CE-3113", "Structural Dynamics", 3, 3.7, "CE-3114", "Soil Mechanics", 3, 3.8);
    ce[7] = new CE(28, "Ava", "ava@gmail.com", 2309008, 'B', 308, "CE-3115", "Water Resources", 3, 3.6, "CE-3116", "Construction Materials", 3, 3.7);
    ce[8] = new CE(29, "Jackson", "jackson@gmail.com", 2309009, 'A', 309, "CE-3117", "Transportation Planning", 3, 3.9, "CE-3118", "Geology for Engineers", 3, 3.8);
    ce[9] = new CE(30, "Grace", "grace@gmail.com", 2309010, 'B', 310, "CE-3119", "Environmental Impact Assessment", 3, 3.7, "CE-3120", "Bridge Engineering", 3, 3.6);

    for (int i = 0; i < 10; i++)
    {
        ce_cgpa.push_back(ce[i]->get_CGPA());
        ce_dept_roll.push_back(ce[i]->getRoll());
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     int id, roll, room;
    //     float c1, g1, c2, g2;
    //     char sec;
    //     string name, mail, code1, title1, code2, title2;

    //     cout<<"enter id,name,mail,roll,section,room,code1,tit1,c1,g1,cpde2,tit2,c2,g2"<<endl;
    //     cin>>id;
    //     getline(cin,name);
    //     getline(cin,mail);
    //     cin>>roll;
    //     cin>>sec;
    //     cin>>room;
    //     getline(cin,code1);
    //     getline(cin,title1);
    //     cin>>c1>>g1;
    //     getline(cin,code2);
    //     getline(cin,title2);
    //     cin>>c2>>g2;

    //     ce[i] = new CE(id, name, mail, roll, sec, room, code1, title1, c1, g1, code2, title2, c2, g2);
    // }
    // Displaying CE department students

    for (int i = 0; i < 10; ++i)
    {
        ce[i]->display(); // Accessing and call methods on each CE object
    }

    int choice = 0;

    while (choice != 37)
    {

        cout << "press 1 to display CSE Dept Students" << endl;
        cout << "press 2 to display CSE Department Students with CGPA  3.75 to 4.00" << endl;
        cout << "press 3 to display CSE Department Students with CGPA  3.50 to 3.75" << endl;
        cout << "press 4 to display CSE Department Students with CGPA  3.00 to 3.50" << endl;
        cout << "press 5 to display CSE Department Students with CGPA  below 3.00" << endl;
        cout << "press 6 to search student by roll (2107046 to 2107055)" << endl;

        cout << "press 7 to display EEE Dept Students" << endl;
        cout << "press 8 to display EEE Department Students with CGPA  3.75 to 4.00" << endl;
        cout << "press 8 to display EEE Department Students with CGPA  3.50 to 3.75" << endl;
        cout << "press 10 to display EEE Department Students with CGPA  3.00 to 3.50" << endl;
        cout << "press 11 to display EEE Department Students with CGPA  below 3.00" << endl;
        cout << "press 12 to search student by roll (2107046 to 2107055)" << endl;

        cout << "press 13 to display ME Dept Students" << endl;
        cout << "press 14 to display ME Department Students with CGPA  3.75 to 4.00" << endl;
        cout << "press 15 to display ME Department Students with CGPA  3.50 to 3.75" << endl;
        cout << "press 16 to display ME Department Students with CGPA  3.00 to 3.50" << endl;
        cout << "press 17 to display ME Department Students with CGPA  below 3.00" << endl;
        cout << "press 18 to search student by roll (2107001 to 2107010)" << endl;

        cout << "press 19 to display BME Dept Students" << endl;
        cout << "press 20 to display BME Department Students with CGPA  3.75 to 4.00" << endl;
        cout << "press 21 to display BME Department Students with CGPA  3.50 to 3.75" << endl;
        cout << "press 22 to display BME Department Students with CGPA  3.00 to 3.50" << endl;
        cout << "press 23 to display BME Department Students with CGPA  below 3.00" << endl;
        cout << "press 24 to search student by roll (210746 to 2107055)" << endl;

        cout << "press 25 to display ECE Dept Students" << endl;
        cout << "press 26 to display ECE Department Students with CGPA  3.75 to 4.00" << endl;
        cout << "press 27 to display ECE Department Students with CGPA  3.50 to 3.75" << endl;
        cout << "press 28 to display ECE Department Students with CGPA  3.00 to 3.50" << endl;
        cout << "press 29 to display ECE Department Students with CGPA  below 3.00" << endl;
        cout << "press 30 to search student by roll (210701 to 2107010)" << endl;

        cout << "press 31 to display CE Dept Students" << endl;
        cout << "press 32 to display CE Department Students with CGPA  3.75 to 4.00" << endl;
        cout << "press 33 to display CE Department Students with CGPA  3.50 to 3.75" << endl;
        cout << "press 34 to display CE Department Students with CGPA  3.00 to 3.50" << endl;
        cout << "press 35 to display CE Department Students with CGPA  below 3.00" << endl;
        cout << "press 36 to search student by roll (210701 to 2107010)" << endl;

        cout << "press 37 to terminate the process" << endl;

        cin >> choice;

        switch (choice)
        {

        case 1:

            cout << "Displaying CSE Department Students:" << endl;
            displayCSEDeptStudents();
            break;

        case 2:

            cout << "CSE Department Students with CGPA 3.75 to 4.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (cse_cgpa[i] >= 3.75 && cse_cgpa[i] <= 4.00)
                {
                    cse[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 3:

            cout << "CSE Department Students with CGPA 3.50 to 3.75" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (cse_cgpa[i] >= 3.50 && cse_cgpa[i] <= 3.75)
                {
                    cse[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 4:

            cout << "CSE Department Students with CGPA 3.00 to 3.50" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (cse_cgpa[i] >= 3.00 && cse_cgpa[i] <= 3.50)
                {
                    cse[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 5:

            cout << "CSE Department Students with CGPA  below 3.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (cse_cgpa[i] < 3.00)
                {
                    cse[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 6:

            cout << "enter roll 2107046 to 2107055" << endl;
            int z;
            cin >> z;

            for (int i = 0; i < 10; i++)
            {
                if (cse_dept_roll[i] == z)
                {
                    cse[i]->display_console();
                    cout << "---------------------" << endl;
                }
            }

            break;

        case 7:

            cout << "Displaying EEE Department Students:" << endl;

            displayEEEDeptStudents();
            break;

        case 8:

            cout << "EEE Department Students with CGPA 3.75 to 4.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (eee_cgpa[i] >= 3.75 && eee_cgpa[i] <= 4.00)
                {
                    eee[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 9:

            cout << "CSE Department Students with CGPA 3.50 to 3.75" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (eee_cgpa[i] >= 3.50 && eee_cgpa[i] <= 3.75)
                {
                    eee[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 10:

            cout << "EEE Department Students with CGPA 3.00 to 3.50" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (eee_cgpa[i] >= 3.00 && eee_cgpa[i] <= 3.50)
                {
                    eee[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 11:

            cout << "EEE Department Students with CGPA  below 3.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (eee_cgpa[i] < 3.00)
                {
                    eee[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 12:

            cout << "enter roll 2107046 to 2107055" << endl;

            int d;
            cin >> d;

            for (int i = 0; i < 10; i++)
            {
                if (eee_dept_roll[i] == d)
                {
                    eee[i]->display_console();
                    cout << "---------------------" << endl;
                }
            }

            break;

        case 13:

            cout << "Displaying ME Department Students:" << endl;

            displayMEDeptStudents();
            break;

        case 14:

            cout << "ME Department Students with CGPA 3.75 to 4.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (me_cgpa[i] >= 3.75 && me_cgpa[i] <= 4.00)
                {
                    me[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 15:

            cout << "ME Department Students with CGPA 3.50 to 3.75" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (me_cgpa[i] >= 3.50 && me_cgpa[i] <= 3.75)
                {
                    me[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 16:

            cout << "ME Department Students with CGPA 3.00 to 3.50" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (me_cgpa[i] >= 3.00 && me_cgpa[i] <= 3.50)
                {
                    me[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 17:

            cout << "ME Department Students with CGPA  below 3.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (me_cgpa[i] < 3.00)
                {
                    me[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 18:

            cout << "enter roll 2107001 to 2107010" << endl;

            int e;
            cin >> e;

            for (int i = 0; i < 10; i++)
            {
                if (me_dept_roll[i] == e)
                {
                    me[i]->display_console();
                    cout << "---------------------" << endl;
                }
            }

            break;

        case 19:

            cout << "Displaying BME Department Students:" << endl;

            displayMEDeptStudents();
            break;

        case 20:

            cout << "BME Department Students with CGPA 3.75 to 4.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (bme_cgpa[i] >= 3.75 && bme_cgpa[i] <= 4.00)
                {
                    bme[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 21:

            cout << "BME Department Students with CGPA 3.50 to 3.75" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (bme_cgpa[i] >= 3.50 && bme_cgpa[i] <= 3.75)
                {
                    bme[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 22:

            cout << "BME Department Students with CGPA 3.00 to 3.50" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (bme_cgpa[i] >= 3.00 && bme_cgpa[i] <= 3.50)
                {
                    bme[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 23:

            cout << "BME Department Students with CGPA  below 3.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (bme_cgpa[i] < 3.00)
                {
                    bme[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 24:

            cout << "enter roll 2107046 to 2107055" << endl;

            int f;
            cin >> f;

            for (int i = 0; i < 10; i++)
            {
                if (bme_dept_roll[i] == f)
                {
                    bme[i]->display_console();
                    cout << "---------------------" << endl;
                }
            }

            break;

        case 25:

            cout << "Displaying ECE Department Students:" << endl;

            displayECEDeptStudents();
            break;

        case 26:

            cout << "ECE Department Students with CGPA 3.75 to 4.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (ece_cgpa[i] >= 3.75 && ece_cgpa[i] <= 4.00)
                {
                    ece[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 27:

            cout << "ECE Department Students with CGPA 3.50 to 3.75" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (ece_cgpa[i] >= 3.50 && ece_cgpa[i] <= 3.75)
                {
                    ece[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 28:

            cout << "ECE Department Students with CGPA 3.00 to 3.50" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (ece_cgpa[i] >= 3.00 && ece_cgpa[i] <= 3.50)
                {
                    ece[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 29:

            cout << "ECE Department Students with CGPA  below 3.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (ece_cgpa[i] < 3.00)
                {
                    ece[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 30:

            cout << "enter roll 2107046 to 2107055" << endl;

            int g;
            cin >> g;

            for (int i = 0; i < 10; i++)
            {
                if (ece_dept_roll[i] == g)
                {
                    ece[i]->display_console();
                    cout << "---------------------" << endl;
                }
            }

            break;

        case 31:

            cout << "Displaying CE Department Students:" << endl;

            displayCEDeptStudents();
            break;

        case 32:

            cout << "CE Department Students with CGPA 3.75 to 4.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (ce_cgpa[i] >= 3.75 && ce_cgpa[i] <= 4.00)
                {
                    ce[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 33:

            cout << "CE Department Students with CGPA 3.50 to 3.75" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (ce_cgpa[i] >= 3.50 && ce_cgpa[i] <= 3.75)
                {
                    ce[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 34:

            cout << "CE Department Students with CGPA 3.00 to 3.50" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (ce_cgpa[i] >= 3.00 && ce_cgpa[i] <= 3.50)
                {
                    ce[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 35:

            cout << "CE Department Students with CGPA  below 3.00:" << endl;

            for (int i = 0; i < 10; i++)
            {
                if (ce_cgpa[i] < 3.00)
                {
                    ce[i]->display_console();
                }
                cout << "---------------------" << endl;
            }

            break;

        case 36:

            cout << "enter roll 2107001 to 2107010" << endl;

            int c;
            cin >> c;

            for (int i = 0; i < 10; i++)
            {
                if (ce_dept_roll[i] == c)
                {
                    ce[i]->display_console();
                    cout << "---------------------" << endl;
                }
            }

            break;

        case 37:

            cout << "the process is terminated" << endl;

            break;

        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }

    // Deleting

    for (int i = 0; i < 10; ++i)
    {
        delete cse[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        delete eee[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        delete me[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        delete bme[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        delete ece[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        delete ce[i];
    }

    fout.close();
    fout2.close();
    fout3.close();
    fout4.close();
    fout5.close();
    fout6.close();

    Professor p[10];

    // for(int i=0;i<10;i++)
    // {
    //     cout<<"enter id name department base_salary research_grant citation"<<endl;
    //     int id;
    //     string name,dept;
    //     float salary,grant,citation;
    //     cin>>id;
    //     getline(cin,name);
    //     getline(cin,dept);
    //     cin>>salary>>grant>>citation;
    //     p[i]=Professor(id,name,dept,salary,grant,citation);
    // }

    p[0] = Professor(1, "John Smith", "Computer Science", 60000.0, 5000.0, 10);
    p[1] = Professor(2, "Alice Johnson", "Mathematics", 55000.0, 4000.0, 8);
    p[2] = Professor(3, "Michael Brown", "Physics", 58000.0, 4500.0, 9);
    p[3] = Professor(4, "Emily Davis", "Chemistry", 57000.0, 4200.0, 7);
    p[4] = Professor(5, "Daniel Wilson", "Biology", 56000.0, 4300.0, 6);
    p[5] = Professor(6, "Olivia Lee", "History", 54000.0, 3900.0, 8);
    p[6] = Professor(7, "Ethan Martin", "English", 53000.0, 3800.0, 5);
    p[7] = Professor(8, "Ava Rodriguez", "Psychology", 59000.0, 4600.0, 10);
    p[8] = Professor(9, "Sophia Garcia", "Economics", 57000.0, 4400.0, 9);
    p[9] = Professor(10, "Liam Hernandez", "Sociology", 55000.0, 4000.0, 7);

    Lecturer l[10];

    // for(int i=0;i<10;i++)
    // {
    //     cout<<"enter id name department base_salary research_grant citation"<<endl;
    //     int id;
    //     string name,dept;
    //     float salary,grant,citation;
    //     cin>>id;
    //     getline(cin,name);
    //     getline(cin,dept);
    //     cin>>salary>>grant>>citation;
    //     p[i]=Professor(id,name,dept,salary,grant,citation);
    // }

    l[0] = Lecturer(2, "Jane Doe", "Electrical Engineering", 40000.0, 2000.0, 5);
    l[1] = Lecturer(3, "Alice Johnson", "Mechanical Engineering", 45000.0, 2200.0, 4);
    l[2] = Lecturer(4, "Bob Williams", "Civil Engineering", 42000.0, 1800.0, 6);
    l[3] = Lecturer(5, "Emily Davis", "Chemical Engineering", 48000.0, 2400.0, 3);
    l[4] = Lecturer(6, "Michael Brown", "Aerospace Engineering", 52000.0, 2600.0, 2);
    l[5] = Lecturer(7, "Olivia Wilson", "Biomedical Engineering", 43000.0, 2100.0, 7);
    l[6] = Lecturer(8, "Daniel Lee", "Environmental Engineering", 49000.0, 2300.0, 5);
    l[7] = Lecturer(9, "Sophia Taylor", "Materials Science", 41000.0, 1700.0, 8);
    l[8] = Lecturer(10, "William Miller", "Industrial Engineering", 54000.0, 2700.0, 6);
    l[9] = Lecturer(11, "Ethan Clark", "Computer Science", 55000.0, 2800.0, 7);

    for (int i = 0; i < 10; i++)
    {
        p[i].show_prof();
        fout7 << calc_prof_salary(p[i]) << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        l[i].show_lec();
        fout8 << calc_lec_salary(l[i]) << endl;
    }

    while (1)
    {
        cout << "press 1 to display professor details" << endl;
        cout << "press 2 to display lecturer details" << endl;
        cout << "press 3 to terminate the process" << endl;

        int t;
        cin >> t;

        if (t == 1)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << "Professor: " << i + 1 << p[i];
                cout << calc_prof_salary(p[i]) << endl;
            }
        }
        else if (t == 2)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << "Lecturer: " << i + 1 << l[i] << endl;
                cout << calc_lec_salary(l[i]);
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}
