/* Sid Abdullahi 
 * 
 * CS202 - Program 5 - Bed and Breakfast Reservation Application
 *
 * 3/13/2017
 *
 * The purpose of this program is to help a user find a bed and breakfast location within a specific area.  
 * A listing of Bed and Breakfast locations will be provided to the user and the user will have the ability to choose with location they prefer
 * The data structure for this assignment is a Doubly Linked List of Arrays. This program is a continuation of the previous program 4 which uses the same dataset of Bed and Breakfast locations. 
 * The goal of this application is still try to solve this problem using Object Oriented Solutions as much as possible
 * with dynamic binding and function overloading.
 */
package Prog5;

import java.util.Scanner;

//dll node class that contains an array Bed and Breakfast locations in a city
class dllnode
{
	
  protected dllnode next;
  protected dllnode previous;
  int num_items;
  String array [];

  //dll constructor defined here..
  public dllnode(int array_size)
  {
	  next = null;
	  previous = null;
	  num_items = 0;
	  array = new String[array_size];
			  
  }

  public void setnext(dllnode n)
  {
	  next = n;
  }
  
  public void setprevious(dllnode p)
  {
	  previous = p;
  }
  
  public dllnode getnext()
  {
	  return next;
  }
  
  public dllnode getprevious()
  {
	  return previous;
  }
  
  
}


class doublylinkedlist
{
	protected dllnode head;
	protected dllnode end;
	protected int sizedllarray;
	protected int numdllnodes;
	private static final int container_size = 20;
	
	//dll constructor
	public doublylinkedlist(int capacity)
	{
		head = null;
		end = null;
		numdllnodes = 0;
		sizedllarray = capacity + 1;
	}
	
	//check if the dll is empty
	public boolean isEmpty()
	{
		return head == null;
	}
	
	//get the size of the dll
	public int getsize()
	{
		return numdllnodes;
	}

    //deallocate list if needed
	public void destroy()
	{
		head = null;
		end = null;
		numdllnodes = 0;
	}
	
	//Insert a Bnb into the database
	public void insert(String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability)
	{
		
		++numdllnodes;
		
		dllnode temp = new dllnode(container_size);
		temp.array[0] = input_bed_n_breakfast;
		temp.array[1] = input_location;
		temp.array[2] = input_lodge_type;
		temp.array[3] = input_availability;
	
		if(head == null)
		{
			head = temp;
			end = head;
			++head.num_items;
     		return;		
		}
		
		else
		{
			head.setprevious(temp);
			temp.setnext(head);
			++head.num_items;
			head = temp;
		}	
	
	}
	
 
	
	public void display()
	{
			
		if(head == null)
		{
			System.out.print("empty\n");
			return;
		}
		
	    dllnode ptr = head;
		
		while(ptr != null)
		{
					
			for(int i = 0; i < ptr.num_items; ++i)
			{
							
				System.out.println("Name of bnb : " + ptr.array[i] + " ");
				System.out.println("Location of bnb : " + ptr.array[i + 1] + " ");
				System.out.println("Lodge Type of bnb : " + ptr.array[i + 2 ] + " ");
				System.out.println("Availability of bnb : " + ptr.array[i + 3] + " ");

				System.out.println();
			}
		
			System.out.println();
			
			ptr = ptr.getnext();
			
		
		}
		
		
	}

	
}


class LLLNode 
{
	private LLLNode left;
	private LLLNode right;
	String BednBreakfast_name;
    String Location;
    String Lodge_type;
    String Availability;
	private int Num_guests;
	private int namepos;
	public LLLNode next;
	private LLLNode root;

	//Zero Parameter constructor
	public LLLNode()
	{
		left = null;
		right = null;
		namepos = 0;	
		Num_guests = 0;
	}

	//Specify tag id to place in the tree..
	public void setnamepos(int num)
	{
		namepos = num;
	}
	
	//Input number of guests allowed
	public void set_num_guests(int input_num_guests)
  	{
  		Num_guests = input_num_guests;
  	}
	
	
	//Obtain Specify tag id to place in the tree..
	public int getnamepos()
	{
		return namepos;
	}
	
	//Multi parameter constructor
	public LLLNode(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest)
	{
		left = null;
		right = null;
		BednBreakfast_name = input_bed_n_breakfast;
		Location = input_location;
		Lodge_type = input_lodge_type;
		Availability = input_availability;
		Num_guests = input_num_guest;
		namepos = add;
	}
	
    
	//Set the left pointer or reference to the argument passed in..
	public void setLeft(LLLNode left_in)
	{
		left = left_in;
	}

	//Set the right pointer or reference to the argument passed in..
	public void setRight(LLLNode right_in)
	{
		right = right_in;
	}

	//Function to set the name of the bed and breakfast based on the input provided..
	public void setData(String input_bed_n_breakfast)
	{
		BednBreakfast_name = input_bed_n_breakfast;
	}

	//Return left reference
	public LLLNode getLeft()
	{
		return left;
	}

	//Return right reference
	public LLLNode getRight()
	{
		return right;
	}

	//Return the current name for the BedNBreakfast
	public String get_bednbreakfast_name()
	{
		return BednBreakfast_name;
	}

	 //Print Link data
    public void printLink() 
    {
	    System.out.println("Bed and Breakfast Name is : " + BednBreakfast_name);
	    System.out.println("Bed and Breakfast Location is : " + Location);
	    System.out.println("Lodge Type is : " + Lodge_type);
	    System.out.println("Availability : " + Availability);
	    System.out.println("Number of Guests Allowed is : " + Num_guests);
    
    
    }
	
    public void print()
	{
		printer(root);	
		System.out.println();
	}
	
	private void printer(LLLNode store)
	{
		if (store.getLeft() != null) 
		{
			printer(store.getLeft());
		}
		System.out.print(store.getnamepos());
		if (store.getRight() != null) 
		{
			printer(store.getRight());
		}
	}
    
    
}



class LinkedList
{
	private LLLNode head;
  	private String bnbnametype;
	private String location;
	String BednBreakfast_name;
    String Location;
    String Lodge_type;
    String Availability;
	private int Num_guests;
	private int namepos;
  	  	
    
	//Default Linked List Constructor
  	public LinkedList()
  	{
		head = null;
	}
  	
  	public void set_num_guests(int input_num_guests)
  	{
  		Num_guests = input_num_guests;
  	}
  	
  	
  	//Linked List Constructor with Arguments
  	public LinkedList(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest)
  	{
		head = null;
		BednBreakfast_name = input_bed_n_breakfast;
		Location = input_location;
		Lodge_type = input_lodge_type;
		Availability = input_availability;
		Num_guests = input_num_guest;
		namepos = add;
	}
  	
  
  	//Insert First Element at head
  	public void add_head(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest)
  	{		
  		LLLNode newNode = new LLLNode();						
  		newNode.BednBreakfast_name = input_bed_n_breakfast;
		newNode.Location = input_location;
		newNode.Lodge_type = input_lodge_type;
		newNode.Availability = input_availability;
		newNode.set_num_guests(input_num_guest);
		newNode.setnamepos(add);
  		newNode.next = head;						
  		head = newNode;								
  										
  	}
  

  	//Print Node data
    public void printLink() 
    {
	    System.out.println(" BedNBreakfast is " + bnbnametype);
    }
  	
  	
    //Prints list data
    public void printList() 
    {
	    LLLNode current = head;
	    System.out.print("***** Here Is A Directory Of The All The Bed and Breakfast Locations In The Area Below..: ");
	    System.out.println();
	    while(current != null) {
		    System.out.println();
	    	current.printLink();
		    System.out.println();
		    current = current.next;
	    }
	    System.out.println("");
    }   
}




/* Abstract base class is defined below to allow for dynamic binding to the correct function for the Bed and Breakfast Location*/
abstract class BednBreakfast
{
	/* Functions for abstract base class to be implemented differently by inheriting classes  */
    abstract void add_bednbreakfast(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest); //Add BednBreakfast to listings
    abstract void add_location(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest); //Add a new BednBreakfast to the to the current listings
    abstract boolean find_bednbreakfast(LLLNode head, String input_bed_n_breakfast); //Retrieve a BednBreakfast information based on search
    abstract void display_bednbreakfast(LLLNode head); //Display all current listings of locations available
    abstract void remove_bednbreakfast(LLLNode head, String name); //Remove a possible BednBreakfast location from the database
}


class Room extends BednBreakfast
{

	void add_bednbreakfast(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest) 
	{
	
     LinkedList list = new LinkedList();
	 list.add_head(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest);	
	
	}

	void add_location(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest) 
	{
		 LinkedList list = new LinkedList();
		 list.add_head(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest);
		
	}

	
	boolean find_bednbreakfast(LLLNode head, String input_bed_n_breakfast) 
	{
		LLLNode current = null;
		current = head;
		while(current != null)
		{
			if(input_bed_n_breakfast == current.BednBreakfast_name)
			{
				return true;
			}
			current = current.next;
		}
			return false;
		
	}

	void display_bednbreakfast(LLLNode head)
	{
		  LLLNode current = head;
		  System.out.print("List: ");
		  
		  while(current != null) 
		  {
			    current.printLink();
			    current = current.next;
		  }
		    System.out.println("");
	     
		
	}

	
	void remove_bednbreakfast(LLLNode head, String name) 
	{
		LLLNode current ;						
		LLLNode previous = null;						
		current = head;
		while(name != current.BednBreakfast_name)
		{
			previous = current;
			current=current.next;
		}
		
	}


	
		
}

class Apartment extends BednBreakfast
{

	void add_bednbreakfast(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest) 
	{
	
     LinkedList list = new LinkedList();
	 list.add_head(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest);	
	
	}

	void add_location(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest) 
	{
		 LinkedList list = new LinkedList();
		 list.add_head(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest);
		
	}

	
	boolean find_bednbreakfast(LLLNode head, String input_bed_n_breakfast) 
	{
		LLLNode current = null;
		current = head;
		while(current != null)
		{
			if(input_bed_n_breakfast == current.BednBreakfast_name)
			{
				return true;
			}
			current = current.next;
		}
			return false;
		
	}

	void display_bednbreakfast(LLLNode head)
	{
		  LLLNode current = head;
		  System.out.print("List: ");
		  
		  while(current != null) 
		  {
			    current.printLink();
			    current = current.next;
		  }
		    System.out.println("");
	     
		
	}

	
	void remove_bednbreakfast(LLLNode head, String name) 
	{
		LLLNode current ;						
		LLLNode previous = null;						
		current = head;
		while(name != current.BednBreakfast_name)
		{
			previous = current;
			current=current.next;
		}
		
	}

	
}



class House extends BednBreakfast
{

	
	void add_bednbreakfast(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest) 
	{
	
     LinkedList list = new LinkedList();
	 list.add_head(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest);	
	
	}

	void add_location(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest) 
	{
		 LinkedList list = new LinkedList();
		 list.add_head(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest);
		
	}

	
	boolean find_bednbreakfast(LLLNode head, String input_bed_n_breakfast) 
	{
		LLLNode current = null;
		current = head;
		while(current != null)
		{
			if(input_bed_n_breakfast == current.BednBreakfast_name)
			{
				return true;
			}
			current = current.next;
		}
			return false;
		
	}

	void display_bednbreakfast(LLLNode head)
	{
		  LLLNode current = head;
		  System.out.print("List: ");
		  
		  while(current != null) 
		  {
			    current.printLink();
			    current = current.next;
		  }
		    System.out.println("");
	     
		
	}

	
	void remove_bednbreakfast(LLLNode head, String name) 
	{
		LLLNode current ;						
		LLLNode previous = null;						
		current = head;
		while(name != current.BednBreakfast_name)
		{
			previous = current;
			current=current.next;
		}
		
	}


	
}







public class prog5 
{
    public static void main(String[] args) 
    {
    	
		System.out.println("************************ Welcome to the BedNBreakfast Listing Database ************************");
	    System.out.println('\n');
	    
	    System.out.println("Here is A Listing Of The Available BedNBreakfast Rooms Currently Available for rent.. ");
	    
	    System.out.println('\n');

	    System.out.println("These listings are within the Oregon/SW Washington Area.. ");
	    
	    System.out.println();
    	
	    //An Object of the Room class is instantiated here for dynamic binding purposes..
	  	BednBreakfast a_room = new Room();;
	  		
	  	//An Object of the Apartment class is instantiated here for dynamic binding purposes..
	  	BednBreakfast a_apartment = new Apartment();
	  				
	  	//An Object of the House class is instantiated here for dynamic binding purposes..
	  	BednBreakfast a_house = new House();;
	  		
	  	//An Object of Linear Linked List is created here to hold lodging information database for the locations..
	  	LinkedList list = new LinkedList();
    	
	  	
    	
    	 doublylinkedlist dlllist = new doublylinkedlist(2000);
	     
		 dlllist.insert("Half Moon Cozy Off-Grid Cabin", "Medford,Or", "Cabin Lodge", "Available for rent");
		 dlllist.insert("Mermaid Suite with private hot tub","Salem,Or", "Private Room", "Available on 3/29/2017");
		 dlllist.insert("Peaceful Retreat in Thriving NE", "Portland,Or", "Entire Home", "Available for rent");
		 dlllist.insert("Oceanfront Fabulous View! (205)","Salem,Or", "3 Bedroom APT","Available for rent");
		 dlllist.insert("Cozy mud hut with big bridge view","Vancouver, WA", "Private Room", "NOT Available now");
		 dlllist.insert("Mermaid Suite with private hot tub","Salem,Or", "Private Room", "Available on 3/29/2017");
		 dlllist.insert("Off-grid Adobe Dome in the Desert", "Kahneeta,Or", "Entire Home", "Available for rent");
		 dlllist.insert("Half Moon Cozy Off-Grid Cabin", "Medford,Or", "Cabin Lodge", "Available for rent");
		 dlllist.insert("Urban Whiteaker Cottage", "Ontario,Or", "Entire Home", "NOT Available until 04/01/2017");
		 dlllist.insert("Sunny Peaceful Ocean Cottage", "Seaside,Or", "Entire Home - Oceanfront", "Available for rent");
		 dlllist.insert("Covered Bridge--Featured on HGTV", "Reno,NV", "Entire Home", "Available for rent");
		 
		 
		 dlllist.display();
	    	
    	
    	
    }
    
    
}












