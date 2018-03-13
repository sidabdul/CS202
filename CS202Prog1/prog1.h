/* 
/ 
/ Sid Abdullahi 
/ CS202 WI2017
/ 1/19/2017
/ prog1.cpp
/
/ This is the header file for the streetcar tracker program. 
/ It contains all the prototypes for all the class members of the program.
/
. 
*/


#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <fstream>

const int SIZE = 4;


class track_type
{
      public:
            track_type();
            ~track_type();
            bool compare_type(const char * input_type);
            void set_type(const char * input_type);
            char * get_type();
      protected:      
            char * type;
};


class stop
{
      public:
            stop();
            ~stop();
            void set_stop_name(const char * input_stop_name);
            void set_stop_area(const char * input_stop_area);
            void set_stop_location(const char * input_stop_location);
            char * get_stop_name();
            char * get_stop_area();
            char * get_stop_location();            
      protected:
            char * stop_name;
            char * stop_area;
            char * location_on_stop;
};


class streetcar
{
      public:
            streetcar();
            ~streetcar();
            void set_vin(const char * input_vin);
            void set_current_location(const char * input_location);
            void set_status(const char * input_status); 
            void set_max_occupants(const char * input_max_occupants); 
            char * get_occupants();
            char * get_vin();
            char * get_location();
            char * get_status();
      protected:
            char * vin;
            char * max_occupants;
            char * current_location;
            char * status;

};


class node: public streetcar
{
      public:
            node();
            ~node();              
            node *& get_next();
      protected:
            node * next;
};


class dllnode: public stop
{
      public:
            dllnode();
            ~dllnode();              
            dllnode *& get_previous();
            dllnode *& get_next();
            void connect_left(dllnode * connection);
            void connect_right(dllnode * connection);
      protected:
            dllnode * previous;
            dllnode * next;
};


class cll_node: public stop
{
      public:
            cll_node();
            ~cll_node();              
            cll_node *& get_next();
      protected:
            cll_node * next;
};


class vertex     
{

  public:
        vertex();
        ~vertex();
        stop *& get_a_stop();
        class graphnode *& get_graph_head();
  protected:
           stop * a_stop;
          class graphnode * graph_head;
	
};


class graph
{

   public:
     graph(int size=5);
     ~graph();
     int insert_vertex(stop & to_add);
     int find_location(char * key_value);
     int display_vertices(char * key_value);
     int insert_edge(char * current_vertex, char * to_attach);
     int displayall(void);
	
    protected:
             vertex * adjacency_list;
             int list_size;
};


class graphnode
{
    public:
          graphnode();
          ~graphnode();
          vertex *& get_vertex();
          class graphnode *& get_next();
    protected:
             vertex * adjacent;
             graphnode * next;

};


class streetcar_list
{
      public:
            streetcar_list();
            ~streetcar_list();
            void build_streetcar_list(const char * input_vin, const char * input_current_location, const char * input_status, const char * input_max_occupants);
            void lookup_streetcar(const char * input_stop_name);
            void display_streetcars();
      protected:
            node * streetcar_head;
};


class loop_stops
{
      public: 
            loop_stops();
            ~loop_stops();
            void build_stops(const char * input_stop_name, const char * input_stop_area, const char * input_stop_location);
            void lookup_stop(const char * input_stop_name);
            void display_stops();            
      protected:
            cll_node * rear;
};


class north_south_stops
{
      public:
            north_south_stops();
            ~north_south_stops();
            void build_stops(const char * input_stop_name, const char * input_stop_area, const char * input_stop_location);
            void lookup_stop(const char * input_stop_name);
            void display_stops();
      protected:
            dllnode * head;

};


class location
{
      public:
            location(); 
            ~location(); 
            void set_location(const char * input_location);
            char * get_location();
            bool compare_location(const char * input_location);
      protected:
            char * car_location; 


};

//Prototypes to load inforation of stops and streetcars from the txt file..
void load_loop_stops(loop_stops &);

void load_north_south_stops(north_south_stops &);

void load_streetcars(streetcar_list &);





