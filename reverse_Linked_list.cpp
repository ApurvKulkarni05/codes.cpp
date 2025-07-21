//here basically in this question the logic behind the is use stack concept because we stored nodes temporarily from original as we traverse it 
//Traverse the linked list using a temporary variable `temp` till it reaches null. At each node, push the value at the current node onto the stack. 
//Set variable `temp` back to the head of the linked list. While the stack is not empty, set the value at the temp node to the value at the top of the stack. Pop the stack and move temp to the next node till it reaches null
//return karo head as a new reverseLL
class Node{
public:int data;
Node*next;
Node(int data1, Node *next1){
data=data1;
next=*next1;
}
Node(int data1){
data=data1;
next=NULL;
}
void reverseLinked_List(Node *head){
  while(temp!=NULL){
st.push(temp->data);
temp=temp->next;
  }
temp=head;


while(temp!=NULL){
temp->data=st.top();
st.pop();
temp->next1;
return head;


//i used this logic 
//TC=O(2N)
//SC=O(N)

