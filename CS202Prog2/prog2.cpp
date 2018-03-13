/*  
/ Sid Abdullahi 
/
/ CS202 - WI2017
/
/ prog2.cpp
/
/ This is the .cpp implementaion file for the transit rider history program. 
/ It contains all the definitions for all the class members of the program.
/
*/



#include "prog2.h"

using namespace std;


//transit_type class constructor
transit_type::transit_type()
{
}


//transit_type class destructor
transit_type::~transit_type()
{
}


//virtual display function
void transit_type::display()
{
}


//pure virtual enter transit status function, empty body to allow for dynamic binding during runtime..             
void transit_type::enter_transit_status(const char * input_status)
{
}


//pure virtual enter busyness function, empty body to allow for dynamic binding during runtime..             
void transit_type::enter_busyness(const char * input_busyness)
{
}


//pure virtual enter enjoyability function, empty body to allow for dynamic binding during runtime..             
void transit_type::enter_enjoyability(const char * input_enjoyability)
{
}


//pure virtual enter if the rider will ride again function, empty body to allow for dynamic binding during runtime..             
void transit_type::enter_ride_again(const char * input_ride_again)
{
}


//MAX class constructor
MAX_transit::MAX_transit()
{
  
  transit_status = NULL;
  busyness = NULL;      
  enjoyment = NULL;
  ride_again = NULL;

}


//MAX class destructor
MAX_transit::~MAX_transit()
{
 
  transit_status = NULL;
  delete transit_status;
  busyness = NULL;
  delete busyness;
  enjoyment = NULL;
  delete enjoyment;
  ride_again = NULL;
  delete ride_again;

}


//MAX class display function for all the attributes associated with a MAX ride
void MAX_transit::display()
{

   cout << " MAX transit status is " << get_transit_status() <<endl;

   cout << " MAX transit busyness is " << get_busyness() <<endl;

   cout << " MAX transit enjoyment " << get_enjoyment() <<endl;

   cout << " Ride again?  " << get_ride_again()  <<endl;


}
            
void MAX_transit::enter_transit_status(const char * input_status)
{
   transit_status = new char[strlen(input_status) + 1];
   strcpy(transit_status, input_status);

}
            
char * MAX_transit::get_transit_status()
{
  return transit_status;
}
            
void MAX_transit::enter_busyness(const char * input_busyness)
{
   busyness = new char[strlen(input_busyness) + 1];
   strcpy(busyness, input_busyness);

}
            
char * MAX_transit::get_busyness()
{
  return busyness;
}
            
void MAX_transit::enter_enjoyability(const char * input_enjoyability)
{
   enjoyment = new char[strlen(input_enjoyability) + 1];
   strcpy(enjoyment, input_enjoyability);

}
            
char * MAX_transit::get_enjoyment()
{
  return enjoyment;
}
            
void MAX_transit::enter_ride_again(const char * input_ride_again)
{
  ride_again = new char[strlen(input_ride_again) + 1];
  strcpy(ride_again, input_ride_again);

}
            
char * MAX_transit::get_ride_again()
{
  return ride_again;
}



//Streetcar class constructor
Streetcar_transit::Streetcar_transit()
{
  
  transit_status = NULL;
  busyness = NULL;      
  enjoyment = NULL;
  ride_again = NULL;

}


//Streetcar class destructor
Streetcar_transit::~Streetcar_transit()
{
 
  transit_status = NULL;
  delete transit_status;
  busyness = NULL;
  delete busyness;
  enjoyment = NULL;
  delete enjoyment;
  ride_again = NULL;
  delete ride_again;

}


//Streetcar class display function for all the attributes associated with a Streetcar ride
void Streetcar_transit::display()
{

   cout << " Streetcar transit status is " << get_transit_status() <<endl;

   cout << " Streetcar transit busyness is " << get_busyness() <<endl;

   cout << " Streetcar transit enjoyment " << get_enjoyment() <<endl;

   cout << " Ride again?  " << get_ride_again()  <<endl;


}
            
void Streetcar_transit::enter_transit_status(const char * input_status)
{
   transit_status = new char[strlen(input_status) + 1];
   strcpy(transit_status, input_status);

}
            
char * Streetcar_transit::get_transit_status()
{
  return transit_status;
}
            
void Streetcar_transit::enter_busyness(const char * input_busyness)
{
   busyness = new char[strlen(input_busyness) + 1];
   strcpy(busyness, input_busyness);

}
            
char * Streetcar_transit::get_busyness()
{
  return busyness;
}
            
void Streetcar_transit::enter_enjoyability(const char * input_enjoyability)
{
   enjoyment = new char[strlen(input_enjoyability) + 1];
   strcpy(enjoyment, input_enjoyability);

}
            
char * Streetcar_transit::get_enjoyment()
{
  return enjoyment;
}
            
void Streetcar_transit::enter_ride_again(const char * input_ride_again)
{
  ride_again = new char[strlen(input_ride_again) + 1];
  strcpy(ride_again, input_ride_again);

}
            
char * Streetcar_transit::get_ride_again()
{
  return ride_again;
}




//Bus class constructor
Bus_transit::Bus_transit()
{
  
  transit_status = NULL;
  busyness = NULL;      
  enjoyment = NULL;
  ride_again = NULL;

}


//Bus class destructor
Bus_transit::~Bus_transit()
{
 
  transit_status = NULL;
  delete transit_status;
  busyness = NULL;
  delete busyness;
  enjoyment = NULL;
  delete enjoyment;
  ride_again = NULL;
  delete ride_again;

}


//Streetcar class display function for all the attributes associated with a Streetcar ride
void Bus_transit::display()
{

   cout << " Streetcar transit status is " << get_transit_status() <<endl;

   cout << " Streetcar transit busyness is " << get_busyness() <<endl;

   cout << " Streetcar transit enjoyment " << get_enjoyment() <<endl;

   cout << " Ride again?  " << get_ride_again()  <<endl;


}
            
void Bus_transit::enter_transit_status(const char * input_status)
{
   transit_status = new char[strlen(input_status) + 1];
   strcpy(transit_status, input_status);

}
            
char * Bus_transit::get_transit_status()
{
  return transit_status;
}
            
void Bus_transit::enter_busyness(const char * input_busyness)
{
   busyness = new char[strlen(input_busyness) + 1];
   strcpy(busyness, input_busyness);

}
            
char * Bus_transit::get_busyness()
{
  return busyness;
}
            
void Bus_transit::enter_enjoyability(const char * input_enjoyability)
{
   enjoyment = new char[strlen(input_enjoyability) + 1];
   strcpy(enjoyment, input_enjoyability);

}
            
char * Bus_transit::get_enjoyment()
{
  return enjoyment;
}
            
void Bus_transit::enter_ride_again(const char * input_ride_again)
{
  ride_again = new char[strlen(input_ride_again) + 1];
  strcpy(ride_again, input_ride_again);

}
            
char * Bus_transit::get_ride_again()
{
  return ride_again;
}


//node class constructor
node::node()
{
  next = NULL;
}


//node class constructor
node::~node()
{
  delete next;
  next = NULL;

}


//return next pointer by refrence
node *& node::get_next()
{
  return next;
}


//constructor for MAXlist class
MAX_list::MAX_list()
{
  MAX_head = NULL;
}
            
MAX_list::~MAX_list()
{

  node * current = MAX_head;

    while(current)
    {
       node * temp = current;
       current = current -> get_next();
       delete temp;
       temp = current;

    }


}
            
void MAX_list::build_MAX_list(const char * input_status, const char * input_busyness, const char * input_enjoyment, const char * input_ride_again)
{


  if(!MAX_head)
  {

    MAX_head = new node;
    MAX_head -> MAX_transit::enter_transit_status(input_status);
    MAX_head -> MAX_transit::enter_busyness(input_busyness);
    MAX_head -> MAX_transit::enter_enjoyability(input_enjoyment); 
    MAX_head -> MAX_transit::enter_ride_again(input_ride_again); 
    MAX_head -> get_next() = NULL;

  }

    node * temp = new node;
    temp -> MAX_transit::enter_transit_status(input_status);
    temp -> MAX_transit::enter_busyness(input_busyness);
    temp -> MAX_transit::enter_enjoyability(input_enjoyment);
    temp -> MAX_transit::enter_ride_again(input_ride_again);    
 
    MAX_head = temp;


}
            
void MAX_list::lookup_MAX(const char * input_MAX)
{

 
}
            
void MAX_list::display_MAX()
{

   node * current = MAX_head;

  if(MAX_head == NULL)
  {
     cout << "No items in list to print." << endl;
     return;
  }


  cout << "****************** Reviews For The MAx Line is ************************ " << endl;


  while(current)
  {


      cout <<"\n";
      cout <<"MAX Status is : " << current-> MAX_transit::get_transit_status();
      cout <<"\n";
      cout <<"Busyness is : " << current-> MAX_transit::get_busyness();
      cout <<"\n";
      cout <<"Enjoyment is : " << current-> MAX_transit::get_enjoyment();
      cout <<"\n";
      cout <<"Ride again is : " << current-> MAX_transit::get_ride_again();


      cout << "\n";
      current = current->get_next();
  }


  cout << "*********************************************************************** " << endl;



}



//constructor for Streetcar list class
Streetcar_list::Streetcar_list()
{
  Streetcar_head = NULL;
}
            
Streetcar_list::~Streetcar_list()
{

  node * current = Streetcar_head;

    while(current)
    {
       node * temp = current;
       current = current -> get_next();
       delete temp;
       temp = current;

    }
  

}
            
void Streetcar_list::build_Streetcar_list(const char * input_status, const char * input_busyness, const char * input_enjoyment, const char * input_ride_again)
{


  if(!Streetcar_head)
  {

    Streetcar_head = new node;
    Streetcar_head -> Streetcar_transit::enter_transit_status(input_status);
    Streetcar_head -> Streetcar_transit::enter_busyness(input_busyness);
    Streetcar_head -> Streetcar_transit::enter_enjoyability(input_enjoyment); 
    Streetcar_head -> Streetcar_transit::enter_ride_again(input_ride_again); 
    Streetcar_head -> get_next() = NULL;

  }

    node * temp = new node;
    temp -> Streetcar_transit::enter_transit_status(input_status);
    temp -> Streetcar_transit::enter_busyness(input_busyness);
    temp -> Streetcar_transit::enter_enjoyability(input_enjoyment);
    temp -> Streetcar_transit::enter_ride_again(input_ride_again);    
 
    Streetcar_head = temp;


}
            
void Streetcar_list::lookup_Streetcar(const char * input_MAX)
{

 
}
            
void Streetcar_list::display_Streetcar()
{

  node * current = Streetcar_head;

  if(Streetcar_head == NULL)
  {
     cout << "No items in list to print." << endl;
     return;
  }


  cout << "****************** Reviews For The Streetcar is ************************ " << endl;


  while(current)
  {


      cout <<"\n";
      cout <<"MAX Status is : " << current-> Streetcar_transit::get_transit_status();
      cout <<"\n";
      cout <<"Busyness is : " << current-> Streetcar_transit::get_busyness();
      cout <<"\n";
      cout <<"Enjoyment is : " << current-> Streetcar_transit::get_enjoyment();
      cout <<"\n";
      cout <<"Ride again is : " << current-> Streetcar_transit::get_ride_again();


      cout << "\n";
      current = current->get_next();
  }


  cout << "*********************************************************************** " << endl;



}



//constructor for Bus list class
Bus_list::Bus_list()
{
  Bus_head = NULL;
}
            
Bus_list::~Bus_list()
{
  node * current = Bus_head;

    while(current)
    {
       node * temp = current;
       current = current -> get_next();
       delete temp;
       temp = current;

    }

}
            
void Bus_list::build_Bus_list(const char * input_status, const char * input_busyness, const char * input_enjoyment, const char * input_ride_again)
{


  if(!Bus_head)
  {

    Bus_head = new node;
    Bus_head -> Streetcar_transit::enter_transit_status(input_status);
    Bus_head -> Streetcar_transit::enter_busyness(input_busyness);
    Bus_head -> Streetcar_transit::enter_enjoyability(input_enjoyment); 
    Bus_head -> Streetcar_transit::enter_ride_again(input_ride_again); 
    Bus_head -> get_next() = NULL;

  }

    node * temp = new node;
    temp -> Bus_transit::enter_transit_status(input_status);
    temp -> Bus_transit::enter_busyness(input_busyness);
    temp -> Bus_transit::enter_enjoyability(input_enjoyment);
    temp -> Bus_transit::enter_ride_again(input_ride_again);    
 
    Bus_head = temp;


}
            
void Bus_list::lookup_Buslist(const char * input_MAX)
{

 
}
            
void Bus_list::display_Bus()
{

  node * current = Bus_head;

  if(Bus_head == NULL)
  {
     cout << "No items in list to print." << endl;
     return;
  }


  cout << "****************** Reviews For The Bus line is ************************ " << endl;


  while(current)
  {


      cout <<"\n";
      cout <<"MAX Status is : " << current-> Bus_transit::get_transit_status();
      cout <<"\n";
      cout <<"Busyness is : " << current-> Bus_transit::get_busyness();
      cout <<"\n";
      cout <<"Enjoyment is : " << current-> Bus_transit::get_enjoyment();
      cout <<"\n";
      cout <<"Ride again is : " << current-> Bus_transit::get_ride_again();


      cout << "\n";
      current = current->get_next();
  }


  cout << "*********************************************************************** " << endl;



}




