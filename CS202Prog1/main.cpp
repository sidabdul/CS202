/*                                                                                                                                                                                                          
/ Sid Abdullahi                                                                                                                                                                                             
/ CS202 Program 1                                                                                                                                                                                           
/ 1/18/2017                                                                                                                                                                                                          
/ The purpose of this program is to simulate a object oriented program that will create a streetcar scheduling program that 
/ will allow a controller to observe where all of the streetcars are located.                                                                                                                                                                                     
/                                                                                                                                                                                                           
*/


#include "prog1.h"

using namespace std;


const int TEST = 375;


int main()
{

 /*Stops objects are created here for the 2 type of stops, A-Loop, North-South stops*/
 loop_stops obj;
 north_south_stops obj1;
 load_loop_stops(obj);
 load_north_south_stops(obj1);

 //define objects for the program here..
 track_type a_tracktype;
 vertex a_vertex;
 graph a_graph;
 graphnode a_graphnode;
 location a_location();


 /*Create streetcar objects here*/
 streetcar streetcarobj1; 
 streetcarobj1.set_vin("S0005");
 streetcarobj1.set_current_location("SW 10TH & ALDER");
 streetcarobj1.set_status("IN");
 streetcarobj1.set_max_occupants("40");
 

 streetcar streetcarobj2; 
 streetcarobj2.set_vin("S0022");
 streetcarobj2.set_current_location("SW 10TH & CLAY");
 streetcarobj2.set_status("IN");
 streetcarobj2.set_max_occupants("40");


 streetcar streetcarobj3;
 streetcarobj3.set_vin("S0029");
 streetcarobj3.set_current_location("CENTRAL LIBRARY");
 streetcarobj3.set_status("IN");
 streetcarobj3.set_max_occupants("50");


 streetcar streetcarobj4;
 streetcarobj4.set_vin("S0033");
 streetcarobj4.set_current_location("NW 10TH & COUCH");
 streetcarobj4.set_status("IN");
 streetcarobj4.set_max_occupants("40");


 streetcar streetcarobj5;
 streetcarobj5.set_vin("S0038");
 streetcarobj5.set_current_location("NW 10TH & GLISAN");
 streetcarobj5.set_status("IN");
 streetcarobj5.set_max_occupants("30");


 streetcar streetcarobj6;
 streetcarobj6.set_vin("S0044");
 streetcarobj6.set_current_location("NW 14TH & NORTHRUP");
 streetcarobj6.set_status("IN");
 streetcarobj6.set_max_occupants("50");


 streetcar streetcarobj7;
 streetcarobj7.set_vin("S0048");
 streetcarobj7.set_current_location("NW 18TH & NORTHRUP");
 streetcarobj7.set_status("IN");
 streetcarobj7.set_max_occupants("40");


 streetcar streetcarobj8;
 streetcarobj8.set_vin("S0055");
 streetcarobj8.set_current_location("NW 22ND & LOVEJOY");
 streetcarobj8.set_status("IN");
 streetcarobj8.set_max_occupants("40");




  //Variables to assist in user input
  int request;
  char choice;
  char entry[100];


  do{

     cout << '\n';
     cout << " Welcome To The Streetcar Tracker "  << '\n' <<endl;
     cout << " Please Enter An Option " << '\n' <<endl;
     cout << " Enter 1 To Disply All The Loop Stops " << '\n' <<endl;
     cout << " Enter 2 To Disply All The North/South Stops " << '\n' <<endl;
     cout << " Enter 3 To Disply All The Street Cars With Their Current Location " << '\n' <<endl;
     cout << " Enter 4 To Exit Program " << '\n' <<endl;

     cout << '\n';
     cin >> request;
     cin.ignore(3,'\n');


     if(request == 1)
     {

       cout << "LOOP LINES STOPS ARE BELOW : \n\n";
       obj.display_stops();

     }


     if(request == 2)
     {
     
       cout << "NS LINES STOPS ARE BELOW : \n\n";
       obj1.display_stops();
     
     }


     if(request == 3)
     {

       cout << "ALL STREETCARS ARE BELOW : \n\n";

       cout << " Street Car VIN : " << streetcarobj1.get_vin()  << '\n';  
       cout << '\n';
       cout << " Current Location : " << streetcarobj1.get_location() << '\n';
       cout << '\n';
       cout << " Current Status : " << streetcarobj1.get_status() << '\n';   
       cout << '\n';
       cout << " Number of Occupants : " << streetcarobj1.get_occupants() << '\n';
       cout << "\n\n";
       cout << " Street Car VIN : " << streetcarobj2.get_vin() << '\n';
       cout << '\n';
       cout << " Current Location : " << streetcarobj2.get_location() << '\n';
       cout << '\n';
       cout << " Current Status : " << streetcarobj2.get_status() << '\n';
       cout << '\n';
       cout << " Number of Occupants : " << streetcarobj2.get_occupants() << '\n';
       cout << "\n\n";
       cout << " Street Car VIN : " << streetcarobj3.get_vin()<< '\n';
       cout << '\n';
       cout << " Current Location : " << streetcarobj3.get_location() << '\n';
       cout << '\n';
       cout << " Current Status : " << streetcarobj3.get_status() << '\n';
       cout << '\n';
       cout << " Number of Occupants : " << streetcarobj3.get_occupants() << '\n';
       cout << "\n\n";
       cout << " Street Car VIN : " << streetcarobj4.get_vin()<< '\n';
       cout << '\n';
       cout << " Current Location : " << streetcarobj4.get_location() << '\n';
       cout << '\n';
       cout << " Current Status : " << streetcarobj4.get_status() << '\n';
       cout << '\n';
       cout << " Number of Occupants : " << streetcarobj4.get_occupants() << '\n';
       cout << "\n\n";
       cout << " Street Car VIN : " << streetcarobj5.get_vin() << '\n';
       cout << '\n';
       cout << " Current Location : " << streetcarobj5.get_location() << '\n';
       cout << '\n';
       cout << " Current Status : " << streetcarobj5.get_status() << '\n';
       cout << '\n';
       cout << " Number of Occupants : " << streetcarobj5.get_occupants() << '\n';
       cout << "\n\n";
       cout << " Street Car VIN : " << streetcarobj6.get_vin() << '\n';
       cout << '\n';
       cout << " Current Location : " << streetcarobj6.get_location() << '\n';
       cout << '\n';
       cout << " Current Status : " << streetcarobj6.get_status() << '\n';
       cout << '\n';
       cout << " Number of Occupants : " << streetcarobj6.get_occupants() << '\n';
       cout << "\n\n";
       cout << " Street Car VIN : " << streetcarobj7.get_vin() << '\n';
       cout << '\n';
       cout << " Current Location : " << streetcarobj7.get_location() << '\n';
       cout << '\n';
       cout << " Current Status : " << streetcarobj7.get_status() << '\n';
       cout << '\n';
       cout << " Number of Occupants : " << streetcarobj7.get_occupants() << '\n';
       cout << "\n\n";
       cout << " Street Car VIN : " << streetcarobj8.get_vin() << '\n';
       cout << '\n';
       cout << " Current Location : " << streetcarobj8.get_location() << '\n';
       cout << '\n';
       cout << " Current Status : " << streetcarobj8.get_status() << '\n';
       cout << '\n';
       cout << " Number of Occupants : " << streetcarobj8.get_occupants() << '\n';

       cout << "\n\n";

     }

      if(request == 4)
     {

       cout << "Goodbye!\n";
       exit(0);     

     }

       cout << " Would you like to return to the main menu ? "<<endl;
       cin >> choice;
       cin.ignore(3,'\n');

    }while (toupper(choice)=='Y');

    cout << '\n';

 return 0;

}
