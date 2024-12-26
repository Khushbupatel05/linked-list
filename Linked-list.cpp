#include<iostream>
using namespace std;


class Node{
    public:
     int data;
     Node *next;

     Node(int data){
        this->data= data;
        this->next = nullptr;
     }
      
};
class Linkedlist{
    public:
    Node *head = NULL;
    int count = 0;


   void addAtstart(int data){
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;

        this->count++;

        cout << "New node inserted..." << endl;

    }
    void searchbyPostion(){

    }
     void DeleteAtAny(int pos){
            if(this->count == 0 || this->head == NULL){
                cout << "Linked List is Empty...." <<endl;
                return;
            }
             
        }
    void viewAll(){
         if(count == 0){
            cout << " Linked list is Empty..." << endl;
            return;
        }
        
        Node *ptr = head;

        while(ptr !=NULL){
            cout << ptr->data << " ";
            ptr = ptr->next; 
        }
    }
};

int main(){

    Linkedlist list;
    int choice ;

   do
   {
    cout << "Enter 1 for Insert at beginning :"<< endl;
    cout << "Enter 2 for to delete data :"<< endl;
    cout << "Enter 3 for search data :"<< endl;
    cout << "Enter 4 for reverse data :"<< endl;
    cout << "Enter 5 for view All data :"<< endl;
    cout << "Enter 6 for exit :"<< endl;

    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice){
      case 1:{
        int data ;

        cout << "Enter your data :";
        cin >> data;

        list.addAtstart(data);
        break;
      }
      case 2 :{
        int data , pos ;

        cout << " Enter postion :" ;
        cin >> pos;

        cout << "Enter your delete data : " ;
        cin >> data;

        list.DeleteAtAny(pos);
        break;
      }
      case 3 :{
        break;
      }

      case 4 :{
        break;
      }
      case 5 :{
        list.viewAll();
        break;
      }

    default:
        break;
    }

   } while (choice != 6);

    return 0;
}