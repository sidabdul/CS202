/*  
/ Sid Abdullahi 
/
/ CS202 - WI2017
/
/ prog3.cpp
/
/ This is the .cpp implementaion file for the emergency broadcast system program. 
/ It contains all the definitions for all the class members of the program.
/
*/


#include "prog3.h"

using namespace std;

//Constructor for home phone contact information defined here..
home_phone::home_phone()
{
   
  firstname = NULL;
  lastname = NULL;
  home_phone_num = 0;

}

      
//Destructor for home phone contact information defined here..
home_phone::~home_phone()
{

  firstname = NULL;
  delete firstname;
  lastname = NULL;
  delete lastname;
}


//Utility funtion to insert in the first name of the contact
void home_phone::enter_first_name(const char * input_first_name)
{

  firstname = new char[strlen(input_first_name) + 1];
  strcpy(firstname, input_first_name);

}
      

//Utility funtion to insert in the last name of the contact
void home_phone::enter_last_name(const char * input_last_name)
{
 
  lastname = new char[strlen(input_last_name) + 1];
  strcpy(lastname, input_last_name);

}

      
//Function to return first name
char * home_phone::get_first_name()
{
  return firstname;
}

      
//Function to return first name
char * home_phone::get_last_name()
{
  return lastname;
}

      
//Function to enter in phone number
void home_phone::enter_phone_num(const char * input_home_phone_num)
{

  home_phone_num = new char[strlen(input_home_phone_num)];
  strcpy(home_phone_num,input_home_phone_num);
}
   

//Function to return phone number
char * home_phone::get_home_phone_num()
{
  return home_phone_num;
}


//Display function for home phone class
void home_phone::display()
{

  cout << "****************** Emergency Contact Info For home Phone is ************************ " << endl;


      cout <<"\n";
      cout <<"First Name is : " << get_last_name();
      cout <<"\n";
      cout <<"Last Name is : " <<  get_last_name();
      cout <<"\n";
      cout <<"Home Phone Number is : " <<  get_home_phone_num();
      cout <<"\n";


      cout << "\n";

  cout << "*********************************************************************** " << endl;



}   


     
//Constructor for work phone contact information class defined here..
work_phone::work_phone()
{
   
  firstname = NULL;
  lastname = NULL;
  work_phone_num = 0;

}

      
//Destructor for home phone contact information class defined here..
work_phone::~work_phone()
{

  firstname = NULL;
  delete firstname;
  lastname = NULL;
  delete lastname;
}


//Utility funtion to insert in the first name of the contact
void work_phone::enter_first_name(const char * input_first_name)
{

  firstname = new char[strlen(input_first_name) + 1];
  strcpy(firstname, input_first_name);

}
      

//Utility funtion to insert in the last name of the contact
void work_phone::enter_last_name(const char * input_last_name)
{
 
  lastname = new char[strlen(input_last_name) + 1];
  strcpy(lastname, input_last_name);

}

      
//Function to return first name
char * work_phone::get_first_name()
{
  return firstname;
}

      
//Function to return first name
char * work_phone::get_last_name()
{
  return lastname;
}

      
//Function to enter in work phone number
void work_phone::enter_work_num(const char * input_work_phone_num)
{
  work_phone_num = new char[strlen(input_work_phone_num) + 1];
  strcpy(work_phone_num, input_work_phone_num);
}
   

//Function to return work phone number
char * work_phone::get_work_phone_num()
{
  return work_phone_num;
}


//Display function for work phone class
void work_phone::display()
{

  cout << "****************** Emergency Contact Info For Work Phone Is ************************ " << endl;


      cout <<"\n";
      cout <<"First Name is : " << get_last_name();
      cout <<"\n";
      cout <<"Last Name is : " <<  get_last_name();
      cout <<"\n";
      cout <<"Work Phone Number is : " <<  get_work_phone_num();
      cout <<"\n";


      cout << "\n";

  cout << "*********************************************************************** " << endl;



}   

     
//Constructor for cell phone contact information class defined here..
cell_phone::cell_phone()
{
   
  firstname = NULL;
  lastname = NULL;
  cell_phone_num = 0;

}

      
//Destructor for cell phone contact information class defined here..
cell_phone::~cell_phone()
{

  firstname = NULL;
  delete firstname;
  lastname = NULL;
  delete lastname;
}


//Utility funtion to insert in the first name of the contact
void cell_phone::enter_first_name(const char * input_first_name)
{

  firstname = new char[strlen(input_first_name) + 1];
  strcpy(firstname, input_first_name);

}
      

//Utility funtion to insert in the last name of the contact
void cell_phone::enter_last_name(const char * input_last_name)
{
 
  lastname = new char[strlen(input_last_name) + 1];
  strcpy(lastname, input_last_name);

}

      
//Function to return first name
char * cell_phone::get_first_name()
{
  return firstname;
}

      
//Function to return last name
char * cell_phone::get_last_name()
{
  return lastname;
}

      
//Function to enter in cell phone number
void cell_phone::enter_cell_num(const char * input_cell_phone_num)
{
  cell_phone_num = new char[strlen(input_cell_phone_num) +1];
  strcpy(cell_phone_num, input_cell_phone_num);
}
   

//Function to return work phone number
char * cell_phone::get_cell_phone_num()
{
  return cell_phone_num;
}


void cell_phone::display()
{


  cout << "****************** Emergency Contact Info For Cell Phone Is ************************ " << endl;


      cout <<"\n";
      cout <<"First Name is : " << get_last_name();
      cout <<"\n";
      cout <<"Last Name is : " <<  get_last_name();
      cout <<"\n";
      cout <<"Cell Phone Number is : " <<  get_cell_phone_num();
      cout <<"\n";


      cout << "\n";

  cout << "*********************************************************************** " << endl;



}     

      
//Constructor for facebook contact information class defined here..
facebook::facebook()
{
   
  firstname = NULL;
  lastname = NULL;

}

      
//Destructor for facebook contact information class defined here..
facebook::~facebook()
{

  firstname = NULL;
  delete firstname;
  lastname = NULL;
  delete lastname;
}


//Utility funtion to insert in the first name of the contact
void facebook::enter_facebook_first_name(const char * input_first_name)
{

  firstname = new char[strlen(input_first_name) + 1];
  strcpy(firstname, input_first_name);

}
      

//Utility funtion to insert in the last name of the contact
void facebook::enter_facebook_last_name(const char * input_last_name)
{
 
  lastname = new char[strlen(input_last_name) + 1];
  strcpy(lastname, input_last_name);

}

      
//Function to return first name
char * facebook::get_facebook_first_name()
{
  return firstname;
}


//Function to return last name
char * facebook::get_facebook_last_name()
{
  return lastname;
}

void facebook::display()
{

  
  cout << "****************** Emergency Contact Info For Facebook Phone Is ************************ " << endl;


      cout <<"\n";
      cout <<"First Name is : " << get_facebook_last_name();
      cout <<"\n";
      cout <<"Last Name is : " <<  get_facebook_last_name();
      cout <<"\n";

      cout << "\n";

  cout << "*********************************************************************** " << endl;


}


     
//Constructor for twitter contact information class defined here..
twitter::twitter()
{
   
  firstname = NULL;
  lastname = NULL;

}

      
//Destructor for twitter contact information class defined here..
twitter::~twitter()
{

  firstname = NULL;
  delete firstname;
  lastname = NULL;
  delete lastname;
}


//Utility funtion to insert in the first name of the contact
void twitter::enter_twitter_first_name(const char * input_first_name)
{

  firstname = new char[strlen(input_first_name) + 1];
  strcpy(firstname, input_first_name);

}
      

//Utility funtion to insert in the last name of the contact
void twitter::enter_twitter_last_name(const char * input_last_name)
{
 
  lastname = new char[strlen(input_last_name) + 1];
  strcpy(lastname, input_last_name);

}

      
//Function to return first name
char * twitter::get_twitter_first_name()
{
  return firstname;
}


//Function to return last name
char * twitter::get_twitter_last_name()
{
  return lastname;
}


void twitter::display()
{

  
  cout << "****************** Emergency Contact Info For Twitter Phone Is ************************ " << endl;


      cout <<"\n";
      cout <<"First Name is : " << get_twitter_last_name();
      cout <<"\n";
      cout <<"Last Name is : " <<  get_twitter_last_name();
      cout <<"\n";

      cout << "\n";

  cout << "*********************************************************************** " << endl;


}



//lllnode class constructor
lll_node::lll_node()
{
  next = NULL;
}


//lllnode class constructor
lll_node::~lll_node()
{
  delete next;
  next = NULL;

}


//return next pointer by refrence
lll_node *& lll_node::get_next()
{
  return next;
}


//bstnode class constructor
bst_node::bst_node()
{
  left = NULL;
  right = NULL;
}
            

//bstnode class constructor
bst_node::~bst_node()
{
  delete left;
  left = NULL;
  delete right;
  right = NULL;
}


void bst_node::set_left(bst_node * in_left)
{
  left = in_left;
}

void bst_node::set_right(bst_node * in_right)
{
  right = in_right;
}


bst_node * & bst_node::go_left()
{
  return left;
}
            

bst_node * & bst_node::go_right()
{
  return right;
}
            

bool bst_node::if_left() const
{
  if(!left)
    return false;

  else
    return true;
}
            

bool bst_node::if_right() const
{
  if(!right)
    return false;

  else
    return true;
}            


//Bst constructor defined here
bst::bst()
{
    root = NULL;
}

//Destructor defined here
bst::~bst()
{
    destroy(root);
}


//Assignment operator overloaded
bst & bst::operator = (const bst & other_tree)
{

  if(this != &other_tree)
  {
    if(this -> home_phone::firstname)
      {
        delete [] home_phone::firstname;
        
        this -> home_phone::firstname = new char[strlen(other_tree.home_phone::firstname) + 1];
        strcpy(this -> home_phone::firstname, other_tree.home_phone::firstname);

      }
  
  if(other_tree.bst_node::left != NULL)
  {
    this -> left = new bst_node;;
  } 

  else
    left = NULL;

  if(other_tree.bst_node::right != NULL)
  {
    this -> right = new bst_node;
  }
 
  else
    right = NULL; 
  }
  
  return *this;

}


//This is the deallocate memory function which the destructor calls
int bst::destroy(bst_node * & root)
{
        if (!root) return 0;

        else
        {
            destroy(root->go_left());
            destroy(root->go_right());
            delete root;
            root = NULL;
            return 1;
        }
}


//This function inserts a contact information specified into the bst upon user input through the arguments
int bst::insert_home(bst_node * & root, char input_first_name [], char input_last_name [], char input_phone_number [])
{

        if (!root)
        {
            root = new bst_node;
            root -> home_phone::enter_first_name(input_first_name);
            root -> home_phone::enter_last_name(input_last_name);
            root -> home_phone::enter_phone_num(input_phone_number);
            root -> go_left() = NULL;
            root -> go_right() = NULL;
        }

        else if (input_first_name  <= root-> home_phone::get_first_name())//The contact name is to be addedd is less than root alphabetically, insert left
                insert_home(root -> go_left(), input_first_name, input_last_name, input_phone_number);
        else
                insert_home(root -> go_right(), input_first_name, input_last_name, input_phone_number);//The contact name is to be addedd is greater than root alphabetically, insert left                                     

        return 1;

}


//Display function displays the current record of emergencies in in order traversal
int bst::displayall(bst_node * root)
{
    if (!root) return 0; //Empty tree, return 0

    
    cout << root -> home_phone::get_first_name();
    cout << root -> home_phone::get_last_name();
    cout << root -> home_phone::get_home_phone_num();

    displayall(root -> go_left());
    displayall(root -> go_right());
        
    return 1;

}


//Wrapper for display function
int bst::displayall()
{
    displayall(root);
    return 1;
}




