package Prog4;

/* Sid Abdullahi 
 * 
 * CS202 - Program 4 - Bed and Breakfast Reservation Application
 *
 *3/08/2017
 *
 * The purpose of this program is to help a user find a bed and breakfast location within a specific area.  
 * A listing of Bed and Breakfast locations will be provided to the user and the user will have the ability to choose with location they prefer
 * The data structure for this assignment is a Binary Search Tree. I am using a Linked list in the program to help assist with storing some of the locations to be displayed. 
 * The goal of this application is still try to solve this problem using Object Oriented Solutions as much as possible
 * with dynamic binding and function overloading.
 */

//BST class is implemented and defined here...
public class Bst 
{
	private Node root;

	//Constructor for Bst class..
	public Bst()
	{
		root = null;
	}

	//insert the Bed and Breakfast in the BST structure...
	private Node insert(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest, Node tree)
	{
		if (tree == null) 
		{
			tree = new Node(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest);
		}
		
		else if(add >= tree.getnamepos())
		{
			tree.setRight(insert(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest, tree.getRight()));
		}
			
		else 
		{
			tree.setLeft(insert(add, input_bed_n_breakfast, input_location, input_lodge_type, input_availability, input_num_guest, tree.getLeft()));
		}
		  return tree;
	}
	
	public void delete(int d)
	{
		root = delete(d, root);
	}

	//Delete function to remove a Bed and Breakfast Location from the database
	private Node delete(int val, Node tree){
		if (tree == null) 
		{
			System.out.println("Database is empty");
		}
		
		else if(val > tree.getnamepos())
		{
			tree.setRight(delete(val, tree.getRight()));
		}
		else if(val < tree.getnamepos())
		{
			tree.setLeft(delete(val, tree.getLeft()));
		}
		else {
			if (tree.getLeft() == null) 
			{
				return tree.getRight();
			}
			else if (tree.getRight() == null){
				return tree.getLeft();
			}
			
		}
		return tree;
	}
	
	
	
	public void print()
	{
		//printer(root);	
		System.out.println();
	}
	
	private void printer(Node tree)
	{
		if (tree.getLeft() != null) 
		{
			printer(tree.getLeft());
		}
		System.out.print(tree.get_bednbreakfast_name());
		if (tree.getRight() != null) 
		{
			printer(tree.getRight());
		}
	}
	
	
	public static void main(String[] args) 
	{
		//Node Structure to hold BednBreakfast information is defined here..
		Node storing = new Node();
		
		//BST data structure object is instantiated here..
		Bst bst = new Bst();
		
		//Bed and Breakfast Locations are here..
		bst.insert(1, "Ocean Front Cottage", "Yachats,Or", "Entire Home/APT 3 Bedroom", "Available for rent",4, storing);
		bst.insert(4, "Peaceful Retreat in Thriving NE", "Portland,Or", "Entire Home", "Available for rent", 3, storing);
		bst.insert(5, "Oceanfront Fabulous View! (205)","Salem,Or", "3 Bedroom APT","Available for rent", 3,  storing);
		bst.insert(8, "Cozy mud hut with big bridge view","Vancouver, WA", "Private Room", "NOT Available now", 2, storing);
		bst.insert(2, "Mermaid Suite with private hot tub","Salem,Or", "Private Room", "Available on 3/29/2017", 2, storing);
		bst.insert(4, "Off-grid Adobe Dome in the Desert", "Kahneeta,Or", "Entire Home", "Available for rent", 3, storing);
		bst.insert(3, "Half Moon Cozy Off-Grid Cabin", "Medford,Or", "Cabin Lodge", "Available for rent", 5, storing);
		bst.insert(12, "Urban Whiteaker Cottage", "Ontario,Or", "Entire Home", "NOT Available until 04/01/2017", 3, storing);
		bst.insert(7, "Sunny Peaceful Ocean Cottage", "Seaside,Or", "Entire Home - Oceanfront", "Available for rent", 6, storing);
		bst.insert(14, "Covered Bridge--Featured on HGTV", "Reno,NV", "Entire Home", "Available for rent", 5, storing);

				
		//An Object of the Room class is instantiated here for dynamic binding purposes..
		BednBreakfast a_room = new Room();;
		
		//An Object of the Apartment class is instantiated here for dynamic binding purposes..
		BednBreakfast a_apartment = new Apartment();
				
		//An Object of the House class is instantiated here for dynamic binding purposes..
		BednBreakfast a_house = new House();;
		
		//An Object of Linear Linked List is created here to hold lodging information database for the locations..
		LinkedList list = new LinkedList();
		
		
		//Here is where all the applicants are stored for the supervisor to observe and analyze
		list.add_head(4, "Half Moon Cozy Off-Grid Cabin", "Medford,Or", "Cabin Lodge", "Available for rent", 5);	
		list.add_head(14, "Urban Whiteaker Cottage", "Ontario,Or", "Entire Home", "NOT Available until 04/01/2017", 3);	
		list.add_head(10, "Covered Bridge--Featured on HGTV", "Reno,NV", "Entire Home", "Available for rent", 5);
		list.add_head(6, "Off-grid Adobe Dome in the Desert", "Kahneeta,Or", "Entire Home", "Available for rent", 3);	
		list.add_head(2, "Mermaid Suite with private hot tub","Salem,Or", "Private Room", "Available on 3/29/2017", 2);	
		list.add_head(5, "Peaceful Retreat in Thriving NE", "Portland,Or", "Entire Home", "Available for rent", 3);	
		list.add_head(8, "Cozy mud hut with big bridge view","Vancouver, WA", "Private Room", "NOT Available now", 2);	
		list.add_head(1, "Ocean Front Cottage", "Yachats,Or", "Entire Home/APT 3 Bedroom", "Available for rent",4);
		list.add_head(3, "Half Moon Cozy Off-Grid Cabin", "Medford,Or", "Cabin Lodge", "Available for rent", 5);


		//Print the current possible candidates..
		System.out.println("************************ Welcome to the BedNBreakfast Listing Database ************************");
	    System.out.println('\n');
	    

	    System.out.println("Here is A Listing Of The Available BedNBreakfast Rooms Currently In The Query Within 500 miles of Portland.. ");
	    
	    System.out.println('\n');
				
	    //Here are the candidates...
	    list.printList();
		
	    //Tree of BnB printed here..
	    bst.print();
		
	}

}


class LinkedList
{
	private Node head;
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
  		Node newNode = new Node();						
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
	    Node current = head;
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
    abstract boolean find_bednbreakfast(Node head, String input_bed_n_breakfast); //Retrieve a BednBreakfast information based on search
    abstract void display_bednbreakfast(Node head); //Display all current listings of locations available
    abstract void remove_bednbreakfast(Node head, String name); //Remove a possible BednBreakfast location from the database
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

	
	boolean find_bednbreakfast(Node head, String input_bed_n_breakfast) 
	{
		Node current = null;
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

	void display_bednbreakfast(Node head)
	{
		  Node current = head;
		  System.out.print("List: ");
		  
		  while(current != null) 
		  {
			    current.printLink();
			    current = current.next;
		  }
		    System.out.println("");
	     
		
	}

	
	void remove_bednbreakfast(Node head, String name) 
	{
		Node current ;						
		Node previous = null;						
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

	
	boolean find_bednbreakfast(Node head, String input_bed_n_breakfast) 
	{
		Node current = null;
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

	void display_bednbreakfast(Node head)
	{
		  Node current = head;
		  System.out.print("List: ");
		  
		  while(current != null) 
		  {
			    current.printLink();
			    current = current.next;
		  }
		    System.out.println("");
	     
		
	}

	
	void remove_bednbreakfast(Node head, String name) 
	{
		Node current ;						
		Node previous = null;						
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

	
	boolean find_bednbreakfast(Node head, String input_bed_n_breakfast) 
	{
		Node current = null;
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

	void display_bednbreakfast(Node head)
	{
		  Node current = head;
		  System.out.print("List: ");
		  
		  while(current != null) 
		  {
			    current.printLink();
			    current = current.next;
		  }
		    System.out.println("");
	     
		
	}

	
	void remove_bednbreakfast(Node head, String name) 
	{
		Node current ;						
		Node previous = null;						
		current = head;
		while(name != current.BednBreakfast_name)
		{
			previous = current;
			current=current.next;
		}
		
	}


	
}

