/*
 
 Sid Abdul

 CS202

 Emergency Broadcast System Program 3

 prog3.h file

*/

#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>


class home_phone
{

      public:
       home_phone();
      ~home_phone();
      void enter_first_name(const char * input_first_name);
      void enter_last_name(const char * input_last_name);
      char * get_first_name();
      char * get_last_name();
      void enter_phone_num(const char * input_home_phone_num);
      char * get_home_phone_num();
      void display();      
      protected:
      char * firstname;
      char * lastname; 
      char * home_phone_num;

};


class work_phone
{

      public:
       work_phone();
      ~work_phone();
      void enter_first_name(const char * input_first_name);
      void enter_last_name(const char * input_last_name);
      char * get_first_name();
      char * get_last_name();
      void enter_work_num(const char * input_work_phone_num);
      char * get_work_phone_num();
      void display();      
      protected:
      char * firstname;
      char * lastname;
      char * work_phone_num;

};


class cell_phone
{

      public:
       cell_phone();
      ~cell_phone();
      void enter_first_name(const char * input_first_name);
      void enter_last_name(const char * input_last_name);
      char * get_first_name();
      char * get_last_name();     
      void enter_cell_num(const char * input_cell_phone_num);
      char * get_cell_phone_num();
      void display();      
      protected:
      char * firstname;
      char * lastname;
      char * cell_phone_num;

};


class facebook
{

      public:
       facebook();
      ~facebook();
      void enter_facebook_first_name(const char * input_first_name);
      void enter_facebook_last_name(const char * input_last_name);
      char * get_facebook_first_name();
      char * get_facebook_last_name();
      void display();      
      protected:
      char * firstname;
      char * lastname;
};


class twitter
{

      public:
       twitter();
      ~twitter();
      void enter_twitter_first_name(const char * input_first_name);
      void enter_twitter_last_name(const char * input_last_name);
      char * get_twitter_first_name();
      char * get_twitter_last_name();
      void display();
      protected:
      char * firstname;
      char * lastname;
};


class lll_node : public home_phone, public work_phone, public cell_phone, public facebook, public twitter
{
      public:
            lll_node();
            ~lll_node();              
            lll_node *& get_next();

      protected:
            lll_node * next;
};


class lll : public lll_node
{

      public:
            lll();
            ~lll();
            void deallocate();
            int insert(char input_last_name []);
            int displayall(lll_node * head);
            int displayall();

      protected:


};
     

class bst_node : public home_phone, public work_phone, public cell_phone, public facebook, public twitter

{
      public:
            bst_node();
            ~bst_node();
            bst_node & operator = (const bst_node & other_tree);
            void set_left(bst_node * left);
            void set_right(bst_node * right);
            bst_node * & go_left() ;
            bst_node * & go_right() ;
            bool if_left() const;
            bool if_right()const;            

       protected:
            bst_node * left;
            bst_node * right;
};


class bst : public bst_node
{

      public:
            bst();
            ~bst();
           
            /* overloaded operators for this class defined here */           
            bst & operator = (const bst & other_tree);
	    bst & operator += (const bst & other_tree);
	    bst & operator == (const bst & other_tree);
	    bst & operator != (const bst & other_tree);
            bst operator + (const bst & other_tree);

            int destroy(bst_node * & root);//deallocate tree, destructo calls this function
            int insert_home(bst_node * & root, char input_first_name [], char input_last_name [], char input_number []);//Insert function for home phone number contact
            int insert_work(char input_first_name [], char input_last_name [], char input_number []);//Insert function for work phone number contact
            int insert_cell(char input_first_name [], char input_last_name [], const int input_number);//Insert function for cell phone number contact
            int insert_facebook(char input_first_name [], char input_last_name []);//Insert function for facebook social media contact info
            int insert_twitter(char input_first_name [], char input_last_name []);//Insert function for twitter social media contact info

            int displayall(bst_node * root);
            int displayall();

      protected:
               bst_node * root;
               lll_node * head; 

};
