https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion


class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        
        Node *nodetoInsert = new Node(x);
        
        if(head == NULL)
        {
            return nodetoInsert;
        }
        Node *temp = head;
        
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        
        temp->next = nodetoInsert;
        nodetoInsert->next = NULL;
        return head;
    }
};