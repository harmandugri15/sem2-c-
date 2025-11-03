    // everything of a linked list 
    // everything of a linked list 

    // everything of a linked list 

    // everything of a linked list 

    // everything of a linked list 

    // everything of a linked list 


    // #include <iostream>
    // #include <vector>
    // #include <algorithm> // for sort
    // using namespace std;

    // class Node{
    //     public:
    //     int data;
    //     Node* next; //pointer to other 

    //     Node(int data){
    //         this-> data=data;
    //         this-> next=NULL;
    //     }
        
    // };

    // class LinkedList{
    //     private:
    //         Node* head;
    //         Node* tail;
    //         int size;
    //     public:
    //     LinkedList(){
    //         head=NULL;
    //         tail=NULL;
    //         size=0;
    //     }
    //     ~LinkedList(){
    //             Node* currentNode = head; 
    //             while (currentNode != NULL){
    //                Node* nextNode=currentNode->next;
    //                delete currentNode;
    //                currentNode=nextNode;
    //             }
    //             head=NULL;
    //         }
        
    // //-----------------------------------------------------------------------
    //     void insertAtBegining(int value){
    //         Node* newNode=new Node(value);

    //         if(head==NULL){
    //             head=tail=newNode;
    //         }
    //         else{
    //             newNode->next=head;
    //             head=newNode;
    //         }
    //         size++;
    //     }
    // //-----------------------------------------------------------------------
    //     void display(){
    //         if(head==NULL){
    //             cout<<" List is already empty"<<endl;
    //             return;
    //         }

    //        Node* temp = head;  // start from head

    //         while (temp != NULL){
    //             cout << temp->data << " ";
    //             temp = temp->next;  // move to next node
    //         }  
    //         cout << endl;      
    //     }


    //     void insertAtLast(int value){
    //         Node* newNode=new Node(value);

    //         if(head==NULL){
    //             head=tail=newNode;
    //         }
    //         else{
    //             tail->next=newNode;
    //             tail=newNode;
    //         }
    //         size++;
    //     }

    //     int displaysize(){
    //         return size;
    //     }
        
    // //------------------------------getting the index of the given first element-----------------------------------------
    //     int getIndex(int value){
            
    //             Node* temp = head;  // start from head
    //             int count=0;
    //             while (temp != NULL){
    //                 if(temp->data==value){
    //                     return count;
    //                 }
    //                 else{
    //                     temp=temp->next;
    //                     count++;
    //                 }    
    //             }
    //         return -1;

    //     }
    //     // ----------------if an element exists or not-------------

    //     bool contains(int value){
    //         return getIndex(value)!=-1;
    //     }
    //     // --------------------------get value at index--------------

    //     int getValueAtIndex(int index){
    //         if(index>size-1 || index<0 ){
    //             return -1;
    //         }
    //         else{
    //             Node* current=head;
    //             for(int i=0;i<index;i++){
    //                 current=current->next;
    //             }
    //             return current->data;
    //         }
    //     }

    //     //----------------------removing the first element-----------------

    //     void removeFirst(){
    //         if(head==NULL){
    //             cout<<" List is already empty"<<endl;
    //             return;
    //         }
    //         else if(head==tail){
    //             delete head;
    //             head=tail=NULL;
    //         }
    //         else{
    //             Node* temp=head;
    //             head=head->next;
    //             delete temp;
    //         }
    //         size--;
    //     }

    //     void rmoveAtLast(){
    //         // not implemented
    //     }



    //     // ---------------------------------------

    //     int* toArray(){
    //         int* arr= new int[size];
    //         int i=0;
    //         Node* current=head;
    //         while(current!=NULL){
    //             arr[i++]= current->data;
    //             current=current->next;
    //         }
    //         return arr;
    //     }

    // //-----------------------sort the shyt---------------------------

    //     void sortLinkedList(){
    //         int* arr=toArray();
    //         sort(arr,arr+size);
    //         Node* current=head;
    //         int i=0;
    //         while(current!=NULL){
    //             current->data=arr[i++];
    //             current= current->next;
    //         }
    //         delete[] arr;
    //     }


    //     void insertsorted(int value){
    //         Node* newNode=new Node(value);

    //         if(head==NULL){
    //             head=tail=newNode;
    //         }
    //         else if(value<=head->data) {
    //             newNode->next=head;
    //             head=newNode;
    //         }
    //         else{
    //             Node* current=head;
    //             while(current->next!=NULL && current->next->data <value){
    //                 current=current->next;
    //             }
    //             newNode->next=current->next;
    //             current->next=newNode;
    //             //update tail if new node is inserted at end
    //             if(newNode->next==NULL){
    //                 tail=newNode;
    //             }
    //         }
    //         size++;
    //     }
    //     //---------------------reverse the linkedlist-----------------------------------------

    //     void reverseLinkedList(){
    //         Node* prev=NULL;
    //         Node* next=NULL;
    //         Node* current=head;
    //         tail=head;
    //         while(current!=NULL){
    //             next=current->next;
    //             current->next=prev;
    //             prev=current;
    //             current=next;
    //         }
    //         head=prev;

    //     }

    //     void getmiddlevalue(){
    //         int a = displaysize();
    //         Node* temp=head;
    //         int count=0;
    //         while(temp!=NULL){
    //             if( count==a/2){
    //                 cout<<temp->data;
    //                 return;
    //             }
    //             temp=temp->next;
    //             count++;
    //         }
    //     }


    // };



    // int main(){
        
    //     LinkedList l1;
    //     l1.insertAtBegining(50);
    //     l1.insertAtBegining(60);
    //     l1.insertAtBegining(70);
    //     l1.insertAtBegining(80);
    //     l1.insertAtBegining(90);
    //     l1.insertAtLast(100);
    //     l1.display();
        
    //     l1.sortLinkedList();
    //     l1.display();

    //     l1.insertsorted(69);
    //     l1.insertsorted(40);
    //     l1.display();

    //     l1.reverseLinkedList();
    //     l1.removeFirst();
    //     l1.display();

    //     l1.getmiddlevalue();
    //     return 0;
    // }
    // ---------------------------------------------slow and fast pouinter-in getting middle value----------------
    #include <iostream>
    #include <vector>
    #include <algorithm> // for sort
    using namespace std;

    class Node{
        public:
        int data;
        Node* next; //pointer to other 

        Node(int data){
            this-> data=data;
            this-> next=NULL;
        }
        
    };

    class LinkedList{
        private:
            Node* head;
            Node* tail;
            int size;
        public:
        LinkedList(){
            head=NULL;
            tail=NULL;
            size=0;
        }
        ~LinkedList(){
                Node* currentNode = head; 
                while (currentNode != NULL){
                Node* nextNode=currentNode->next;
                delete currentNode;
                currentNode=nextNode;
                }
                head=NULL;
            }
        
    //-----------------------------------------------------------------------
        void insertAtBegining(int value){
            Node* newNode=new Node(value);

            if(head==NULL){
                head=tail=newNode;
            }
            else{
                newNode->next=head;
                head=newNode;
            }
            size++;
        }
    //-----------------------------------------------------------------------
        void display(){
            if(head==NULL){
                cout<<" List is already empty"<<endl;
                return;
            }

        Node* temp = head;  // start from head

            while (temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;  // move to next node
            }  
            cout << endl;      
        }


        void insertAtLast(int value){
            Node* newNode=new Node(value);

            if(head==NULL){
                head=tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
            size++;
        }

        int displaysize(){
            return size;
        }
        
    //------------------------------getting the index of the given first element-----------------------------------------
        int getIndex(int value){
            
                Node* temp = head;  // start from head
                int count=0;
                while (temp != NULL){
                    if(temp->data==value){
                        return count;
                    }
                    else{
                        temp=temp->next;
                        count++;
                    }    
                }
            return -1;

        }
        // ----------------if an element exists or not-------------

        bool contains(int value){
            return getIndex(value)!=-1;
        }
        // --------------------------get value at index--------------

        int getValueAtIndex(int index){
            if(index>size-1 || index<0 ){
                return -1;
            }
            else{
                Node* current=head;
                for(int i=0;i<index;i++){
                    current=current->next;
                }
                return current->data;
            }
        }

        //----------------------removing the first element-----------------

        void removeFirst(){
            if(head==NULL){
                cout<<" List is already empty"<<endl;
                return;
            }
            else if(head==tail){
                delete head;
                head=tail=NULL;
            }
            else{
                Node* temp=head;
                head=head->next;
                delete temp;
            }
            size--;
        }

        void rmoveAtLast(){
        if(head==NULL){
            cout<<"list is empty "<<endl;
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
            }
            else{
                Node* temp=head;
                while(temp->next->next!=NULL){
                    temp=temp->next;
                }
                delete tail;
                tail=temp;
                tail->next=NULL;
            }
        }



        // ---------------------------------------

        int* toArray(){
            int* arr= new int[size];
            Node* current=head;
            for(int i=0;i<size;i++){
                arr[i]=current->data;
                current=current->next;
            }
            return arr;
        }

    //-----------------------sort the shyt---------------------------

        void sortLinkedList(){
            int* arr=toArray();
            sort(arr,arr+size);
            Node* current=head;
            int i=0;
            while(current!=NULL){
                current->data=arr[i++];
                current= current->next;
            }
            delete[] arr;
        }


        void insertsorted(int value){
            Node* newNode=new Node(value);

            if(head==NULL){
                head=tail=newNode;
            }
            else if(value<=head->data) {
                newNode->next=head;
                head=newNode;
            }
            else{
                Node* current=head;
                while(current->next!=NULL && current->next->data <value){
                    current=current->next;
                }
                newNode->next=current->next;
                current->next=newNode;
                //update tail if new node is inserted at end
                if(newNode->next==NULL){
                    tail=newNode;
                }
            }
            size++;
        }
        //---------------------reverse the linkedlist-----------------------------------------

        void reverseLinkedList(){
            Node* prev=NULL;
            Node* next=NULL;
            Node* current=head;
            tail=head;
            while(current!=NULL){
                next=current->next;
                current->next=prev;
                prev=current;
                current=next;
            }
            head=prev;

        }

        // void getmiddlevalue(){
        //     int a = displaysize();
        //     Node* temp=head;
        //     int count=0;
        //     while(temp!=NULL){
        //         if( count==a/2){
        //             cout<<temp->data;
        //             return;
        //         }
        //         temp=temp->next;
        //         count++;
        //     }
        // }

        void getmiddlevalue(){
            if(head==NULL){
                return;
            }
            Node* slow=head;
            Node* fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
            cout<<slow->data;
        }

    //-----------do it with slow and fast pointer to make it better ---------
        bool ispallindrome(){
            if(head==NULL || head->next==NULL){
                return true;
            }
            vector<int> arr;

            Node* temp=head;
            while(temp!=NULL){
                arr.push_back(temp->data);
                temp=temp->next;
            }

            int i=0,j=arr.size()-1;
            while(i<j){
                if(arr[i]!=arr[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
        


    };



    int main(){
        
        LinkedList l1;
        l1.insertAtBegining(50);
        l1.insertAtBegining(60);
        l1.insertAtBegining(70);
        l1.insertAtBegining(80);
        l1.insertAtBegining(90);
        l1.insertAtLast(100);
        cout<<"normal"<<endl;
        l1.display();
        
        l1.sortLinkedList();
        cout<<"sorted"<<endl;
        l1.display();

        l1.insertsorted(69);
        l1.insertsorted(40);
        cout<<"insert sorted"<<endl;
        l1.display();

        l1.reverseLinkedList();
        l1.removeFirst();
        cout<<"reversed and removed first "<<endl;
        l1.display();
        
        cout<<"middle value"<<endl;
        l1.getmiddlevalue();
        cout<<endl;

        bool ligma=l1.ispallindrome();
        if(ligma==0){
            cout<<"Not pallindrome"<<endl;
        }
        else{
            cout<<"Pallindrome"<<endl;
        }


        return 0;
    }
