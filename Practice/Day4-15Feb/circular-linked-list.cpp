#include<iostream>
using namespace std;

namespace collection
{


class LinkedList;


class Exception{

private:
string message;

    public: 

    Exception(string s):message(s)
    { }

    string getMessage() const throw()
    {
        return this->message; 
    } 
};


class Node{

    private:
    Node* next;
    int data; 
    Node* prev;

    public:

    Node(int data):data(data),next(NULL),prev(NULL)
    { }
   
   friend class LinkedList; 
   
    
}; 

class LinkedList{

    private:

   Node * head;
   Node * tail; 



    public:

    LinkedList():head(NULL),tail(NULL)
    { } 

    int empty()
    {
        return this->head == NULL; 
    }


    void addFirst(int data)
    {
         Node* NodePtr = new Node(data); 

        if(this->empty())
         {
           //  this->head = NodePtr;
             this->tail = NodePtr ;
             
         }else 
         {
             NodePtr->next = this->head;
            // this->head = NodePtr; 
         }
          this->head = NodePtr; 
          this->tail->next = this->head;  
    }

    void addLast(int data) throw(bad_alloc)
    {

       Node * Nodeptr = new Node(data); 
        if(this->empty())
        {
            this->head =  Nodeptr; 
           
        }else
        {

            this->tail->next = Nodeptr; 

        }
         this->tail =  Nodeptr;
       this->tail->next = this->head; 

    }


    void addAtPosition(int position, int data) throw(bad_alloc)
    {
        if(position <= 0 )
        throw Exception("Invalid position");
        else if(position == 1)
        this->addFirst(data); 
         else if(position >= this->listCount()  )
         this->addLast(data); 
         else
         {
             Node * NodePtr = new Node(data); 
             Node * trav = this->head; 
             for(int i = 0; i < position; i++)
             {
                 trav = trav->next; 

             }

            NodePtr->next =  trav->next; 

            trav->next = NodePtr; 
         }
    }


    int listCount()
    {
      
           int count = 0; 
    if(!this->empty())
    {
          Node * trav = this->head; 
       
       do{
        
        ++ count; 
        trav = trav->next; 
       }while(trav != this->head); 
    }
       



        return count; 
    }

    void removeFirst()
    {
          

        if(this->empty())
         {
           throw Exception("List is empty"); 
         }else if(this->head == this->tail)
         {
              delete this->head; 
              this->head = this->tail = this->tail->next = NULL; 
           
         }else
         {

             Node * ptrNode = this->head; 

             this->head = this->head->next; 

             delete ptrNode; 
             ptrNode = NULL; 
         }
         this->tail->next = this->head; 
          
    }

     void removeLast()
    {
          

        if(this->empty())
         {
           throw Exception("List is empty"); 
         }else if(this->head == this->tail)
         {
              delete this->head; 
              this->head = this->tail = this->tail->next = NULL; 
           
         }else
         {

             
                 
             Node* trav = this->head;

             while(trav->next != this->tail)
             {
                 trav = trav->next; 
             }

             delete this->tail;

             trav->next = NULL; 
             this->tail = trav; 

         }

         this->tail->next = this->head; 
          
    }


    void removeAtPosition(int position) 
    {
        if(position <= 0 )
        throw Exception("Invalid position");
        else if(position == 1)
        this->removeFirst(); 
         else if(position >= this->listCount()  )
         this->removeLast(); 
         else
         {
            
             Node * trav = this->head; 
             for(int i = 0; i < position; i++)
             {
                 trav = trav->next; 

             }
               Node* ptrNode = trav->next; 
              trav->next = ptrNode->next; 
                     
                     delete ptrNode;
                     ptrNode = NULL;

         }
    }


    void printList() 
    {
        if(this->empty())
        throw Exception("list is empty"); 
        else
        {
            Node* trav = this->head;

            while(trav->next != NULL)
            {

                cout<<trav->data<<","; 

                trav = trav->next; 
            }

            cout<<"\n"; 
        }

    }

~LinkedList()
{

    if(!this->empty())
    {
        this->removeFirst(); 
    }
}


};

}
void accept_record( string message , int& data )
{
	cout<<message;
	cin>>data;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Add First"<<endl;
	cout<<"2.Add Last"<<endl;
	cout<<"3.Add At Position"<<endl;
	cout<<"4.Remove First"<<endl;
	cout<<"5.Remove Last"<<endl;
	cout<<"6.Remove From Position"<<endl;
	cout<<"7.Print List"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice, data, position ;
	using namespace collection;
	LinkedList list;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		try {
			switch( choice )
			{
			case 1:	//Add First
				accept_record("Enter data	:	", data);
				list.addFirst( data );
				break;
			case 2:	//Add Last
				accept_record("Enter data	:	", data);
				list.addLast( data );
				break;
			case 3:	//Add At Position
				accept_record("Enter position	:	", position);
				accept_record("Enter data	:	", data);
				list.addAtPosition( position, data );
				break;
			case 4:	//Remove First
				list.removeFirst( );
				break;
			case 5:	//Remove Last
				list.removeLast( );
				break;
			case 6:	//Remove From Position
				accept_record("Enter position	:	", position);
				list.removeAtPosition( position );
				break;
			case 7:
				list.printList( );
				break;
			}
		}
		catch (Exception &ex)
		{
			cout<<ex.getMessage()<<endl;
		}
		catch( bad_alloc &ex )
		{
            cout<<"bad alloc";
			cout<<ex.what()<<endl;
		}

	}
	return 0;
}




