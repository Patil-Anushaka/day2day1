#include<iostream>
using namespace std;
class Student
{
	char name[10];
	int roll no ;
	float percentage;
	public:
		void accept()
		{
			cout<<"\n\n Enter the name , roll no , & percentage of the student";
			cin>>name>>roll no>>percentage;
		}
		void display()
		{
			cout<<"Name ="<<name;
			cout<<"Roll No ="<<roll no;
			cout<<"Percentage = <<percentage"
		}
	};
	    int main()
	    {
	    	Student S;
	    	S.accept();
	    	S.display();
	    	return 0;
		}
		
		
		
		
		
		
		
		
		

