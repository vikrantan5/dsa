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


#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;

    }
};

int main(){
    vector<int>arr ={2,4,6,8,9,11};
    Node* head = NULL;
    Node* curr =NULL;
    for(int i = 0 ;i<arr.size() ; i++){
        if(head == NULL){
            head  =new Node(arr[i]);
            
        }
        else{
           curr = head;
           while(curr->next != NULL){
                curr = curr->next;               
           }
           curr->next = new Node(arr[i]);
        }
    }

    Node*temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
