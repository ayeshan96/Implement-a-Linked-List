# Implement-a-Linked-List

* The class LinkedList as defined by the following skeleton. Each node of the linked list should be able to hold an integer value. After executing every selected operation, program should print the updated linked list to the console.

```
	class LinkedList{
	private:
	Node* start;
	public:
	void insertBeg(int X);//Insert a new node at the beginning
	void insertEnd(); //Insert a node at the end
	void deleteBeg(); //Delete a node from the beginning
	void deleteEnd(); //Delete a node from the end
	void delete(int D); //Delete a node with a given value
	void print(); //Print current list
	Node* search(int F); //Search an existing element in the list
	int sum(); //Add list values to get sum
	};
```


Your output should be like,
Input No of nodes: 3
Input data for node 1: 2
Input data for node 2: 5
Input data for node 3: 8
1 - Insert Beginning
2 - Insert End
3 – Delete Beginning
4 – Delete End
5 – Delete Value
6 – Print
7 – Search
8 – Sum
Enter Your Choice: