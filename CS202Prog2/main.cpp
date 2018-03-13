/*                                                                                                                                                                          
/ Sid Abdul                                                                                                                                                                          /                   
/ CS202 Program 2                                                                                                                                                                       /                   
/ 2/04/2017                                                                                                                                                                              /                           
/ The purpose of this program is to simulate a object oriented program with the use of dynamic binding that will create a transit rider program that 
/ will allow a rider to choose between 3 different forms of transit services derive from a common abstract base class; MAX transit, Streetcar, 
/ and BUS lines. The program will give the rider the abilty to choose a form of transposrttion among the 3 forms listed above, and through dynamic binding 
/ give the rider the abilty to give a review on the status of the transit type such as in service or delayed, how busy the system is at a given time,
/  was the ride enjoyable(reccommend to others?), would the rider want to use this form of transit in the future.                                                                        /                                                                                                                                                                                        /                   
*/


#include "prog2.h"

using namespace std;


const int TEST = 375;


int main()
{

    //Local variables to assist in user input
   char transit_in[20]; 
   char busy[20]; 
   char enjoy[20]; 
   char ride[20];
   char choice;
   char choice_max;
   char choice_streetcar;
   char choice_bus;
   
   int request;   


   MAX_list a; // Instance of Max Class' Created Here
   Streetcar_list b; // Instance of Not Required Class' Created Here
   Bus_list c;  // Instance of Core Class' Created Here
   
   node * list; //Node Object..


   //Using pointers to the base class to invoke the correct function 
   //during runtime to utilize dynamic binding and polymorphism
   transit_type * max_ptr = new MAX_transit;

   transit_type * streetcarptr = new Streetcar_transit;

   transit_type * busptr = new Bus_transit;



   do{
        
        cout << '\n';
        cout << " Welcome To The Transit Rider Review Program "  << '\n' <<endl;
        cout << " Please Enter An Option " << '\n' <<endl;
        cout << " Enter 1 To Enter In A Max Review  " << '\n' <<endl;
        cout << " Enter 2 To Enter in A Streetcar Review " << '\n' <<endl;
        cout << " Enter 3 To Enter in A Bus Review " << '\n' <<endl;
        cout << " Enter 5 To Quit Game " << '\n' <<endl;
        
        cin >> request;
        cin.ignore(3,'\n');


       if(request == 1)
       {
          
         do{

         cout << " Enter In Max Status " <<endl;
         cin.get(transit_in, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In How Busy The Max Is " <<endl;
         cin.get(busy, 20, '\n');
         cin.ignore(20,'\n');
   
         cout << " Enter In Your Enjoyment Level " <<endl;
         cin.get(enjoy, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Would you ride again? " <<endl;
         cin.get(ride, 20, '\n');
         cin.ignore(20,'\n');


         a.build_MAX_list(transit_in, busy, enjoy, ride);




         cout << " Would you like to add another MAX Review? "<<endl;
         cin >> choice_max;
         cin.ignore(3,'\n');
    
         }while (toupper(choice_max)=='Y');

         cout << " Here are the MAX Reviews entered In " <<endl;
         
         cout << '\n';
         a.display_MAX();

       }


        if(request == 2)
       {

         do{



         cout << " Enter In Streetcar Status " <<endl;
         cin.get(transit_in, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In How Busy The Streetcar Is " <<endl;
         cin.get(busy, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In Your Enjoyment Level " <<endl;
         cin.get(enjoy, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Would you ride again? " <<endl;
         cin.get(ride, 20, '\n');
         cin.ignore(20,'\n');


         b.build_Streetcar_list(transit_in, busy, enjoy, ride);

         cout << " Would you like to add another Streetcar Review? "<<endl;
         cin >> choice_max;
         cin.ignore(3,'\n');

         }while (toupper(choice_streetcar)=='Y');

         cout << " Here are the Streetcar Reviews entered In " <<endl;

         cout << '\n';
         b.display_Streetcar();
  
        }

       if(request == 3)
       {


         do{

         cout << " Enter In BUS Status " <<endl;
         cin.get(transit_in, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In How Busy The BUS Is " <<endl;
         cin.get(busy, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Enter In Your Enjoyment Level " <<endl;
         cin.get(enjoy, 20, '\n');
         cin.ignore(20,'\n');

         cout << " Would you ride again? " <<endl;
         cin.get(ride, 20, '\n');
         cin.ignore(20,'\n');


         c.build_Bus_list(transit_in, busy, enjoy, ride);




         cout << " Would you like to add another BUS Review? "<<endl;
         cin >> choice_max;
         cin.ignore(3,'\n');

         }while (toupper(choice_bus)=='Y');

         cout << " Here are the BUS Reviews entered In " <<endl;

         cout << '\n';
         c.display_Bus();



       }

       
       if(request == 5)
       {

            cout << " Goodbye! "<<endl;
            exit(0);
       }

       cout << " Would you like to return to the main menu ? "<<endl;
       cin >> choice;
       cin.ignore(3,'\n');
    
    }while (toupper(choice)=='Y');  



  return 0;

}
