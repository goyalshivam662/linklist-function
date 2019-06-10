#include<iostream>
#include<conio.h>
using namespace std;
class node
{
  public:
  int data;
  node *next;

};
node *start=NULL;
void insertnode()
{

    node *t;
  node*p=new node();
   p->next=NULL;
   cout<<"enter the value in node";
   cin>>p->data;

   if(start==NULL)
      start=p;
    else{
      t=start;
      while(t->next!=NULL)
      t=t->next;
      t->next=p;}
}
 void insertafternode()
 {
     node *t;
     node *p;
     int u;
     cout<<"enter the node after which we perform insertion  ";
     cin>>u;

     t=start;
     p=start;

    if(t->data !=u)
     {

      t=t->next;
      p=p->next->next;
     }
     node *s=new node();
     cout<<"enter the value";
     cin>>s->data;
     t->next=s;
     s->next=p;

 }
 void insertbeforenode()
 {
     node *t,*p;
     t=start;
     int k;
     cout<<"enter where you insert ";
     cin>>k;
     if(t->data!=k)
     {
         p=t;
         t=t->next;
         }
         node *s= new node();
         cout<<" enter value  ";
         cin>>s->data;
         s->next=t;
          p->next=s;

 }

 void insertatfirst()
 {
      node *s= new node();
         cout<<" enter value  ";
         cin>>s->data;
          s->next=start;
          start =s;

 }
void viewlist()
{
    node *p;
    p=start;
    cout<<endl;

    while(p!=NULL)
    {
        cout<<"   "<<p->data;
        p= p->next;
    }
}
void deleteatlast()
{
    node *p,*t;
    p=start;
    if(p->next!=NULL)
    {
        t=p;
        p=p->next;

    }
    t->next=NULL;
    delete p;

}
 void deletefirst()
 {
     node *t;
     t=start;
     start= start->next;
     delete t;
 }
  void deleteafternode()
  {
      node *p,*t;
      int u;
      t=start;
      p=t;
      cout<<"after which node  ";
          cin>>u;
      if(t->data!=u)
        {

          p=(p->next)->next;
          t=t->next;
          }
          t->next=p->next;
          delete p;

  }
int menu()
{
    int g;
   cout<<" insertnode  1"<<endl;
   cout<<" viewlist  2"<<endl;
   cout<<"  exit  3"<<endl;
   cout<<" insertafternode 4"<<endl;
   cout<<" insertbeforenode 5"<<endl;
   cout<<" insertatfirst 6 "<<endl;
   cout<<" deletion at last 7" <<endl;
   cout<<" deletion at first 8" <<endl;
   cout<<" deletion after node 9"<<endl;
   cin>>g;
    return(g);
}
int main()
{

   while(1)
    {
   switch(menu())
   {
   case 1:
     insertnode();
     break;

   case 2:
      viewlist();
      break;

   case 3:
       exit(0);
   case 4:
      insertafternode();
      break;
   case 5:
    insertbeforenode();
    break;
   case 6:
    insertatfirst();
    break;
   case 7:
    deleteatlast();
    break;
   case 8:
    deletefirst();
    break;
   case 9:
    deleteafternode();
    break;
    }
    }
  getch();
  return 0;
}
