#include<map>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        // map<ListNode*,bool> visited;

        // ListNode* temp=head;

        // while(temp!=NULL)
        // {   if(visited[temp]==true)
        // {
        //     return true;
        // }

        //     visited[temp]=true;

        //     temp=temp->next;
        // }
        // return false;

        ListNode* fast=head;
        ListNode* slow=head;

        if(head==NULL || head->next==NULL)
        {
            return false;
        }

        while(fast!=NULL && slow!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }

            slow=slow->next;

            if(fast==slow)
            {
                return true;
            }
        }

        return false;





        
    }
};
