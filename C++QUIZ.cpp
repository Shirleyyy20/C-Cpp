#include <iostream> 
#include <cstring>
#include <cctype>
#include <stdio.h>
#include <Windows.h>
#include <iostream> 
#include <conio.h>
#include <cstdio>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <iomanip>

using namespace std;
int myarr=0;
string mydata[50][5];
int point=0;	
void gotoXY(int x, int y); 
void timer();
void write_student();	                 // to write the record in binary file
void firstscreen();
void quiz();
void display_all();	            // to read all records from binary file
void class_result();	        // to display all records in tabular format from binary file
void result();		            // to display result menu
double duration;
double maxtime=100;
	string comm;
enum color                     //enumeration is a user-defined data type
{  NONE,DARK_BLUE,GREEN,DARK_CYAN,DARK_RED,PURPLE,DARK_YELLOW,NORMAL,GRAY,BLUE,LIME,CYAN,RED,PINK,YELLOW,WHITE};
void setcolor   (color newColor);
struct question
{   string ques;string ans1;string ans2;string ans3;string ans4;
	char ans;
};
int main()
{   char name;
		cout.setf(ios::fixed|ios::showpoint);
		cout<<setprecision(2);      // program outputs decimal number to two decimal places
		firstscreen();
		_getch();
		system("cls");
return 0;
}
class student
{   int rollno;
	char name[50];            	//function to calculate grade
	int obt;
	double per;
	char grade;
	void calculate();	        //function to calculate grade
		void Result();
public:
	void getdata();		        //function to accept data from user
	void showdata() const;	    //function to show data on screen
	void show_tabular() const;
}; 
void student::calculate()
{   per=point/5*10;
	if(per>=80)
	{ grade='A';comm="Excellent";}	
	else if(per>=60)
		{grade='B';comm="Good";} 
	else if(per>=40)
		{grade='C';comm="Fair";}
	else
		{grade='D';
			comm="Better Luck Next Time!";}
}
void student::getdata()
{	point=0;
	cout<<"\nEnter Your Roll No:  ";
	cin>>rollno;
	cout<<"\nEnter Your Name:  ";
	cin.ignore();
	cin.getline(name,20);
	system("cls");
	quiz();	
	obt=point;
	calculate();
	system("cls");
	Result();
}
void student::showdata() const
{   cout<<"\nRoll number of student : "<<rollno;
	cout<<"\nName of student : "<<name;
}
void student::show_tabular() const
{   cout<<rollno<<setw(15)<<name<<setw(10)<<obt<<setw(10)<<per<<setw(6)<<grade<<endl;
	myarr++;
}
void ebod()
{           for(int x = 20; x < 103; x++)
            {setcolor(CYAN);gotoXY(x,4);	cout<<char(205);}
			for(int x = 20; x < 103; x++)
			{setcolor(PURPLE);gotoXY(x,12);	cout<<char(205);}
			for(int x = 5; x < 12; x++)
			{setcolor(CYAN);gotoXY(20,x);	cout<<char(186);}
			for(int x = 5; x < 12; x++)
			{setcolor(CYAN);gotoXY(103,x);	cout<<char(186);}

			setcolor(CYAN);
			gotoXY(20,4);	cout<<char(201);
			gotoXY(103,4);	cout<<char(187);
			gotoXY(103,12);	cout<<char(188);
			gotoXY(20,12);	cout<<char(200);
}

void gotoXY(int x, int y) 	//function to decide location of the screem
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 		 
	COORD CursorPosition; 
	CursorPosition.X = x; // Locates column
	CursorPosition.Y = y; // Locates Row
	SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}

void student::Result()
{
	int f=30;
	setcolor(RED);
	gotoXY(f,3);cout<<"  _____                 _ _   "<<endl;
	gotoXY(f,4);cout<<" |  __ \\               | | |  "<<endl;
	gotoXY(f,5);cout<<" | |__) |___  ___ _   _| | |_ "<<endl;
	gotoXY(f,6);cout<<" |  _  // _ \\/ __| | | | | __|"<<endl;
	gotoXY(f,7);cout<<" | | \\ \\  __/\\__ \\ |_| | | |_ "<<endl;
	gotoXY(f,8);cout<<" |_|  \\_\\___||___/\\__,_|_|\\__|"<<endl;
	
	setcolor(YELLOW);
gotoXY(f,12);cout<<" _________________________________________________________________ "<<endl;
gotoXY(f,13);cout<<"|  _____________________________________________________________  |"<<endl;
gotoXY(f,14);cout<<"| |                                                             | |"<<endl;
gotoXY(f,15);cout<<"| |                                                             | |"<<endl;
gotoXY(f,16);cout<<"| |                                                             | |"<<endl;
gotoXY(f,17);cout<<"| |                                                             | |"<<endl;
gotoXY(f,18);cout<<"| |_____________________________________________________________| |"<<endl;
gotoXY(f,19);cout<<"|_________________________________________________________________|"<<endl;

	setcolor(CYAN);
	gotoXY(35,14);cout<<"Name ==>"<<name;
	setcolor(CYAN);
	gotoXY(70,14);cout<<"Roll No ==> "<<rollno;
	setcolor(CYAN);
	gotoXY(35,15);cout<<"Total Score ==> 50";
	gotoXY(70,15);cout<<"Your Score ==> "<<point;
	setcolor(CYAN);
	gotoXY(35,16);cout<<"Percentage ==> "<<per;
	gotoXY(70,16);cout<<"Grade ==> "<<grade;
	setcolor(CYAN);
	gotoXY(35,17);cout<<"Comments==> "<<comm;
_getch();
}	
void Borders() 
{
	{   for(int x = 2; x < 70; x++)
	    {setcolor(BLUE);
		//setcolor(WHITE);
		gotoXY(x,1);	cout<<char(205);}
		Beep(200, 25); 
		gotoXY(135,1);	cout<<char(187);		
		for(int y = 2; y < 50; y++) {gotoXY(135,y);	cout<<char(186);}
		Beep(300, 25); 
		gotoXY(135,50);	cout<<char(188);		
		for(int x = 134; x > 1; x--){gotoXY(x,50);	cout<<char(205);}
		Beep(400, 25); 
		gotoXY(1,50);	cout<<char(200);		
		for(int y = 49; y > 1; y--){gotoXY(1,y);	cout<<char(186);}
		gotoXY(1,1);	cout<<char(201);		
		Beep(500, 25);
	}
}
void setcolor   (color newColor) 
{   //A "handle" is a generic identifier used to represent something.
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), (newColor ) );
}
void quiz()
{	
	std::clock_t start;
    start = std::clock();	
	char a,b,e; int t=0; int i=0;
	int right=0; int wrong=0;
	char answer;
	struct question abc[6];
	int srno=0;
	
	abc[0] = {"Which operator has highest precedence?","=","*","()","++",'c'};
	abc[1] = {"Can we overload functions in C++?","Yes","No","Compilation Error","Runtime error",'a'};
	abc[2] = {"What is size of int data type in cpp?","2 bytes","4 bytes.","Depends on compiler","1 byte",'c'};
	abc[3] = {"Identify the incorrect constructor type?","parameterized constructor","default constructor","friend constructor","copy constructor",'c'};
	abc[4] = {"Which of the following keywords cant appear inside a class definition?","template","static","virtual","friend",'a'};

	do {
		duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
			setcolor(RED);			
			gotoXY(69,3);
			cout << maxtime-duration << endl;
		if (duration>=maxtime) {
			t=0;
			break;
		}

		if (srno==i) {
			system("cls");

			srno++;
			b=' ';
			e=' ';
			answer=abc[i].ans;

			ebod();
			for(int x = 12; x < 16; x++)
			{setcolor(CYAN); gotoXY(20,x);	cout<<char(186);}
			for(int x = 20; x < 103; x++)
			{setcolor(CYAN);gotoXY(x,16);	cout<<char(205);}
			for(int x = 12; x < 16; x++)
			{setcolor(CYAN);gotoXY(103,x);	cout<<char(186);}

			setcolor(CYAN);
			gotoXY(103,16);	cout<<char(188);
			gotoXY(20,16);	cout<<char(200);

			int col=23;
			setcolor(BLUE);
			gotoXY(23,5);
			
			cout << "Question "<<srno<<") " <<endl;
			gotoXY(23,6);cout<< abc[i].ques<< endl;
	  		gotoXY(col,8);
			setcolor(YELLOW);
			cout <<" a - " << abc[i].ans1<< endl;
	  		gotoXY(col,9);      cout <<" b - " << abc[i].ans2<< endl;
	  		gotoXY(col,10);     cout << " c - " << abc[i].ans3<< endl;
	  		gotoXY(col,11);     cout << " d - " << abc[i].ans4<< endl;
			gotoXY(45,13);		cout << " Press Enter to Skip ";
			gotoXY(45,14);		cout << " Select your Option ==> ";
			setcolor(YELLOW);
			gotoXY(45,3);		cout << " Your Remaining Time ==> ";
		}

		if(_kbhit()){
			setcolor(YELLOW);
			gotoXY(70,14);a=_getch(); cout<<a;
			if(int(a)==13)
			{   gotoXY(30,18);
					setcolor(RED); cout << "You skipped this Question";}
			else {
				if(a==answer){
					gotoXY(62,18);setcolor(LIME);
					point=point+10;
					cout << "Congratulations! You selected the Right option";}
		        else 
				{gotoXY(70,18);setcolor(GREEN);
					cout << "Correct Option is  ==> "<<answer;
					gotoXY(30,18);setcolor(RED);
					cout << "You selected the Wrong option.";}
			}
			_getch();i++;
		} 
	} 
	while (i<5);
	if (i<4) 
	   {cout<<"\nTime is up!! You failed to attempt all the questions"<<endl;} 
	_getch();
}
void write_student()
{
	student st;
	ofstream outFile;
	outFile.open("C++RECORD.dat",ios::binary|ios::app);
	st.getdata();
	outFile.write(reinterpret_cast<char *>  (&st), sizeof(student));
	outFile.close(); 
	cin.get();
}
//    	function to read all records from file
void display_all()
{
	student st;
	ifstream inFile;
	inFile.open("C++RECORD.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.showdata();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
//    	function to display all students grade report
void class_result()
{
	student st;
	ifstream inFile;
	inFile.open("C++RECORD.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}

	cout<<"\n\n\t\tALL STUDENTS RESULT \n";
	cout<<"\n\t\tPress Enter to Go Back to the Home Screen\n";
	cout<<"==========================================================\n";
	cout<<"R.No          Name      Points     %      Grade"<<endl;
	cout<<"==========================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.show_tabular();
	}
	cin.ignore();
	cin.get();
	inFile.close();
}
//    	function to display result menu
void firstscreen()		//simply desgin screen
{
	doo:
	system("CLS");		
						
	setcolor(NORMAL);
	gotoXY(58,8);cout<<"C++ QUIZ";
	setcolor(WHITE);
	gotoXY(50,20);cout<<" >>";
	gotoXY(74,20);cout<<" >>";
	gotoXY(54,20);
	setcolor(WHITE);
	cout<<"Press Enter Continue";
	Beep(500, 100);
	gotoXY(45,10);cout<<"======Select the Following Option ======";
	gotoXY(50,12);cout<<"1-->  New Game";
	gotoXY(50,13);cout<<"2-->  Result Record";  
	gotoXY(42,16);cout<<"Select : ";    
	Beep(500, 100);
	go:                                     
	int type;
	gotoXY(51,16);
	cin>>type;	
	switch(type)
	{   case 1:
			{
						system("CLS");
			
			system("COlOR 3f");
			write_student();	
			break;
			}
	case 2:
			{
			system("CLS");		
				setcolor(GREEN);
			class_result();
			
			system("CLS");
			goto doo;
			break;
			}
		 default:
			cout<<"/n INVALID CHOICE";
			_getch();
			goto go;
	}
}