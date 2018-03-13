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

package Prog4;

public class Node 
{
	private Node left;
	private Node right;
	String BednBreakfast_name;
        String Location;
        String Lodge_type;
        String Availability;
	private int Num_guests;
	private int namepos;
	public Node next;
	private Node root;

	//Zero Parameter constructor
	public Node()
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
	public Node(int add, String input_bed_n_breakfast, String input_location, String input_lodge_type, String input_availability, int input_num_guest)
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
	public void setLeft(Node left_in)
	{
		left = left_in;
	}

	//Set the right pointer or reference to the argument passed in..
	public void setRight(Node right_in)
	{
		right = right_in;
	}

	//Function to set the name of the bed and breakfast based on the input provided..
	public void setData(String input_bed_n_breakfast)
	{
		BednBreakfast_name = input_bed_n_breakfast;
	}

	//Return left reference
	public Node getLeft()
	{
		return left;
	}

	//Return right reference
	public Node getRight()
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
	
	private void printer(Node store)
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
