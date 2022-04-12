#include <iostream>
#include<string.h>
#include <stdlib.h>
#include<iomanip>
#include<conio.h>
#include <fstream>
using namespace std;

    int planning();
    int listening();
    string name="---"; string sn ="---"; string d="---"; string p="---"; string start="---"; string ending="---";
    string place;
int rows,columns;


int main()
{
    selection:
    char selection;
    for(int t=0;t<1;t++) {
    cout<<"\n Seat Planning And Booking System";
    cout<<"\n =======";
    cout<<"\n 1 for Planner";
    cout<<"\n 2 for Listener";
    cout<<"\n Enter selection : ";
    cin>>selection;

    if(selection == '1') {planning();}
    else if (toupper(selection) == 'P'){planning();}


    }
    return 0;
}
int planning()
{
    /*char name[100];
    char sn[100];
    char d[100];
    char p[100];
    char ses[50];*/
    username:

    cout << "Enter the speaker name : " ;
    cin >> name; //if(name == "---"){goto username;}

    seminar:
    cout<<"Enter the name of the seminar : ";
    cin >> sn;// if(sn == "---"){goto seminar;}

    date:
    cout<<"Enter the date of the seminar : ";
    cin >> d; //if(d == "---") {goto date;}

    place:
    cout<<"Enter the place of the seminar : ";
    cin >> p; //if(place == "---") {goto place;}

    Starting:
    cout<<"Enter the starting time of the seminar : ";
    cin >> start; //if(start == "---") {goto Starting;}

    Ending:
    cout << "Enter the ending time of the seminar : ";
    cin >> ending; //if(ending == "---") {goto Ending;}


    cout << "Please enter the number of columns of seats : ";
    cin >> columns;
    cout << "Please enter the number of rows of seats : ";
    cin >> rows;



    listening();
    return 0;
}


int listening()
{
    string NAME,RENAME,PHONE,EMAIL,REPHONE,REEMAIL;
    int pickedrow,pickedcolumn,Pickedcolumn,Pickedrow,numberofpeople,initialization,recolumn,rerow,Recolumn,Rerow;
    string revalue;
    int total=0;
    int XCOUNTER=0;
    int timescounter=0;
    int remaining=1;
    int ans;
    int ANS;
    total=columns*rows;
    string seats[rows][columns];
    string username[rows][columns];
    string phone[rows][columns];
    string email[rows][columns];
    string waitinglist[rows][columns];
    for(int a=0; a<rows; a++){ for(int b=0;b<columns;b++){seats[a][b] = "0"; }}
    cout << "Do you want to start booking? (1 for YES , 0 for NO ) : ";
    cin >> initialization;
    while(initialization == 1)
    {
        /*cout << "Are you a Planner or a Listener? : ";
       cin >> ans;

        if(ans == 'P'){cout << "Plese Enter the number of columns : "; cin >> columns; cout << "Please enter the number of rows : "; cin >> rows;}
        string seats[columns][rows];
        for(int a=0; a<columns; a++){ for(int b=0;b<rows;b++){seats[a][b] = "0"; }}


        if(ans == 'L'){*/

       /* if(remaining==0){cout << "Sorry!  The seats have been fully booked!" <<endl; initialization=0;}
        cout << "Do you want to book another seat? (1 for YES , 0 for NO ) : ";

    cin >> initialization; */

    //cout << endl << endl << endl << "initialization = " << initialization << endl <<endl <<endl;

    cout << "Press 1 to clear the above outputs or Press 0 to not clear the above outputs : " ;
        cin >> ANS;
        if(ANS == 1){system("cls");}

       // cout << "timescounter = " << timescounter<<endl;

    userchoose:
   // if(initialization == 0){break;}

    cout <<endl <<endl << "==================================";
    cout <<endl << "Seat Planning And Booking System"  <<endl;
    cout << "==================================" << endl << endl ;

        cout << endl << endl << endl << endl << "NAME OF SPEAKER            : " << name <<endl;
        cout << "NAME OF SEMINAR            : " << sn <<endl;
        cout << "PLACE OF SEMINAR           : " << p << endl;
        cout << "DATE OF SEMINAR            : " << d << endl;
        cout << "STARTING TIME              : " << start << endl;
        cout << "ENDING TIME                : " << ending << endl;


       if(timescounter >0) {cout << endl << endl << " ( " << Pickedrow << " , " << Pickedcolumn<< " ) has been  succefully reserved! " <<endl;
        cout <<endl << XCOUNTER << " seats have been booked " <<endl;cout <<  remaining  << " are remaining " << endl<<endl;}

       // cout <<  remaining  << " are remaining " << endl;
        cout << "   ROWS  |                          COLUMNS                       "   <<endl ;
        cout << "      "  << "     |";
        for(int a=0; a<columns; a++)
            {
                cout << " " <<a+1 << " |";
        }
        //if(remaining==0){cout << "Sorry! All the seats have been fully booked!" <<endl;}

        // cout << " ( " << Pickedcolumn << " , " << Pickedrow << " ) has been  succefully reserved! " <<endl;
        //cout <<endl << XCOUNTER << " seats have been booked " <<endl;

        //cout <<  remaining  << " are remaining " << endl;

        cout << endl << " _____________________________________________________________________________";
        for(int a=0; a<rows; a++)
        {
                if(a+1 <=9)
                 {cout << endl << "     " << a+1 << "     |";   }
        else { cout <<endl << "    " << a+1 << "     |";}
         for(int b=0; b<columns; b++)
            {
                if(b+1 <=9)
                {cout << " " << seats[a][b] << " |";}
         else{ cout << "  " << seats[a][b] << " |";}
            }
        }
        cout << endl << " _____________________________________________________________________________";



        cout << endl <<"Do you want to book another seat? (1 for YES , 0 for NO ) : ";

    cin >> initialization;
    if(initialization == 0)
        {
           for(int z=0;z<rows;z++){for(int y=0;y<columns;y++){cout << " ( " << z+1 << " , " << y+1 << " ) is taken by " << username[z][y]<<  "  PhNo.= " << phone[z][y] << "  Email = " << email[z][y] <<endl; } }


            cout << endl << "Do you want to rearrange a seat thar has  already been booked ?(1 for YES | ) for NO) :  ";
        cin >> ans;
        while(ans == 1)
        {
            cout << "Choose the column to rearrange : ";
            cin >> Recolumn;
            cout << "Choose the row to arrange : ";
            cin >> Rerow;

            recolumn = Recolumn-1;
            rerow = Rerow -1;
            cout << "Input X if there's another person |   Input 0 if there is no person to book : ";
            cin >> revalue;
            seats[rerow][recolumn] = revalue;
            if(revalue == "X") {
                    cout << "Enter the name to replace : ";
            cin >> RENAME;
            cout << "Enter the phone number : ";
            cin >> REPHONE;
            cout << "Enter the email : ";
            cin >> REEMAIL;

                    username[rerow][recolumn] = RENAME;
                    phone[rerow][recolumn] = REPHONE;
                    email[rerow][recolumn] = REEMAIL;}

           cout <<endl <<endl << "==================================";
    cout <<endl << "Seat Planning And Booking System"  <<endl;
    cout << "==================================" << endl << endl ;

        cout << endl << endl << endl << endl << "NAME OF SPEAKER            : " << name <<endl;
        cout << "NAME OF SEMINAR            : " << sn <<endl;
        cout << "PLACE OF SEMINAR           : " << p << endl;
        cout << "DATE OF SEMINAR            : " << d << endl;
        cout << "STARTING TIME              : " << start << endl;
        cout << "ENDING TIME                : " << ending << endl;


       if(timescounter >0) {cout << endl << endl << " ( " << Pickedrow << " , " << Pickedcolumn << " ) has been  succefully reserved! " <<endl;
        cout <<endl << XCOUNTER << " seats have been booked " <<endl;cout <<  remaining  << " are remaining " << endl<<endl;}

       // cout <<  remaining  << " are remaining " << endl;
        cout << "   ROWS  |                          COLUMNS                       "   <<endl ;
        cout << "      "  << "     |";
        for(int a=0; a<columns; a++)
            {
                cout << " " <<a+1 << " |";
        }
        //if(remaining==0){cout << "Sorry! All the seats have been fully booked!" <<endl;}

        // cout << " ( " << Pickedcolumn << " , " << Pickedrow << " ) has been  succefully reserved! " <<endl;
        //cout <<endl << XCOUNTER << " seats have been booked " <<endl;

        //cout <<  remaining  << " are remaining " << endl;

        cout << endl << " _____________________________________________________________________________";
        for(int a=0; a<rows; a++)
        {
                if(a+1 <=9)
                 {cout << endl << "     " << a+1 << "     |";   }
        else { cout <<endl << "    " << a+1 << "     |";}
         for(int b=0; b<columns; b++)
            {
                if(b+1 <=9)
                {cout << " " << seats[a][b] << " |";}
         else{ cout << "  " << seats[a][b] << " |";}
            }
        }
        cout << endl << " _____________________________________________________________________________" <<endl;

         for(int z=0;z<rows;z++){for(int y=0;y<columns;y++){cout << " ( " << z+1 << " , " << y+1 << " ) is taken by " << username[z][y] << "  PhNo.= " << phone[z][y] << "  Email = " << email[z][y]<<endl; } }

            cout << endl << "Do you want to rearrange a seat that has  already been booked ? :  ";
        cin >> ans;

        }


            break;
    }





        cout << endl << "Choose a preferred Column : ";
        cin >> Pickedcolumn;
        cout << "Choose a preferred Row : ";
        cin >> Pickedrow;

        timescounter++;

         //if(seats[pickedcolumn][pickedrow] == "X"){cout << "Sorry! This seat is already taken by M.R " << username[pickedcolumn][pickedrow] << ". Please choose another one"<<endl;goto userchoose;}

        cout<< "Enter your name : ";
        cin >> NAME;
        cout<< "Enter your phone number : ";
        cin >> PHONE;
        cout << "Enter your email address : ";
        cin >> EMAIL;
        /*cout << "Enter your email: ";
        cin>>EMAIL;
        ofstream MyFile;
        MyFile.open("hw.txt");
        MyFile<<NAME<<"     "<<EMAIL<<endl;
        MyFile.close(); */
        /*  cout << "Press 1 to clear the above outputs or Press 0 to not clear the above outputs : " ;
        cin >> ANS;
        if(ANS == 1){system("cls");} */

        pickedcolumn = Pickedcolumn-1;
        pickedrow = Pickedrow -1;
        if(seats[pickedrow][pickedcolumn] == "X"){cout << "Sorry! This seat is already taken. Please choose another one"<<endl;cout << "Do you want to book another seat? (1 for YES , 0 for NO ) : ";

    cin >> initialization;goto userchoose;}
       // cout << " ( " << Pickedcolumn << " , " << Pickedrow << " ) has been  succefully reserved! " <<endl;
        XCOUNTER=0;
        remaining=0;
       /* for(int a=0; a<columns; a++){for(int b=0; b<rows; b++){ if(seats[a][b]== "X") {XCOUNTER++;} } }
        remaining = total - XCOUNTER;
        cout << "XCOUNTER = " << XCOUNTER;
        cout << endl << "TOTAL = " << total <<endl;
        cout << "REMAINING = " << remaining << endl; */

       // username[pickedcolumn][pickedrow] = NAME;

        if(pickedcolumn > columns || pickedrow > rows){cout << "The seat number is invalid! Please choose another one" <<endl; goto userchoose;}


       // if(seats[pickedcolumn][pickedrow] == "X"){cout << "Sorry! This seat is already taken by M.R " << username[pickedcolumn][pickedrow] << ". Please choose another one"<<endl;goto userchoose;}
        seats[pickedrow][pickedcolumn] = "X";
        username[pickedrow][pickedcolumn] = NAME;
        phone[pickedrow][pickedcolumn] = PHONE;
        email[pickedrow][pickedcolumn] = EMAIL;
        for(int a=0; a<rows; a++){for(int b=0; b<columns
        ; b++){ if(seats[a][b]== "X") {XCOUNTER++;} } }
        remaining = total - XCOUNTER;

       /*  cout << " ( " << Pickedcolumn << " , " << Pickedrow << " ) has been  succefully reserved! " <<endl;
        cout <<endl << XCOUNTER << " seats have been booked " <<endl;

        cout <<  remaining  << " are remaining " << endl; */


        if(remaining==0){cout << "Sorry!  The seats have been fully booked!" <<endl;}
       /* cout << "Do you want to book another seat? (1 for YES , 0 for NO ) : ";

    cin >> initialization; */




       /* cout << "Press 1 to clear the above outputs or Press 0 to do nothing : " ;
        cin >> ANS;
        if(ANS == 1){system("cls");} */


    }
    return 0;
}



