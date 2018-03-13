#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <fstream>

const int SIZE = 4;

//Common Abstract Base Class
class transit_type
{

            /* Pure Virtual Functions To Be Implemented In The Derived Classes Below */
      public:
            transit_type();
            virtual ~transit_type();       
            virtual void display() = 0;                 
            virtual void enter_transit_status(const char * input_status) = 0;
            virtual void enter_busyness(const char * input_busyness) = 0;
            virtual void enter_enjoyability(const char * input_enjoyability) = 0;
            virtual void enter_ride_again(const char * input_ride_again) = 0;
      protected:

};


//Class to manage a collection of MAX train rides
class MAX_transit : public transit_type
{

      public:
            MAX_transit();
            ~MAX_transit();
            void display();
            void enter_transit_status(const char * input_status);
            char * get_transit_status();
            void enter_busyness(const char * input_busyness);
            char * get_busyness();
            void enter_enjoyability(const char * input_enjoyability);
            char * get_enjoyment();
            void enter_ride_again(const char * input_ride_again);
            char * get_ride_again();
      protected:
            char * transit_status; /* In service or not */
            char * busyness;       /* How busy at this current time */
            char * enjoyment;      /* Was this transit service satisfactory*/
            char * ride_again;     /* Would you use this transit service again */

};


//Class to manage a collection of Streetcars
class Streetcar_transit : public transit_type
{

      public:
            Streetcar_transit();
            ~Streetcar_transit();
            void display();
            void enter_transit_status(const char * input_status);
            char * get_transit_status();
            void enter_busyness(const char * input_busyness);
            char * get_busyness();
            void enter_enjoyability(const char * input_enjoyability);
            char * get_enjoyment();
            void enter_ride_again(const char * input_ride_again);
            char * get_ride_again();
      protected:
            char * transit_status; /* In service or not */
            char * busyness;       /* How busy at this current time */
            char * enjoyment;      /* Was this transit service satisfactory*/
            char * ride_again;     /* Would you use this transit service again */

};


//Class to manage a collection of Bus rides
class Bus_transit : public transit_type
{

      public:
            Bus_transit();
            ~Bus_transit();
            void display();
            void enter_transit_status(const char * input_status);
            char * get_transit_status();
            void enter_busyness(const char * input_busyness);
            char * get_busyness();
            void enter_enjoyability(const char * input_enjoyability);
            char * get_enjoyment();
            void enter_ride_again(const char * input_ride_again);
            char * get_ride_again();
      protected:
            char * transit_status; /* In service or not */
            char * busyness;       /* How busy at this current time */
            char * enjoyment;      /* Was this transit service satisfactory*/
            char * ride_again;     /* Would you use this transit service again */

};


class node: public MAX_transit, public Streetcar_transit, public Bus_transit
{
      public:
            node();
            ~node();              
            node *& get_next();
      protected:
            node * next;
};

//class to manage MAX reviews
class MAX_list
{
      public:
            MAX_list();
            ~MAX_list();
            void build_MAX_list(const char * input_status, const char * input_busyness, const char * input_enjoyment, const char * input_ride_again);
            void lookup_MAX(const char * input_MAX);
            void display_MAX();
      protected:
            node * MAX_head;
};


class Streetcar_list
{
      public:
            Streetcar_list();
            ~Streetcar_list();
            void build_Streetcar_list(const char * input_status, const char * input_busyness, const char * input_enjoyment, const char * input_ride_again);
            void lookup_Streetcar(const char * input_Streetcar);
            void display_Streetcar();
      protected:
            node * Streetcar_head;
};


class Bus_list
{
      public:
            Bus_list();
            ~Bus_list();
            void build_Bus_list(const char * input_status, const char * input_busyness, const char * input_enjoyment, const char * input_ride_again);
            void lookup_Buslist(const char * input_Bus);
            void display_Bus();
      protected:
            node * Bus_head;
};












