#include "cll.h"

using namespace std;

//Card Constructor                                                                                                                                   
card::card()
{
   number = 0;
   suit = NULL;

}

//Card Destructor                                                                                                                                    
card::~card()
{
   suit = NULL;
   delete suit;

}

//This function will take in two aurguments, the card number, and the suit.                                                                          
//This function is used inside the build deck function defined below                                                                                 
void card::set_card(int num, const char * input_suit)
{

   number = num;
   suit = new char[strlen(input_suit) + 1];
   strcpy(suit, input_suit);

}
//This function will aide the shuffle deck function defined below                                                                                    
int card::setnum(int input)
{
    number = input;

}

//Function to set suit, used by retreive card function                                                                                               
void card::setsuit(char input[])
{
  suit = input;
}


//Obtain card number..                                                                                                                               
int card::get_card_number()
{

   return number;
}


//Obtain card suit..                                                                                                                                 
char * card::get_card_suit()
{

   return suit;
}



//Node Constructor                                                                                                                                   
node::node()
{

   previous = NULL;
   next = NULL;

}


//Node Destructor                                                                                                                                    
node::~node()
{

   delete previous; previous = NULL;
   delete next; next = NULL;

}


//Obatin the previous pointer for the doubly linked list structure                                                                                   
node*&::node::get_previous()
{
   return previous;
}


//Obatin the next pointer for the doubly linked list structure                                                                                       
node*&::node::get_next()
{
   return next;
}



