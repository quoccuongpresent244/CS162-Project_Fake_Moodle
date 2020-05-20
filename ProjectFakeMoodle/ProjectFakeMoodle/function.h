#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

extern int  Nstaff, Nlecturer, Nstudent, Nclass;
extern int  staffCapa, lecturerCapa, studentCapa;



struct classes {
	string classname;
	int numofstu;
};

struct staff {
	string username;
	string password;
	string fullname;
	int gender;
};
struct student {
	string id;
	string password;
	string fullname;
	string dob;
	string clas;
	int status;
};
struct lecturer {
	string username;
	string password;
	string fullname;
	string degree;
	int gender;
};

struct course {
	string courseID;
	string courseName;
	string clas;
	string instructor;
	string instructorUsername;
	string degree;
	string gender;
	string startDate;
	string endDate;
	string dayOfWeek;
	string startTime;
	string endTime;
	string room;
	int status;
};
struct stuincourse { //student in course containing student infor, scoreboard and attendance
	string id;
	string password;
	string fullname;
	string dob;
	string clas;
	int status;
	int midterm;
	int final;
	int bonus;
	int total;
	// Tao chua tao attendance
};

extern classes* lophoc;
extern staff* giaovu;
extern lecturer* giaovien;
extern student* hocsinh;

void firstMenu();
void login();
void loadStaff();
void loadLecturer();
void loadStudent();

void updateAllClassTXT();
void updateAClassTXT(string classname);
void updateStudentTXT(string filename);

//CLASS
void importCSV();
void addAStudenttoClass();
void editStudent();
void LoadStudent(student* hocsinh, int numofstu, ifstream& f);
void RemoveStudent(student* hocsinh, int numofstu, string tmpID, string tmpClass);
void RemoveAStudent();
void viewListOfClasses();
void viewListOfStudentsInClass();

//COURSE
void importCourseCSV();
void addANewCourse();
void editACourse();
void listofCourse(); //task 20: view List of Course
void updateClassScheduleTXT(course* khoahoc, int Ncourse, string coursename);
void loadClassScheduleTXT(course*& khoahoc, int& Ncourse, string coursename);
void updateCourseStudentTXT(string coursetudent, string classname);

void staffMenuShow();
void staffFeature(staff a);
void lecturerFeature(lecturer a);
void studentFeature(student a);



#endif