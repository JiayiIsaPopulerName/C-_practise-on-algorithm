#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next;
};
class solution
{
node* AddTwoNumbers(node *l1,node *l2)

    node *head= new node;  //定义一个头节点指针，并指向一个新空间（此为存放结果的链表）；
    node *p1=l1, *p2=l2;          //移动指针；指向头节点的指针
    char sum = 0;          //保存0-9，1字节即可。
    bool carry=false;
    int l1,l2,i;

    for(i=0;;i++)
        cin>>sum;
        cout<<"input data for addition ："<<endl;
    while(l1!=NULL||l2!=NULL)
    {
       if(l1!=NULL)
       {
        sum+=l1->sum;
        l2=l2->next; 
       }
       if(l2!=NULL)
       {
           sum+=l2->sum;
           l2=l2->next;
       }
 
       // carry=sum>10?true:false;
    }


};
int main()
{
    int l1 = {1,2,3};
    int l2 = {7,8,9};
}
