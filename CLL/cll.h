#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>


const int SIZE = 4;



class card
{

      public:
            card();
            ~card();
            int compare();
            int swap_card(card & to_swap);
            void set_card(int num, const char * input_suit);  
            int get_card_number();
            char * get_card_suit();
            int setnum(int input); 
            void setsuit(char input[]);     
      protected:
               int number;
	       char * suit; 
};


class node: public card
{
        public:
               node();
               ~node();              
               node *& get_previous();
               node *& get_next();
               void connect_left(node * connection);
               void connect_right(node * connection);
        protected:
               node * previous;
               node * next;
};
