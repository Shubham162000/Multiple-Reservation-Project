#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>
#include<fstream>
using namespace std;

char l_destination[5][20]={"BHOPAL","INDORE","PUNA","BANGLORE","HYDRABADE"};
       char i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","MUMBAI" };
class mytime
{
protected:
 int choose;
public:
 void getdata()
 {
  cout<<"ON WHICH TIME YOU WANT TO TRAVEL"<<endl;
  cout<<"PRESS 1 FOR 11 AM"<<endl;
  cout<<"PRESS 2 FOR 10 AM"<<endl;
  cout<<"PRESS 3 FOR 9 AM"<<endl;
  cin>>choose;
 }
 void show()
 {
  if(choose==1)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight mytime 11 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
            "|flight mytime 11 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
      "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  if(choose==2)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight mytime 10 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
            "|flight mytime 10 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
      "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  if(choose==3)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight mytime 9 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
            "|flight mytime 9 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
      "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
 }
};
class passenger
{
public:
    virtual void getdata()
 {
 }
virtual void show()
 {
 }
};
class booking:public passenger
{
protected:
 int num;
 char ch;
 char firstname[60];
 char lastname[60];
 char address[60];
 char c_loc[30];
 char dest[30];
 char reservation_no[60];
 int option;
public:
 void getdata()
 {
  cout<<setw(40)<<"\n\n        ::Please enter the required information for passenger number::"<<endl;
  cout<<"\n\n\nEnter the firstname of passenger: ";
   cin.getline(firstname,60);
   cout<<endl;
   cout<<"Enter the lastname of passenger: ";
   cin.getline(lastname,60);
   cout<<endl<<endl;
   cout<<"Enter address of passenger:  ";
   cin.getline(address,60);
   cout<<endl<<endl;
   cout<<"Enter the Resevation No. of Ticket"<<endl;
   cin.getline(reservation_no,60);
   cout<<endl;
   cout<<"Enter the current location of passenger(IN CAPITAL LETTERS ONLY):  ";
   cin.getline(c_loc,60);
   cout<<endl<<endl;
   cout<<"Enter the destination of passenger(IN CAPITAL LETTERS ONLY):  ";
   cin.getline(dest,60);
   cout<<endl<<endl;
   system("CLS");
 }
 void show()
 {
   cout<<setw(40)<<"Your E-Ticket is :"<<endl;
   int t=1;
   int r=12345;
  cout<<"                           AIRLINE TICKET                                 "<<endl;
  cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Resevation No. :"<<reservation_no<<"                                     "<<endl;
  cout<<"|__________________________________________________________________________"<<endl;
  cout<<"|Passenger Information :                                                  "<<endl;
  cout<<"|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|flight Information :                                                     "<<endl;
  cout<<"|12 aug 2011                                                              "<<endl;
  cout<<"|BOING 747                                                                "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
  cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
  cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;

  ofstream outfile("E:\\E_ticket.txt");
        outfile<<"                           AIRLINE TICKET                                 "<<endl<<
   "|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl<<
     "|_________________________________________________________________________"<<endl<<
   "|Resevation No. :"<<reservation_no<<"                                     "<<endl<<
   "|__________________________________________________________________________"<<endl<<
     "|Passenger Information :                                                  "<<endl<<
     "|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl<<
     "|                                                                         "<<endl<<
     "|Address :"<<address<<"                                                   "<<endl<<
     "|_________________________________________________________________________"<<endl<<
        "|flight Information :                                                     "<<endl<<
     "|12 aug 2011                                                              "<<endl<<
     "|BOING 747                                                                "<<endl<<
     "|_________________________________________________________________________"<<endl<<
     "|Depart :"<<c_loc<<"                                                      "<<endl<<
     "|Arrive :"<<dest<<"                                                       "<<endl<<
     "|*BAGGAGE allowed 40 Kilos                                                "<<endl<<
     "|*contact Airline to Confirm baggage allowance                            "<<endl<<
     "|_________________________________________________________________________"<<endl;

t=t+1;
r=r+1;

 }
};

class search
{
public:
void searching()
 {
  cout<<"FOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE"<<endl;

  for(int i=0;i<5;i++)

  {

  for(int j=0;j<10;j++)

  {

   cout<<"FLIGHT FROM "<<l_destination[i]<<" TO "<<i_destination[j]<<endl;
  }
  }
 }
};
class local: public booking
{
protected:
    int b_seat;
 int e_seat;
 int ch;
 int k;
 int p;
 int option;
 mytime t1;
public:
 void getdata()
 {
  k=0;
  p=0;
  cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2)AIR BLUE"<<endl;
  cout<<"3)ARAB EMIRATES"<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;
  system ("cls");
  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO ARAB EMIRATES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
  }
  cout<<setw(40)<<"\nTHESE ARE THE LOCAL PLACES AVAILABLE\n\n\n"<<endl;
  cin.ignore();
  for(int i=0;i<5;i++)
  {
   cout<<l_destination[i]<<endl;
  }
  booking::getdata();
  for(int j=0;j<5;j++)
  {
   if(strcmp(l_destination[j],c_loc)==0)
   {
    k++;
   }

  }
  for( int i=0;i<5;i++)
  {
   if(strcmp(l_destination[i],c_loc)==0)

   {

    p++;

   }

  }
  if(k==1&&p==1)

  {

   cout<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl;

   b_seat=30;

   e_seat=40;

   cout<<"In which class you want to travel?"<<endl;

   cout<<"Make your choice"<<endl<<endl;

   cout<<"\n\n\n\n\n\n";

  cout<<setw(60)<<"*************************************"<<endl;
        cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;

   cout<<"Enter your choice"<<endl;

   cin>>ch;

   cout<<endl;
   switch(ch)

   {

   case 1:

    b_seat--;

    if(b_seat<=0)

     cout<<"SORRY NO SEAT AVAILABLE"<<endl;

    else

     cout<<"SEAT AVAILABLE"<<endl;

    break;

   case 2:

    e_seat--;

    if(e_seat<=0)

     cout<<"SORRY NO SEAT AVAILABLE"<<endl;

    else

     cout<<"SEAT AVAILABLE"<<endl;

    break;

   }
   t1.getdata();

   system("CLS");
   booking::show();
   if(ch==1)

   {

    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|BUISNESS CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
            "|Ticket Information:                                                      "<<endl<<
            "|BUISNESS CLASS                                                           "<<endl;

   }

   if(ch==2)

   {

    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                            "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
            "|Ticket Information:                                                      "<<endl<<
            "|ECONOMY CLASS                                                           "<<endl;
   }

      cout<<"|Status: confirmed                                                        "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;
    t1.show();
  }
  else

  {
    cout<<"__________________________________________________________________________"<<endl;
    cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
    cout<<"__________________________________________________________________________"<<endl;

  }
}
 };

 class international:public booking

 {

 protected:

  int b1_seat;

  int e1_seat;

  int choice;

  int c;

  int b;

  int v;

  char g;

    mytime t1;


 public:


  void getdata()

  {

   b=0;

   v=0;

        cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2)AIR BLUE"<<endl;
  cout<<"3)ARAB EMIRATES"<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;

  system ("cls");

  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO ARAB EMIRATES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
  }
   cout<<"\n\nTHESE ARE THE INTERNATIONAL PLACES AVAILABLE"<<endl<<endl;
   cin.ignore();

   for(int i=0;i<10;i++)

   {

    cout<<i_destination[i]<<endl;

   }


   booking::getdata();

   for(int j=0;j<10;j++)

   {


    if(strcmp(i_destination[j],dest)==0)

    {

     v++;

    }

   }
   for( int i=0;i<5;i++)

   {


    if(strcmp(l_destination[i],c_loc)==0)


    {

     b++;

    }


   }
   if(b==1&&v==1)

   {

    cout<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl;

    b1_seat=30;

    e1_seat=40;

    cout<<"In which class you want to travel?"<<endl;


    cout<<"Make your choice"<<endl<<endl;


    cout<<"\n\n\n\n\n\n";

  cout<<setw(60)<<"*************************************"<<endl;
        cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;

  cout<<"Enter your choice"<<endl;

  cin>>choice;

  cout<<endl;

  switch(choice)

  {


  case 1:

   b1_seat--;

   if(b1_seat<=0)

    cout<<"SORRY NO SEAT AVAILABLE"<<endl;

   else

    cout<<"SEAT AVAILABLE"<<endl;

   break;

  case 2:

   e1_seat--;

   if(e1_seat<=0)

    cout<<"SORRY NO SEAT AVAILABLE"<<endl;

   else

    cout<<"SEAT AVAILABLE"<<endl;

   break;

  }

  t1.getdata();



  system("CLS");


  booking::show();

  if(choice==1)

  {

    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|BUISNESS CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
            "|Ticket Information:                                                      "<<endl<<
            "|BUSINESS CLASS                                                           "<<endl;

  }

  if(choice==2)

  {

    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
            "|Ticket Information:                                                      "<<endl<<
            "|ECONOMY CLASS                                                           "<<endl;

  }

  cout<<"|Status: confirmed                                                        "<<endl;

  ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;

  t1.show();
   }
   else

   {
    cout<<"__________________________________________________________________________"<<endl;
    cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
   cout<<"__________________________________________________________________________"<<endl;

   }
}
 };

 class main1

 {
 private:

  char f;

  int menu_choice;

  char a;

 public:


void getdata()
{
m:
   cout<<"\n\n\n\n\n\n";
   cout<<setw(60)<<"*************************************"<<endl;
   cout<<setw(60)<<"*        AIRWAYS RESERVATION        *"<<endl;
   cout<<setw(60)<<"*             MAIN MENU             *"<<endl;
   cout<<setw(60)<<"*        ENTER YOUR CHOICE          *"<<endl;
   cout<<setw(60)<<"*   PRESS 1 FOR LOCAL BOOKING       *"<<endl;
   cout<<setw(60)<<"* PRESS 2 FOR INTERNATIONAL BOOKING *"<<endl;
   cout<<setw(60)<<"*   PRESS 3 FOR SEARCH OF FLIGHTS   *"<<endl;
   cout<<setw(60)<<"*       NOW ENTER YOUR CHOICE:      *"<<endl;
   cout<<setw(60)<<"*************************************"<<endl;

   cin>>menu_choice;

  system("cls");

   passenger* p1;

   booking b1;

   international i1;

   local l1;

   char back;


   switch(menu_choice)

   {

   case 1:


   p1=&l1;

   p1->getdata();

   cout<<"To Go To Main Menu Press b"<<endl;

   cin>>back;



   system("CLS");

   if (back=='b')

   {

    goto m;

   }

   else

   {

    cout<<"\n\n\n\n\n\n";

    cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";

   }


   break;

   case 2:


   p1=&i1;

   p1->getdata();

   cout<<"To Go To Main Menu Press b"<<endl;

   cin>>back;


   system("CLS");

   if (back=='b')

   {

    goto m;

   }

   else

   {

    cout<<"\n\n\n\n\n\n";

    cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";

   }

   break;

   case 3:

   search s1;

   s1.searching();

   cout<<"To Go To Main Menu Press b"<<endl;

   cin>>back;



   system("CLS");

   if (back=='b')

   {

    goto m;

   }

   else

   {

    cout<<"\n\n\n\n\n\n";

    cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";

   }

   break;

}
}
};

//                             BUS CODE


static int p = 0;

class a

{

  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];

public:

  void install();

  void allotment();

  void empty();

  void show();

  void avail();

  void position(int i);

}

bus[10];

void vline(char ch)

{

  for (int i=80;i>0;i--)

  cout<<ch;

}

void a::install()

{

  cout<<"Enter bus no: ";

  cin>>bus[p].busn;

  cout<<"\nEnter Driver's name: ";

  cin>>bus[p].driver;

  cout<<"\nArrival time: ";

  cin>>bus[p].arrival;

  cout<<"\nDeparture: ";

  cin>>bus[p].depart;

  cout<<"\nFrom: \t\t\t";

  cin>>bus[p].from;

  cout<<"\nTo: \t\t\t";

  cin>>bus[p].to;

  bus[p].empty();

  p++;

}

void a::allotment()

{

  int seat;

  char number[5];

  top:

  cout<<"Bus no: ";

  cin>>number;

  int n;

  for(n=0;n<=p;n++)

  {

    if(strcmp(bus[n].busn, number)==0)

    break;

  }

  while(n<=p)

  {

    cout<<"\nSeat Number: ";

    cin>>seat;

    if(seat>32)

    {

      cout<<"\nThere are only 32 seats available in this bus.";

    }

    else

    {

    if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)

      {

        cout<<"Enter passanger's name: ";

        cin>>bus[n].seat[seat/4][(seat%4)-1];

        break;

      }

    else

      cout<<"The seat no. is already reserved.\n";

      }

      }

    if(n>p)

    {

      cout<<"Enter correct bus no.\n";

      goto top;

    }

  }


void a::empty()

{

  for(int i=0; i<8;i++)

  {

    for(int j=0;j<4;j++)

    {

      strcpy(bus[p].seat[i][j], "Empty");

    }

  }

}

void a::show()

{

  int n;

  char number[5];

  cout<<"Enter bus no: ";

  cin>>number;

  for(n=0;n<=p;n++)

  {

    if(strcmp(bus[n].busn, number)==0)

    break;

  }

while(n<=p)

{

  vline('*');

  cout<<"Bus no: \t"<<bus[n].busn

  <<"\nDriver: \t"<<bus[n].driver<<"\t\tArrival time: \t"

  <<bus[n].arrival<<"\tDeparture time:"<<bus[n].depart

  <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<

  bus[n].to<<"\n";

  vline('*');

  bus[0].position(n);

  int a=1;

  for (int i=0; i<8; i++)

  {

    for(int j=0;j<4;j++)

    {

      a++;

      if(strcmp(bus[n].seat[i][j],"Empty")!=0)

      cout<<"\nThe seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<".";

    }

  }

  break;

  }

  if(n>p)

    cout<<"Enter correct bus no: ";

}

void a::position(int l)

{

  int s=0;p=0;

  for (int i =0; i<8;i++)

  {

    cout<<"\n";

    for (int j = 0;j<4; j++)

    {

      s++;

      if(strcmp(bus[l].seat[i][j], "Empty")==0)

        {

          cout.width(5);

          cout.fill(' ');

          cout<<s<<".";

          cout.width(10);

          cout.fill(' ');

          cout<<bus[l].seat[i][j];

          p++;

        }

        else

        {

        cout.width(5);

        cout.fill(' ');

        cout<<s<<".";

        cout.width(10);

        cout.fill(' ');

        cout<<bus[l].seat[i][j];

        }

      }

    }

  cout<<"\n\nThere are "<<p<<" seats empty in Bus No: "<<bus[l].busn;

  }

void a::avail()

{


  for(int n=0;n<p;n++)

  {

    vline('*');

    cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver

    <<"\t\tArrival time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"

    <<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"

    <<bus[n].to<<"\n";

    vline('*');

    vline('_');

  }

}

int main()
{
   system("color 5f");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO  MULTITASKING PROGRAM";
 Sleep(2500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
 Sleep(500);
  cout<<" SHUBHAM RAJPUT";
  Sleep(500);
  cout<<"\n\n\n\t\t                         ROHAN KUMAR SINGH";
 Sleep(3000);
 system("cls");
int z;
cout<<"\n\n\n\n            ENTER 1 FOR AIRWAYS RESERVATION    \n  " ;
cout<<"\n\n            ENTER 2 FOR BUS RESERVATION         \n  " ;
cout<<"\n\n            ENTER 3 FOR FOOD ORDER               \n ";
cin>>z;
if(z==1)
{
 system ("cls");
system("color 5f");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO AIRWAYS RESERVATION SYSTEM";
 Sleep(2500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
 Sleep(500);
  cout<<" SHUBHAM RAJPUT";
  Sleep(500);
  cout<<"\n\n\n\t\t                         ROHAN KUMAR SINGH";
 Sleep(3000);
 system("cls");
 main1 m1;
 m1.getdata();

}
else if(z==2)
{
    system("cls");
system("color 5f");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO BUS RESERVATION SYSTEM";
 Sleep(2500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
 Sleep(500);
  cout<<" SHUBHAM RAJPUT";
  Sleep(500);
  cout<<"\n\n\n\t\t                         ROHAN KUMAR SINGH";
 Sleep(3000);
 //system("cls");

system("cls");

int w;

while(1)

{

    //system("cls");

  cout<<"\n\n\n\n\n";

  cout<<"\t\t\t1.Install\n\t\t\t"

  <<"2.Reservation\n\t\t\t"

  <<"3.Show\n\t\t\t"

  <<"4.Buses Available. \n\t\t\t"

  <<"5.Exit";

  cout<<"\n\t\t\tEnter your choice:-> ";

  cin>>w;

  switch(w)

  {

    case 1:  bus[p].install();

      break;

    case 2:  bus[p].allotment();

      break;

    case 3:  bus[0].show();

      break;

    case 4:  bus[0].avail();

      break;

    case 5:  exit(0);

  }

}

}
else if(z==3)
{
     system("cls");
system("color 5f");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO FOOD ORDER SYSTEM";
 Sleep(2500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
 Sleep(500);
  cout<<" SHUBHAM RAJPUT";
  Sleep(500);
  cout<<"\n\n\n\t\t                         ROHAN KUMAR SINGH";
 Sleep(3000);
 //system("cls");

system("cls");

    char name[30], pizza1[]="Chicken Fazita" ,pizza2[]="Chicken Bar BQ" ,pizza3[]="Peri Peri" ,pizza4[]="Creamy Max", roll1[]="Chicken Chatni Roll", roll2[]="Chicken Mayo Roll", roll3[]="Veg Roll With Fries",bur1[]="Zinger Burger",bur2[]="Chicken Burger",bur3[]="Beef Burger";
	char sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Extream Veg Sandwich";
	char bir1[]="Chicken Biryani", bir2[]="Prawn Biryani", bir3[]="Beef Biryani",gotostart ;
	int choice=0,pchoice,pchoice1, quantity;// time=40;
	beginning:
	//system("CLS");
	cout<<"\t\t\t----------WELCOME COOL FAST FOOD-----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 20);
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Pizzas\n";
	cout<<"2) Burgers\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Rolls\n";
	cout<<"5) Biryani\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"4) "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Flavour would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			break;

			case 2: choice = 500*quantity;
			break;

			case 3: choice = 900*quantity;
			break;


			      }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" Rs.160"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity;
			break;

			case 2: choice = 150*quantity;
			break;

			case 3: choice = 160*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1  "<<sand1<<" Rs.240"<<"\n";
		cout<<"2  "<<sand2<<" Rs.160"<<"\n";
		cout<<"3  "<<sand3<<" Rs.100"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 240*quantity;
			break;

			case 2: choice = 160*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<sand2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n1 "<<roll1<<" Rs.150"<<"\n";
		cout<<"2 "<<roll2<<" Rs.100"<<"\n";
		cout<<"3 "<<roll3<<" Rs.120"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 120*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<roll2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;


			}

 }
}
	else if(choice==5)
	 {
		cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
		cout<<"2 "<<bir2<<" Rs.220"<<"\n";
		cout<<"3 "<<bir3<<" Rs.140"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Biryani you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 160*quantity;
			break;

			case 2: choice = 220*quantity;
			break;

			case 3: choice = 140*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bir2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From COOL FAST FOOD\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}

			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}
}


}
