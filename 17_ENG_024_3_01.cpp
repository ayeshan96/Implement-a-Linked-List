//Header file
#include<iostream>

//Declare namespace
using namespace std;

//Class Node
class NODE
{

//Declare private variables
private:
	NODE*beginning;
	NODE*end;

	//Declare public variables
public:
	int data;
	NODE*next;

	//Default constructor to assign valuse
	NODE()
	{
		//Private varibles equal to NULL
		beginning = NULL;
		end = NULL;
	}

	//Function list
	void adddata(int val);
	void beg(int n);
	void deletebig();
	void deleteend();
	void delval(int dval);
	void search(int sval);
	void sum();
	void showdata();
};

//Main function
int main()
{
	//Get the user input
	cout << "Input number of nodes : ";

	//declare variable
	int a;

	//get values
	cin >> a;

	//declare dma
	int *array=new int[a];

	//getting spaces
	cout << endl << endl;

	//Input data to the node
	for (int i = 0; i < a; i++)
	{
		//get the output
		cout << "Input data for node " << i + 1 << " : ";

		//getting input
		cin>>array[i];

		//getting spaces
		cout << endl;
	}
	
	//Create class objects
	NODE ob1;

	//Create the linked list
	for (int i = 0; i < a; i++)
	{
		//calling function
		ob1.adddata(array[i]);
	}

	//Clear the screen
	system("cls");

	
	x:

	//Output to the console window
	cout << "\n\n\n\t1 - Insert Beginning\n\t2 - Insert End\n\t3 - Delete Beginning\n\t4 - Delete End\n\t5 - Delete Value\n\t6 - Print\n\t7 - Search\n\t8 - Sum\n\t9 - EXIT\n\n\n";
	cout << "Enter your choice : ";
	
	//declare variable
	int b;

	//Get the user input
	cin >> b;

	//clear console window
	system("cls");

	//Enter values at the beginning
	if (b == 1)
	{
		//output to the console window
		cout << "Input your value which you wish to enter : ";

		//declare variables
		int c;

		//getting user input
		cin >> c;

		//clear console window
		system("cls");

		//output to the console window
		cout << "Previous Linked List\n\n\n";

		//calling showdata function
		ob1.showdata();

		//calling beg function
		ob1.beg(c);

		//output to the console window
		cout << "\n\n\n\nPresent Linked List\n\n\n";

		//calling showdata function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Enter values at the end of the node
	else if (b == 2)
	{
		//output to the console window
		cout << "Input your value which you wish to enter : ";

		//declare variable
		int c;

		//getting user input
		cin >> c;

		//clear console window
		system("cls");

		//output to the console window
		cout << "Previous Linked List\n\n\n";

		//calling showdata function
		ob1.showdata();

		//calling adddata function
		ob1.adddata(c);

		//output to the console window
		cout << "\n\n\n\nPresent Linked List\n\n\n";


		//calling showdata function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Delete the beginning value
	else if (b == 3)
	{
		//output to the console window
		cout << "Previous Linked List\n\n\n";

		//calling showdata function
		ob1.showdata();

		//output to the console window
		cout << "\n\n\n\nPresent Linked List\n\n\n";

		//calling deletebig function
		ob1.deletebig();

		//calling showdata function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Delete the end value
	else if (b == 4)
	{
	//output to the console window
	cout << "Previous Linked List\n\n\n";

	//calling showdata function
	ob1.showdata();

		//calling deleteend function
		ob1.deleteend();

		//output to the console window
		cout << "\n\n\n\nPresent Linked List\n\n\n";

		//calling showdata function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Delete the given value
	else if (b == 5)
	{
	//output to the console window
		cout << "Input your value which you wish to delete : ";

		//declare variable
		int dval;

		//getting input
		cin >> dval;

		//clear console window
		system("cls");

		//output to the console window
		cout << "Previous Linked List\n\n\n";

		//calling showdata function
		ob1.showdata();

		//output to the console window
		cout << "\n\n\n\nPresent Linked List\n\n\n";

		//calling delval function
		ob1.delval(dval);

		//calling showdata function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Print data in the Linked List
	else if (b == 6)
	{
	//output to the console window
	cout << "Present Linked List\n\n\n";

		//calling showdata function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Search a valus in the list
	else if (b == 7)
	{
		//output to the console window
		cout << "Input your value which you wish to search : ";

		//declare variable
		int sval;

		//getting input
		cin >> sval;

		//clear console window
		system("cls");

		//output to the console window
		cout << "Present Linked List\n\n\n";

		//calling showdata function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl << endl;

		//calling search function
		ob1.search(sval);

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Get the total of values in the list
	else if (b == 8)
	{
	//output to the console window
	cout << "Present Linked List\n\n\n";

	//calling showdata function
	ob1.showdata();

	//getting spaces
	cout << endl << endl << endl;

		//calling sum function
		ob1.sum();

		//getting space lines
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Exit from the programme
	else if (b == 9)
	{
		//exit the programme
		exit(0);
	}

	//Validate the user input
	else
	{
		//output to the console window
		cout << "Wrong Input. Enter again.....!!!\n\n\n";

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Waiting for the user input
	system("pause");
	return 0;
}

//Insert value at the beginning
void NODE::adddata(int val)
{
	//Create a node
	NODE* newnode = new NODE();

	//insert value to the linked list
	newnode->data = val;
	newnode->next = NULL;

	//condition checking
	if (beginning == NULL) 
	{
		beginning = newnode;
	}
	//condition checking
	else 
	{
		NODE* temp = beginning;
		while (temp->next != NULL) 
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	
}

//Insert values at the end
void NODE::beg(int n)
{
	
	NODE *tmp = new NODE;

	//insert value to the node
	tmp->data = n;
	tmp->next = beginning;
	beginning = tmp;
}

//Delete the value from the beginning
void NODE::deletebig()
{
	//condition checking
	if (beginning == NULL)
	{
		//output to the console window
		cout << "Linked List is Empty\n\n\n";

		//pause output
		system("pause");

		//exit the programme
		exit(0);
	}

	//condition checking
	else if (beginning->next == NULL)
	{
		//insert value to the node
		NODE *temper = beginning;
		beginning = beginning->next;
		free(temper);
	}

	//condition checking
	else
	{
		//insert value to the node
		NODE *temper = beginning;
		beginning = beginning->next;
		free(temper);
	}
}

//Delete the value at the end of the node
void NODE::deleteend()
{
	//condition checking
	if (beginning == NULL)
	{
		//output to the console window
		cout << "Linked List is Empty\n\n\n";

		//pause the output
		system("pause");

		//exit programme
		exit(0);
	}

	//condition checking
	else if (beginning->next == NULL)
	{
		//delete value
		NODE *temper = beginning;
		beginning = beginning->next;
		free(temper);
	}

	//condition checking
	else
	{
		//delete value
		NODE*prelast = beginning;
		while (prelast->next->next != NULL)
		{
			prelast = prelast->next;
		}

		delete(prelast->next);
		
		prelast->next = NULL;
		
	}
}

//Function to delete the given value
void NODE::delval(int dval)
{
	//condition checking
	if (beginning == NULL)
	{
		//output to the console window
		cout << "Linked List is Empty\n\n\n";

		system("pause");
		exit(0);
	}
	//condition checking
	else if(beginning->data==dval)
	{
		//delete value
		NODE *temper = beginning;
		beginning = beginning->next;
		free(temper);
	}

	//condition checking
	else
	{
	//delete value
		NODE *temp = beginning;
		NODE *pre = new NODE();
		while (temp->data != dval)
		{			
			pre = temp;
			temp = temp->next;
			if (temp->next == NULL)
			{
				break;

			}
		}

		//condition checking
		if (temp->next == NULL && temp->data != dval)
		{
			//output to the console window
			cout << "There is no value which you want to delete\n\n\n";
		}
		
		//condition checking
		else
		{
			pre->next = temp->next;
			temp = NULL;
		}
	}
}

//Search a value from the list
void NODE::search(int sval)
{
	NODE *temp = beginning;

	//condition checking
	if (beginning == NULL)
	{
		//output to the console window
		cout << "Linked List is Empty\n\n\n";
	}
	//condition checking
	else
	{
		//declare variable
		int count = 0;
		while (temp->data != sval)
		{
			//condition checking
			if (temp->next == NULL && temp->data !=sval)
			{
				break;
				
				
			}
			//increase value
			count = count + 1;
			temp = temp->next;
		}

		//condition checking
		if (temp->data == sval)
		{
			//output to the console window
			cout << "Index of the search number = " << count + 1 << endl << endl;

			
		}
		//condition checking
		else
		{
			//output to the console window
			cout << "There is no value which search\n\n\n";
			
		}


	}
}

//Get the totl of the list
void NODE::sum()
{
	NODE *temp = beginning;

	//condition checking
	if (beginning == NULL)
	{
		//output to the console window
		cout << "Linked List is Empty\n\n\n";
	}
	//condition checking
	else
	{
		//declare variable
		int s = 0;
		while (temp != NULL)
		{
			s=s+ temp->data;
			temp = temp->next;
		}

		//output to the console window
		cout << "Sum of the Linked List values = " << s<<endl<<endl;
	}
}

//Print the linked list
void NODE :: showdata()
{
	NODE *temp = beginning;

	//condition checking
	if (beginning == NULL)
	{
		//output to the console window
		cout << "Linked List is Empty\n\n\n";
	}
	//condition checking
	else
	{
		while (temp != NULL)
		{
			//getting space lines
			cout << temp->data << "\t\t" << temp->next << endl;
			temp = temp->next;
		}
	}
}