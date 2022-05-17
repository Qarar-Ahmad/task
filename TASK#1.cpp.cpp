#include<iostream>
#include<string>
#include<cmath>
using namespace std;
	struct Result
	{
		int phy;
		int chem;
		int math;
		int isl;
		int urdu;
		int eng;
		float total_percentage;
	};
	struct student_info
{
	string name;
	string roll_no;
	string phone_no;
	string email;
     Result result;	
}s1,s2,s3,s4,s5;
	
int main()
{
	student_info s1,s2,s3,s4,s5;
  	int phy;
		int chem;
		int math;
		int isl;
		int urdu;
		int eng;
		float total_percentage;
			string name;
	string roll_no;
	string phone_no;
	string email;
     Result result;
      cout<<" Enter the name of first student :";
   cin>>s1.name;
   cout<<" Enter the roll no of first student :";
   cin>>s1.roll_no;
   cout<<" Enter the phone no of first student :";
   cin>>s1.phone_no;
   cout<<" Enter the email address of the first student :";
   cin>>s1.email;
   cout<<" Enter the name of second student :";
   cin>>s2.name;
   cout<<" Enter the roll no of second student :";
   cin>>s2.roll_no;
   cout<<" Enter the phone no of second student :";
   cin>>s2.phone_no;
   cout<<" Enter the email address of the second student :";
   cin>>s2.email;
   cout<<" Enter the name of third student :";
   cin>>s3.name;
   cout<<" Enter the roll no of third student :";
   cin>>s3.roll_no;
   cout<<" Enter the phone no of third student :";
   cin>>s3.phone_no;
   cout<<" Enter the email address of the third student :";
   cin>>s3.email;
   cout<<" Enter the name of fourth student :";
   cin>>s4.name;
   cout<<" Enter the roll no of fourth student :";
   cin>>s4.roll_no;
   cout<<" Enter the phone no of fourth student :";
   cin>>s4.phone_no;
   cout<<" Enter the email address of the fourth student :";
   cin>>s4.email;
   cout<<" Enter the name of fifth student :";
   cin>>s5.name;
   cout<<" Enter the roll no of fifth student :";
   cin>>s5.roll_no;
   cout<<" Enter the phone no of fifth student :";
   cin>>s5.phone_no;
   cout<<" Enter the email address of the fifth student :";
   cin>>s5.email;
      
   cout<<" Note! All the obtained marks are out of 100 "<<endl;
   
     cout<<" Enter the marks in physics of the first student :";
     cin>>s1.result.phy;
     cout<<" Enter the marks in chemistry of the first student :";
     cin>>s1.result.chem;
     cout<<" Enter the marks in math of the first student :";
     cin>>s1.result.math;
     cout<<" Enter the marks in isl  of the first student :";
     cin>>s1.result.isl;
     cout<<" Enter the marks in urdu of the first student :";
     cin>>s1.result.urdu;
     cout<<" Enter the marks in english of the first student :";
	 cin>>s1.result.eng;
	 cout<<" Enter the marks in physics of the second student :";
     cin>>s2.result.phy;
     cout<<" Enter the marks in chemistry of the second student :";
     cin>>s2.result.chem;
     cout<<" Enter the marks in math of the second student :";
     cin>>s2.result.math;
     cout<<" Enter the marks in isl  of the second student :";
     cin>>s2.result.isl;
     cout<<" Enter the marks in urdu of the second student :";
     cin>>s2.result.urdu;
     cout<<" Enter the marks in english of the second student :";
	 cin>>s2.result.eng;
	 cout<<" Enter the marks in physics of the third student :";
     cin>>s3.result.phy;
     cout<<" Enter the marks in chemistry of the third student :";
     cin>>s3.result.chem;
     cout<<" Enter the marks in math of the third student :";
     cin>>s3.result.math;
     cout<<" Enter the marks in isl  of the third student :";
     cin>>s3.result.isl;
     cout<<" Enter the marks in urdu of the third student :";
     cin>>s3.result.urdu;
     cout<<" Enter the marks in english of the third student :";
	 cin>>s3.result.eng;
	 cout<<" Enter the marks in physics of the fourth student :";
     cin>>s4.result.phy;
     cout<<" Enter the marks in chemistry of the fourth student :";
     cin>>s4.result.chem;
     cout<<" Enter the marks in math of the fourth student :";
     cin>>s4.result.math;
     cout<<" Enter the marks in isl  of the fourth student :";
     cin>>s4.result.isl;
     cout<<" Enter the marks in urdu of the fourth student :";
     cin>>s4.result.urdu;
     cout<<" Enter the marks in english of the fourth student :";
	 cin>>s4.result.eng;
	 cout<<" Enter the marks in physics of the fifthstudent :";
     cin>>s5.result.phy;
     cout<<" Enter the marks in chemistry of the fifth student :";
     cin>>s5.result.chem;
     cout<<" Enter the marks in math of the fifth student :";
     cin>>s5.result.math;
     cout<<" Enter the marks in isl  of the fifth student :";
     cin>>s5.result.isl;
     cout<<" Enter the marks in urdu of the fifth student :";
     cin>>s5.result.urdu;
     cout<<" Enter the marks in english of the fifth student :";
	 cin>>s5.result.eng;
        s1.result.total_percentage=(((float)s1.result.phy+(float)s1.result.chem+(float)s1.result.math+(float)s1.result.urdu+(float)s1.result.isl+(float)s1.result.eng)/600)*100;
        
		 s2.result.total_percentage=(((float)s2.result.phy+(float)s2.result.chem+(float)s2.result.math+(float)s2.result.urdu+(float)s2.result.isl+(float)s2.result.eng)/600)*100;
        s3.result.total_percentage=(((float)s3.result.phy+(float)s3.result.chem+(float)s3.result.math+(float)s3.result.urdu+(float)s3.result.isl+(float)s3.result.eng)/600)*100;
        s4.result.total_percentage=(((float)s4.result.phy+(float)s4.result.chem+(float)s4.result.math+(float)s4.result.urdu+(float)s4.result.isl+(float)s4.result.eng)/600)*100;
        s5.result.total_percentage=(((float)s5.result.phy+(float)s5.result.chem+(float)s5.result.math+(float)s5.result.urdu+(float)s5.result.isl+(float)s5.result.eng)/600)*100;
        

  
	  cout<<" These are the details of the First student :"<<"  His Name is : "<<s1.name<<"  "<<" Roll no is : "<<s1.roll_no<<"  "<<" Phone no is : "<<s1.phone_no<<"  "<<" Email address is : "<<s1.email<<"  "<<" Total percentage is :"<<s1.result.total_percentage<<"%";
	  cout<<endl;
      cout<<endl;
	cout<<" These are the details of the second student :"<<" Name is : "<<s2.name<<"  "<<"Roll no is : "<<s2.roll_no<<"  "<<" Phone no is : "<<s2.phone_no<<"  "<<" Email address is : "<<s2.email<<"  "<<" Total percentage is :"<<s2.result.total_percentage<<"%";
	  cout<<endl;
	  cout<<endl;
	cout<<" These are the details of the third student :"<<" Name is :"<<s3.name<<"  "<<"Roll no is : "<<s3.roll_no<<"  "<<" Phone no is : "<<s3.phone_no<<"  "<<" Email address is : "<<s3.email<<"  "<<" Total percentage is :"<<s3.result.total_percentage<<"%";
	  cout<<endl;
	  cout<<endl;
	cout<<" These are the details of the Fourth student :"<<" Name is :"<<s4.name<<"  "<<"Roll no is : "<<s4.roll_no<<"  "<<" Phone no is : "<<s4.phone_no<<"  "<<" Email address is : "<<s4.email<<"  "<<" Total percentage is :"<<s4.result.total_percentage<<"%";
	  cout<<endl;
	  cout<<endl;
	cout<<" These are the details of the Fifth student :"<<" Name is :"<<s5.name<<"  "<<"Roll no is : "<<s5.roll_no<<"  "<<" Phone no is : "<<s5.phone_no<<"  "<<" Email address is : "<<s5.email<<"  "<<" Total percentage is :"<<s5.result.total_percentage<<"%";
	  cout<<endl;
}
