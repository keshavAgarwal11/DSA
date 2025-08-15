/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        


//     ListNode* temp = head;
//   int count = 0;

//     while(temp != NULL){   

//  count++; 
//  temp = temp -> next;
    

//     }

//      temp =head;
//  if(count == n){
           
        
//       temp = temp->next;
//        return temp;


//  }




//     int res = count - n;

//     //  temp = head;
//     int vall = 0;
//      while(temp != NULL){


//       vall++;
//        if(res ==vall){
                
//                 ListNode* deletenode = temp ->next;
//                 temp -> next = temp -> next -> next;
//                 delete(deletenode);
//                 break;


//        }


//              temp = temp -> next;  

//      }



//          return head;


   ListNode* fast = head;
  

    
    for(int i=0; i<n;i++){
    
   fast  = fast -> next;
     

    } 

    if(fast == NULL){

        head = head -> next;
        return head;
    }  
          

    ListNode* slow = head;
     while(fast ->next != NULL){
      

        //   slow =slow -> next;
        
            slow =slow -> next;   
               fast = fast -> next;
     }


     ListNode* deletenode =slow -> next;
      slow -> next = slow -> next -> next;
        delete(deletenode); 
        
        return head;
  

    }

    
};