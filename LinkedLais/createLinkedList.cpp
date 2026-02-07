// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node * next;

// };

// // static node creation
// // int main(){
// //     Node n1;
// //     n1.data =12;
// //     n1.data = NULL;
// // }

// int main(){
//     Node * head;
//     head = new Node();
//     head->data = 46;
//     head->next = NULL;
// }

// #include<iostream>

// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// int main(){
//     Node *head;
//     head = new Node(16);

//     cout<<head->data;
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next =NULL;
//     }
// };

// int main(){
//     vector<int>arr = {2,4,6,8,9,11};
//     Node * head = NULL;

//     for(int i =0 ; i<arr.size() ; i++){
//         if(head == NULL){
//             head =new Node(arr[i]);

//         }
//         else{
//             Node *temp;
//             temp =new Node(arr[i]);
//             temp->next =head;
//             head = temp;
//         }
//     }

//     Node* temp =head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp =temp->next;
//     }
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;

//     }
// };

// int main(){
//     vector<int>arr ={2,4,6,8,9,11};
//     Node* head = NULL;
//     Node* curr =NULL;
//     for(int i = 0 ;i<arr.size() ; i++){
//         if(head == NULL){
//             head  =new Node(arr[i]);
//             curr = head;
//         }
//         else{
//             Node *temp;
//             temp = new Node(arr[i]);
//             curr->next = temp;
//             curr =temp;
//         }
//     }

//     Node*temp = head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;

//     }
// };

// int main(){
//     vector<int>arr ={2,4,6,8,9,11};
//     Node* head = NULL;
//     Node* curr =NULL;
//     for(int i = 0 ;i<arr.size() ; i++){
//         if(head == NULL){
//             head  =new Node(arr[i]);

//         }
//         else{
//            curr = head;
//            while(curr->next != NULL){
//                 curr = curr->next;
//            }
//            curr->next = new Node(arr[i]);
//         }
//     }

//     Node*temp = head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// class Node{
//     public:
//     int data;
//     Node * next;

//     Node(int value){
//         data = value;
//         next =NULL;
//     }
// };

// Node * CreateLinkedList(int arr[] , int index , int size ,Node *prev){
//     if(index ==size){
//         return prev;
//     }
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = prev;

//     return CreateLinkedList(arr ,index+1 , size ,temp);

// }

// int main(){
//     Node* head;
//     head = NULL;
//     int arr[] = {2,4,6,8,9,11};
//     int index = 0;
//     head = CreateLinkedList(arr , 0 , 5 , head);

//     Node*temp = head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

// }

// #include<iostream>

// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data  = value;
//         next = NULL;
//     }
// };

// Node* CreateLinkedList(int arr[] , int index ,int size ,Node* prev){
//     if(index == size){
//         return prev;
//     }
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = prev;
//     return CreateLinkedList(arr , index+1 ,size ,temp);
// }

// int main(){

//     Node * Head;
//     Head = NULL;

//     int arr[] ={2,4,6,8,9};
//     Head  = CreateLinkedList(arr , 0 , 5 , Head);

//     // insertnode at particualar position

//     int x = 3; //position
//     int value = 30;
//     Node * curr =Head;
//     x--;
//     while

//     Node *temp;
//     temp = Head;

//         while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

// }

// #include<iostream>
// #include<vector>

// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next =NULL;
//     }
// };

// int main(){
//     vector<int>arr = {2,4,6,8,9,11};
//     Node * head = NULL;
//     Node* temp = head;

//     for(int i =0 ; i<arr.size() ; i++){
//         if(head == NULL){
//             head =new Node(arr[i]);
//         }
//         else{
//             Node* curr = new Node(arr[i]);
//             temp->next = curr;
//             temp = curr;
//         }
//     }

//     Node* temp =head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp =temp->next;
//     }
// }

// if(!head = =Null){

//     temp = new Node(arr[i]);

// }

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{

    int arr[] = {2, 4, 5, 6, 7, 8, 9};

    Node *head;
    Node *curr = NULL;
    head = NULL;
    for (int i = 0; i < 7; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            curr = head;
        }
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            curr->next = temp;
            curr = temp;
        }
    }

    Node *temp;
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // delete node

    // delete from the front/
    if (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    cout << endl;
    Node *temp1;
    temp1 = head;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }

    // delete form tghe end

    if (head != NULL)
    {
        if (head->next == NULL)
        {
            Node *temp = head;
            head = NULL;
            delete temp;
        }
        else
        {
            Node *curr = head;
            Node *prev = NULL;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }

    cout << endl;
    Node *temp2;
    temp2 = head;
    while (temp2)
    {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }
}

