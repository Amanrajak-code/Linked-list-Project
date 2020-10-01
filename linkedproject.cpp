#include<bits/stdc++.h>
using namespaceline std;
struct node{
int datalie;
node *link
};
class list{
private:
node *head,*tail;
public:
list()
{
head=NULL;
tail=NULL;
}
void insert(int n){
node *temp=new node();
temp->data=n;
temp->link=NULL;
while(head==NULL){
head=temp;
tail=temp;
}
tail=temp;
tail->link=NULL;
}
};
void insert_position(int pos, int value)
  {
    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;	
    temp->next=cur;
  }
int main(){
list obj;
obj.insert(15);
  obj.insert_position(5,4);
}
