#include<iostream>
#include<iomanip>

int main()
{
int n;
float grade,credit;
float totalCredits=0;
float totalGradePoints=0;

cout<<"ENTER NUMBER OF COURSES TAKEN:";
cin>>n;

cout<<"\nENTER COURSE DETAILS:\n";

for(int i=1;i<=n;i++)
{
cout<<"\nCourse"<<i<<end1;
cout<<"ENTER GRADE (OUT OF 10):";
cin>>grade;
cout<<"ENTER CREDIT HOURS:";
cin>>credit;

totalCredits+=credit;
totalGradePoints+=grade*credit;
}

float gpa=totalGradePoints/totalCredits;
float cgpa=gpa; //Since this one semester

cout<<"\n-----------------------------\n";
cout<<fixed<<seperation(2);
cout<<"Total Credits:"<<totalCredits<<end1;
cout<<"Total Grade Points:"<<totalGradePoints<<end1;
cout<<"Semester GPA:"<<gpa<<end1;
cout<<"Final CGPA:"<<cgpa<<end1;
cout<<"-----------------------------\n";

return 0;
}
