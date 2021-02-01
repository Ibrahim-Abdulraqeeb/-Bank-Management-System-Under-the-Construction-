//the password is : 5001200.
#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<fstream>
void endproject()
{
	system("cls");
system("color f0");
printf("\n\n\n\n\t\t\tThis project is produced Ibrahim Abdulraqeeb Qahtan.\n\t\t\tThank you..\n");
system("pause");
}
using namespace std;
struct   account{
	int ID;
	string name,father,grandpa;
	int Age,data,phone;
int x;
int pass,pass1;
};
main()
{
	string good;
	oop:good;
	account BMS;
	//This is not the final image of the program that will be developed in the coming years.
	//And thanks to all.
	
	
 ofstream fout;
		     ifstream fin;
for(;;)
{
	p:
		s:
			//This is the start menu, which includes the password.
	printf("\n\n\t\tEnter the password to login:");
	system("color 0f");
	cin>>BMS.pass;
	if(BMS.pass==5001200)
	{
		system("color 2");
    printf("\n\nPassword Match!\nLOADING.");
    Sleep(300);
    system("cls");
    	printf("\n\n\t\tEnter the password to login:*******");
      printf("\n\n\nPassword Match!\nLOADING..");
    Sleep(300);
        system("cls");
        	printf("\n\n\t\tEnter the password to login:*******");
      printf("\n\n\nPassword Match!\nLOADING...");
    Sleep(300);
        system("cls");
        	printf("\n\n\t\tEnter the password to login:*******");
      printf("\n\n\nPassword Match!\nLOADING....");
       Sleep(300);
        system("cls");
        	printf("\n\n\t\tEnter the password to login:*******");
      printf("\n\n\nPassword Match!\nLOADING.....");
             Sleep(300);
        system("cls");
        	printf("\n\n\t\tEnter the password to login:*******");
      printf("\n\n\nPassword Match!\nLOADING......");
                   Sleep(300);
        system("cls");
        system("color 9");
        m:
              system("color 9");
 printf("\n\n\t\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM\n\n\n\t\t\t  ");
 cout<<"============= WELCOME TO THE MAIN MENU =============";
 cout<<"\n\n\t\t\t\t1.Create new account.";
 cout<<"\n\t\t\t\t2.View all customer data.";
  cout<<"\n\t\t\t\t3.Financial Transactions.";
 cout<<"\n\t\t\t\t4.Investments.";
 cout<<"\n\t\t\t\t5.Return to the main page.";
 cout<<"\n\t\t\t\t6.Exet.";
       cout<<"\n\n\n\n\n\t\t\t\tEnter your choice:";
       cin>>BMS.x;
       if(BMS.x==1)
       {
       	system("cls");  
       	error:
		cout<<"*To return to the main menu enter (0)";
       	cout<<"\n\n\t\t\t\t  ==ADD RECORD==";
       	cout<<"\n\n\t\t\t\tenter your name:";
       	cin>>BMS.name;
       	if(BMS.name=="0")
       	{
       		system("cls");
       		goto m;
		   }
		   	cout<<"\t\t\t\tenter your father name:";
       	cin>>BMS.father;
       	if(BMS.father=="0")
       	{
       		system("cls");
       		goto m;
		   }
		      	cout<<"\t\t\t\tenter your grand father name:";
       	cin>>BMS.grandpa;
       	if(BMS.grandpa=="0")
       	{
       		system("cls");
       		goto m;
		   }
       	cout<<"\t\t\t        enter your Age:";
       	cin>>BMS.Age;
       	if( BMS.Age==0 )
       	{
       		system("cls");
       		goto m;
		   }
		   cout<<"\t\t\t        enter your ID number:";
		   cin>>BMS.ID;
		   if(BMS.ID==0)
       	{
       		system("cls");
       		goto m;
		   }
		   cout<<"\t\t\t        enter your phone number:";
		   cin>>BMS.phone;
		    if( BMS.phone==0)
       	{
       		system("cls");
       		goto m;
		   }
		   system("cls");
		 cout<<"\n\n\n\tyour name is("<<BMS.name<<" "<<BMS.father<<" "<<BMS.grandpa
		 <<").your Age is("<<BMS.Age<<
		   ").your ID number is("<<BMS.ID<<").Your phone number is("
		   <<BMS.phone<<")."<<endl;
		   cout<<"\n\n\n\t\t\tDoes data correctly enter 1 error enter 0:";
		   cin>>BMS.data;
		   if(BMS.data==1)
		   {
		   	fout.open("name.txt",ios::app);
        fout<<"\n"<<BMS.name;
        fout.close();
        	fout.open("name.txt",ios::app);
        fout<<" "<<BMS.father;
        fout.close();
        	fout.open("name.txt",ios::app);
        fout<<" "<<BMS.grandpa;
        fout.close();
             fout.open("name.txt",ios::app);
        fout<<"\t          "<<BMS.Age;
        fout.close();
           fout.open("name.txt",ios::app);
        fout<<"\t          "<<BMS.ID;
        fout.close();
        	     fout.open("name.txt",ios::app);
        fout<<"\t          "<<BMS.phone;
        fout<<"\n******************************"
		<<"***********************"
		<<"******************"
		<<"***********************\n";
        fout.close();
		   	cout<<"\n\n\n\t\t\t*A new account has been added successfully";
		   	Sleep(1000);
		   	system("cls");
		   	goto m;
		   }
		   else if(BMS.data==0)
		   {
		   	system("cls");
		   	goto error;
		   }
	   }
	     else if(BMS.x==2)
	   {
	   		   system("cls");
	   		   system("color 0f");
	   		   fin.open("name.txt");
	   		   string read;
	   		   for(;fin.eof()!=true;)
	   		   {
	   		   	getline(fin,read);
	   		   	cout<<read<<"\n";
	   		
				  }
	   	fin.close();
		   cout<<"*Press Enter to return to the home page.\n\n\t\t";
	   	system("pause");
	   	system("cls");
	   	goto m;
	   	
	   }
	    else if(BMS.x==3)
	   {
	   		   system("cls");
	   		   system("color 0D");
	   		   cout<<"\n\n\t\t\t\t  ==FINANCIAL TRANSACTIONS==";
}
 else if(BMS.x==4)
	   {
	   		   system("cls");
	   		   system("color 0f");
	   		   
}
	   else if(BMS.x==5)
	   {
	   		   system("cls");
	   		   system("color 0f");
	   goto p;
	   }

	   	   else if(BMS.x==6)
	   	   {
	   	   	goto f;
			  }
			  else if(BMS.x>5)
			  {
			  	system("cls");
			  	cout<<"\n\n\t\t\t\t  *The number is not in the list";
			  	cout<<" \n\n\t\t\t\t  Please choose a number from the list.";
			  	Sleep(2000);
			  	system("cls");
			  	goto m;
			  }


	break;
//To stop continuity.
	system("pause");
	}
	else
	system("color 4");
	//Wrong password list.
	cout<<"The password is wrong!";
 printf("\nEnter 1 to try again and 0 to exit:");
 cin>>BMS.pass1;
 if(BMS.pass1==1)
 {
 	system("cls");
 	goto s;
 }
 else if(BMS.pass1==0)
 {
 	f:
 	endproject();
 	
break;


 }




}
/*
        return 0;
/*/   
     //A phrase return 0; that does not affect the program, but only for arrangement.

}

