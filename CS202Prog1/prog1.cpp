/* 
/ 
/ Sid Abdullahi 
/
/ CS202 - WI2017
/
/ prog1.cpp
/
/ This is the .cpp implementaion file for the streetcar tracker program. 
/ It contains all the definitions for all the class members of the program.
/
. 
*/



#include "prog1.h"

using namespace std;


const int TEST = 375;

track_type::track_type()
{
  type = NULL;
}


track_type::~track_type()
{
  type = NULL;
  delete type;
}


bool track_type::compare_type(const char * input_type)
{

  if(strcmp(input_type, type) == 0)
    return true;

  else
    return false; 

}


void track_type::set_type(const char * input_type)
{

  type = new char[strlen(input_type) + 1];
  strcpy(type, input_type);

}


char * track_type::get_type()
{
  return type; 
}


stop::stop()
{
  
  stop_name = NULL;
  stop_area = NULL;
  location_on_stop = 0;
}


stop::~stop()
{
  
  stop_name = NULL;
  delete stop_name;
  stop_area = NULL;
  delete stop_area;

}


void stop::set_stop_name(const char * input_stop_name)
{

  stop_name = new char[strlen(input_stop_name) + 1];
  strcpy(stop_name, input_stop_name);

}

            
void stop::set_stop_area(const char * input_stop_area)
{

  stop_area = new char[strlen(input_stop_area) + 1];
  strcpy(stop_area, input_stop_area);

}            


void stop::set_stop_location(const char * input_stop_location)
{
 
  location_on_stop = new char[strlen(input_stop_location) + 1];
  strcpy(location_on_stop, input_stop_location);

}


char * stop::get_stop_name()
{
  return stop_name;
}


char * stop::get_stop_area()
{
  return stop_area;
}
          

char * stop::get_stop_location()
{
  return location_on_stop;
}


node::node()
{
  next = NULL;
}


node::~node()
{
  delete next;
  next = NULL;

}


node *& node::get_next()
{
  return next;
}


dllnode::dllnode()
{
  previous = NULL;
  next = NULL;
}
            

dllnode::~dllnode()
{
  delete previous;
  previous = NULL;
  delete next;
  next = NULL;

}  


dllnode *& dllnode::get_previous()
{
  return previous;
}


dllnode *& dllnode::get_next()
{
  return next;
}


cll_node::cll_node()
{
  next = NULL;
}


cll_node::~cll_node()
{
  delete next;
  next = NULL;
}


cll_node *& cll_node::get_next()
{
  return next;
}


vertex::vertex()
{
  a_stop = NULL;
  graph_head = NULL;
}
       
vertex::~vertex()
{
  delete a_stop;
  a_stop = NULL;
  delete graph_head;
  graph_head = NULL;

}
        

stop *& vertex::get_a_stop()
{
  return a_stop;
}
        

graphnode *& vertex::get_graph_head()
{
  return graph_head;
}


//Constructor for the graph                                                                                                                                          
graph::graph(int size)
{

  list_size=size;
  adjacency_list = new vertex[list_size];

  for (int i=0; i<list_size; ++i)
  {
    adjacency_list[i].get_a_stop() = NULL;
    adjacency_list[i].get_graph_head() = NULL;

  }

}


//Destructor definition                                                                                                                                              
graph::~graph()
{

  for (int i=0; i<list_size; ++i)
  {

    graphnode * current = adjacency_list[i].get_graph_head();

    while(current)
    {
      graphnode * temp = current;
      current = current->get_next();
      delete temp;
      adjacency_list[i].get_a_stop() = NULL;
    }

    }

      delete [] adjacency_list;

}

graphnode::graphnode()
{
  adjacent = NULL;
  next = NULL;
}


graphnode::~graphnode()
{
  delete adjacent;
  adjacent = NULL;
  delete next;
  next = NULL;


}
          
vertex *& graphnode::get_vertex()
{
  return adjacent;
}
          
class graphnode *& graphnode::get_next()
{
  return next;
}



//Insert stops  from the txt file into a vertex in the graph                                                                                                    
int graph::insert_vertex(stop & to_add)
{

  for (int i=0; i<list_size; ++i)
  {
    if (!adjacency_list[i].get_a_stop())
    {
      adjacency_list[i].get_a_stop() = new stop;
    }


}

    return 0;
}


//Function to find if a match exists in the graph data strcuture..                                                                                                   
int graph::find_location(char * key_value)
{

  int index = 0;

  for (int i=0; i < list_size; ++i)
   {

     if(strcmp(adjacency_list[i].get_a_stop()->get_stop_name(), key_value) == 0)
     {
      	index =i;
     }

   }
    	return index;
}


//Function to display all vertices                                                                                          
int graph::display_vertices(char * key_value)
{

  int i = find_location(key_value);


  graphnode * current = adjacency_list[i].get_graph_head();

  while(current)
  {
    adjacency_list[i].get_a_stop() -> get_stop_name();
    current = current -> get_next();

  }

  return 1;

}


streetcar_list::streetcar_list()
{
  streetcar_head = NULL;
}
            

streetcar_list::~streetcar_list()
{

 node * current = streetcar_head;

    while(current)
    {
       node * temp = current;
       current = current -> get_next();
       delete temp;
       temp = current;

    }

}
            

void streetcar_list::build_streetcar_list(const char * input_vin, const char * input_current_location, const char * input_status, const char * input_max_occupants)
{

  if(!streetcar_head)
  {

    streetcar_head = new node;
    streetcar_head -> set_vin(input_vin);
    streetcar_head-> set_current_location(input_current_location);
    streetcar_head -> set_status(input_status); 
    streetcar_head -> set_max_occupants(input_max_occupants); 
    streetcar_head -> get_next() = NULL;

  }

  node * temp = new node;
  temp -> set_vin(input_vin);
  temp -> set_current_location(input_current_location);
  temp -> set_status(input_status);
  temp -> set_max_occupants(input_max_occupants);
  temp -> get_next() = streetcar_head;
  streetcar_head = temp;


}

            
void streetcar_list::lookup_streetcar(const char * input_stop_name)
{
}

            
void streetcar_list::display_streetcars()
{

  node * current = streetcar_head;

  if(streetcar_head == NULL)
  {
     cout << "No items in list to print." << endl;
     return;
  }


  cout << "****************** List of stops for the North/South Lines *********************** " << endl;


  while(current)
  {


      cout <<"\n";
      cout <<"Street Car VIN : " << current->get_vin();
      cout <<"\t";
      cout <<"Current Location : " << current->get_location();
      cout <<"\t";
      cout <<"Current Status : " << current->get_status();
      cout <<"\t";
      cout <<"Max Occupants : " << current->get_occupants();
                

      cout << "\n";
      current = current->get_next();
  }


  cout << "********************************************************************************** " << endl;

}


loop_stops::loop_stops()
{
  rear = NULL;
}

            
loop_stops::~loop_stops()
{}
            

void loop_stops::build_stops(const char * input_stop_name, const char * input_stop_area, const char * input_stop_location)
{

    if(!rear)
    {

         rear = new cll_node;
         rear -> set_stop_name(input_stop_name);
         rear -> set_stop_area(input_stop_area);
         rear -> set_stop_location(input_stop_location);
         rear -> get_next() = rear;
    }

    

    cll_node * temp = new cll_node;
    temp -> set_stop_name(input_stop_name);
    temp -> set_stop_area(input_stop_area);
    temp -> get_next() = rear-> get_next();
    rear -> get_next() = temp;


}
            

void loop_stops::lookup_stop(const char * input_stop_name)
{}


void loop_stops::display_stops()
{
  
      cll_node * current = rear;

      if(rear == NULL) 
      {
	 cout << "No items in list to print." << endl;
	 return;
      }


      cout << "****************** List of stops for the A-Loop Line *********************** " << endl;

      while(current->get_next() != rear) 
      {
		
                
	        cout <<"\n";	
                cout <<"Stop : " << current->get_stop_name();
	        cout <<"\t";	
		cout <<"Area : " << current->get_stop_area();                
                cout << "\n";		
		current = current->get_next();
      }



     cout << "********************************************************************************** " << endl;


}


north_south_stops::north_south_stops()
{
  head = NULL;
}            


north_south_stops::~north_south_stops()
{

    dllnode * current = head;

    while(current)
    {
       dllnode * temp = current;
       current = current -> get_next();
       delete temp;
       temp = current;

    }

}

            
void north_south_stops::build_stops(const char * input_stop_name, const char * input_stop_area, const char * input_stop_location)
{

  if(!head)
  {
    
    head = new dllnode;
    head -> set_stop_name(input_stop_name);
    head -> set_stop_area(input_stop_area);
    head -> set_stop_location(input_stop_location);
    head -> get_next() = NULL;

  }

  dllnode * temp = new dllnode;
  temp -> set_stop_name(input_stop_name);
  temp -> set_stop_area(input_stop_area);
  temp -> set_stop_location(input_stop_location);
  temp -> get_next() = head;
  head = temp;


}

            
void north_south_stops::lookup_stop(const char * input_stop_name)
{



}

            
void north_south_stops::display_stops()
{


  dllnode * current = head;

  if(head == NULL)
  {
     cout << "No items in list to print." << endl;
     return;
  }


  cout << "****************** List of stops for the North/South Lines *********************** " << endl;


  while(current)
  {


     cout <<"\n";
     cout <<"Stop : " << current->get_stop_name();
     cout <<"\t";
     cout <<"Area : " << current->get_stop_area();

     cout << "\n";
     current = current->get_next();
  }


  cout << "********************************************************************************** " << endl;


}


location::location()
{
  car_location = NULL;
}


location::~location()
{
  
  delete car_location;
  car_location = NULL;

}

void location::set_location(const char * input_location)
{
  car_location = new char[strlen(input_location) + 1];
  strcpy(car_location, input_location);

}


char * location::get_location()
{
  return car_location;
}


bool location::compare_location(const char * input_location)
{
  
  if(strcmp(input_location, car_location) == 0)
    return true;

  else
    return false;

}


streetcar::streetcar()
{

  vin = NULL;
  max_occupants = 0;
  current_location = NULL;
  status = NULL;

}


streetcar::~streetcar()
{

  delete vin;
  vin = NULL;
  delete current_location;
  current_location = NULL;
  delete status;
  status = NULL;

}
            

void streetcar::set_vin(const char * input_vin)
{
  
  vin = new char[strlen(input_vin) + 1];
  strcpy(vin, input_vin);

}
            

void streetcar::set_current_location(const char * input_location)
{

  current_location = new char[strlen(input_location) + 1];
  strcpy(current_location, input_location);

}
            

void streetcar::set_status(const char * input_status)
{

  status = new char[strlen(input_status) + 1];
  strcpy(status, input_status);

} 
            

void streetcar::set_max_occupants(const char * input_max_occupants)
{
  
  max_occupants = new char[strlen(input_max_occupants) +1];
  strcpy(max_occupants, input_max_occupants);

}
            

char * streetcar::get_occupants()
{
  return max_occupants;
}
            

char * streetcar::get_vin()
{
  return vin;
}
            

char * streetcar::get_location()
{
  return current_location;
}
            

char * streetcar::get_status()
{
  return status;
}


void load_loop_stops(loop_stops & object)
{
 

     //Arrays to load information from the text file are defined here
    char file_stop_name[TEST];
    char file_stop_area[TEST];
    char file_location_on_stop[TEST];

    //Reading jobs from the text file is defined below
    ifstream file_in;
    file_in.open ("A_Loop.txt");
    if (file_in.is_open())
   {
          do
          {
            file_in.get(file_stop_name, TEST,'|');
            file_in.ignore(100,'|');
    
            file_in.get(file_stop_area, TEST,'|');
            file_in.ignore(100,'|');
            file_in.get(file_location_on_stop, TEST, '\n');
            file_in.ignore(100,'\n');

            object.build_stops(file_stop_name, file_stop_area, file_location_on_stop);



           }while(!file_in.eof());

     }
        file_in.close();
        file_in.clear();
    


}


void load_north_south_stops(north_south_stops & object)
{


     //Arrays to load information from the text file are defined here
    char file_stop_name[TEST];
    char file_stop_area[TEST];
    char file_location_on_stop[TEST];


    //Reading jobs from the text file is defined below
    ifstream file_in;
    file_in.open ("NS_Line_Stops.txt");
    if (file_in.is_open())
   {
          do
          {
            file_in.get(file_stop_name, TEST,'|');
            file_in.ignore(100,'|');

            file_in.get(file_stop_area, TEST,'|');
            file_in.ignore(100,'|');
            file_in.get(file_location_on_stop, TEST, '\n');
            file_in.ignore(100,'\n');

            object.build_stops(file_stop_name, file_stop_area, file_location_on_stop);



           }while(!file_in.eof());

     }
        file_in.close();
        file_in.clear();



}


void load_streetcars(streetcar_list & object)
{

   //Arrays to load information from the text file are defined here
    char file_streetcar_vin[TEST];
    char file_streetcar_location[TEST];
    char file_streetcar_status[TEST];
    char file_streetcar_max_occupants[TEST];

    //Reading jobs from the text file is defined below
    ifstream file_in;
    file_in.open ("Streetcars.txt");
    if (file_in.is_open())
   {
          do
          {
            file_in.get(file_streetcar_vin, TEST,'|');
            file_in.ignore(100,'|');

            file_in.get(file_streetcar_location, TEST,'|');
            file_in.ignore(100,'|');
            
        
            file_in.get(file_streetcar_status, TEST,'|');
            file_in.ignore(100,'|');

            
            file_in.get(file_streetcar_max_occupants, TEST, '\n');
            file_in.ignore(100,'\n');

            object.build_streetcar_list(file_streetcar_vin, file_streetcar_location, file_streetcar_status, file_streetcar_max_occupants);



           }while(!file_in.eof());

     }
        file_in.close();
        file_in.clear();



}


