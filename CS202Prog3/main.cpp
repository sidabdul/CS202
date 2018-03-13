/*
/ Sid Abdul                                                                                                                                                                                             
/ CS202 Emergency Broadcast System Program 3                                                                                                                                                                                          
/ 2/28/2017                                                                                                                                                                                                 
/ The purpose of this program is to simulate a object oriented program with the use of inheritence and operator overloading. This program will simulate an emergency broadcast system which the user will be/ given a menu option of various methods they would like to be contacted in case of an emergency situation. The choices given to the user will be to be contacted through home, cell or work phone, or be contacted through social media site such as facebook or twitter. The user will be given the choice to to make.                                                                                                */

#include "prog3.h"

using namespace std;


const int TEST = 375;


int main()
{


   //Local variables to assist in user input
   char firstname_input[20]; 
   char lastname_input[20]; 
   char number[20]; 
   
   char choice;
   char choice_home;
   char choice_work;
   char choice_cell;
   char choice_facebook;
   char choice_twitter;
   int request;   


   lll_node * list; //Node Object..
   bst * tree; // BST tree structure to hold all contacts
   bst_node * root;//Root node of the tree
   home_phone a; //Home phone object
   work_phone b; //Work phone object
   cell_phone c; //Cell phone object
   facebook d; //Facebook object
   twitter e; //Twitter object
   

   do{
        
        cout << '\n';
        cout << " Welcome To The Emergency Broadcast System Program "  << '\n' <<endl;
        cout << " Please Enter In An Option " << '\n' <<endl;
        cout << " Enter 1 To Enter In A Home Phone Number As An Emergency Contact " << '\n' <<endl;
        cout << " Enter 2 To Enter in A Work Phone Number " << '\n' <<endl;
        cout << " Enter 3 To Enter in A Cell Phone Number " << '\n' <<endl;
        cout << " Enter 4 To Enter in A Facebook Account As A Form Of Emergency Contact " << '\n' <<endl;
        cout << " Enter 5 To Enter in A Twitter Account As A Form Of Emergency Contact " << '\n' <<endl;
        cout << " Enter 6 To Exit Emergency Broadcast System " << '\n' <<endl;
        cout << '\n';
        
        cin >> request;
        cin.ignore(3,'\n');


       if(request == 1)
       {
          
         do{

         cout << " Enter In A First Name " <<endl;
         cin.get(firstname_input, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In A Last Name " <<endl;
         cin.get(lastname_input, 20, '\n');
         cin.ignore(20,'\n');
   
         cout << " Enter In A Home Phone Number " <<endl;
         cin.get(number, 20, '\n');
         cin.ignore(20,'\n');
        
         tree -> insert_home(root, firstname_input, lastname_input, number); 
         a.enter_first_name(firstname_input);
         a.enter_last_name(lastname_input);
         a.enter_phone_num(number);

         cout << " Would you like to add another contact? "<<endl;
         cin >> choice_home;
         cin.ignore(3,'\n');
    
         }while (toupper(choice_home)=='Y');

         cout << " Here is the contact information entered " <<endl;
         
         cout << '\n';
         a.display();

       }


        if(request == 2)
       {

         do{

         cout << " Enter In A First Name " <<endl;
         cin.get(firstname_input, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In A Last Name " <<endl;
         cin.get(lastname_input, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In A Work Phone Number " <<endl;
         cin.get(number, 20, '\n');
         cin.ignore(20,'\n');
         
         tree -> insert_home(root, firstname_input, lastname_input, number); 
         b.enter_first_name(firstname_input);
         b.enter_last_name(lastname_input);
         b.enter_work_num(number);

         cout << " Would you like to add another contact? "<<endl;
         cin >> choice_cell;
         cin.ignore(3,'\n');
       
         }while (toupper(choice_work)=='Y');

         cout << " Here is the contact information entered " <<endl;
         cout << '\n';
         b.display();

       }


       if(request == 3)
       {

 
         do{

         cout << " Enter In A First Name " <<endl;
         cin.get(firstname_input, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In A Last Name " <<endl;
         cin.get(lastname_input, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In A Cell Phone Number " <<endl;
         cin.get(number, 20, '\n');
         cin.ignore(20,'\n');
         
         tree -> insert_home(root, firstname_input, lastname_input, number); 
         c.enter_first_name(firstname_input);
         c.enter_last_name(lastname_input);
         c.enter_cell_num(number);

         cout << " Would you like to add another contact? "<<endl;
         cin >> choice_cell;
         cin.ignore(3,'\n');
       
         }while (toupper(choice_cell)=='Y');


         cout << " Here is the contact information entered " <<endl;
         cout << '\n';
         c.display();

       }


       if(request == 4)
       {


         do{

         cout << " Enter In A First Name " <<endl;
         cin.get(firstname_input, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In A Last Name " <<endl;
         cin.get(lastname_input, 20, '\n');
         cin.ignore(20,'\n');

         
         tree -> insert_home(root, firstname_input, lastname_input, number); 
         d.enter_facebook_first_name(firstname_input);
         d.enter_facebook_last_name(lastname_input);
 

         cout << " Would you like to add another contact? "<<endl;
         cin >> choice_facebook;
         cin.ignore(3,'\n');

         }while (toupper(choice_facebook)=='Y');

         cout << " Here is the contact information entered " <<endl;
         cout << '\n';
         d.display();

       }
  

       if(request == 5)
       {


         do{

         cout << " Enter In A First Name " <<endl;
         cin.get(firstname_input, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In A Last Name " <<endl;
         cin.get(lastname_input, 20, '\n');
         cin.ignore(20,'\n');

         
         tree -> insert_home(root, firstname_input, lastname_input, number); 
         e.enter_twitter_first_name(firstname_input);
         e.enter_twitter_last_name(lastname_input);
 

         cout << " Would you like to another contact? "<<endl;
         cin >> choice_twitter;
         cin.ignore(3,'\n');

         }while (toupper(choice_twitter)=='Y');

         cout << " Here is the contact information entered " <<endl;
         cout << '\n';
         e.display();

       }

 

       if(request == 6)
       {

            cout << " Goodbye! "<<endl;
            exit(0);
       }

       cout << " Would you like to return to the main menu ? "<<endl;
       cin >> choice;
       cin.ignore(3,'\n');
    
    }while (toupper(choice)=='Y');


    cout << '\n';
    cout << "Goodbye! "<<endl;
    cout << '\n';
}




