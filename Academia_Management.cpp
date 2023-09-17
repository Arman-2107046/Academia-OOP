#include<bits/stdc++.h>
using namespace std;


class Employee{
	protected:
	string loginId;
	string password;
	public:
		// Employee()
		// {
		// 	loginId=;
		// 	password=0;
		// }

		Employee(string l,string p)
		{
			loginId=l;
			password=p;
		
		}
		
		void setLogin(string l)
			{
				loginId=l;
			}
			
			string Getlogin()
			{
				return loginId;
			}
			
		void setPassw(string p)
		{
			password=p;
		}
		
		string Getpassw()
		{
			return password;
		}
		
		// ~Employee()
		// {
		// 	if(loginId!=NULL)
		// 	delete[] loginId;
		// 	if(password!=NULL)
		// 	delete[] password;
		// }

};
//int total courses
class Student;
class Course{
	private:
		string Coursename;
		string code;
		int creditHours;
		string PreReq;
		Student studentList;
		int totalStudents;

		public:
			// Course()
			// {
			// 	Coursename=NULL;
			// 	code=NULL;
			// 	creditHours=0;
			// 	PreReq=NULL;
			// }
			
			
			void setCname(string c)
			{
				Coursename=c;
			}
			
			string getCname()
			{
				return Coursename;
			}
			
			void setCode(string cd)
			{
				code=cd;
			}
			
			string getCode()
			{
				return code;
			}
			
			
			void setCredits(int s)
			{
				creditHours=s;
			}
			
			int getCredits()
			{
				return creditHours;
			}
			
			void setPre(string p)
			{
				PreReq=p;
			}
			
			string getPre()
			{
				return PreReq;
			}
			
			void setInfo(string c, string name, int credithours, string prereq)
			{
				Coursename=name;
				code=c;
				creditHours=credithours;
				PreReq=prereq;
				
			}
			
			string getcourseinfo()
			{
				return Coursename;
			}
			
			
			void printCourse()
			{
				cout<<code<<"\t"<<Coursename<<endl;
			}
			void fileInput()
			{
				ofstream fout;
				fout.open("assignedCourses.txt",ios::app);
				if(Coursename!=NULL&&code!=NULL)
				fout<<code<<"\t"<<Coursename<<endl;
				
				fout.close();
			}
			void fileInputstudent()
			{
				ofstream fout;
				fout.open("studentAssignCourse.txt",ios::app);
				if(Coursename!=NULL&&code!=NULL)
				fout<<code<<"\t"<<Coursename<<endl;
				
				fout.close();
			}
			
			void printCWCinfo()
			{
				if(Coursename!=NULL && code!=NULL)
				cout<<code<<"\t"<<Coursename<<"\t"<<creditHours<<"\t"<<PreReq<<endl;
			}

};
