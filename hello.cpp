#include<iostream>
#include<stdlib.h>
#include <stdio.h>
 
using namespace std;
 
struct node
{
	struct node *prev_node;
	int info;
	struct node *next_node;
};
 
struct node *create_list(struct node *begin);
void display(struct node *begin);
struct node *addtoemptylist(struct node *begin,int data_element);
struct node *addatendlist(struct node *begin,int data_element);
struct node *addafterlist(struct node *begin,int data_element,int item_pos);
struct node *addbeforelist(struct node *begin,int data_element,int item_pos);
struct node *deletenode(struct node *begin,int data_element);
struct node *reverselist(struct node *begin);


struct node *addatbeglist(struct node *begin, int data_element);

struct node *iteratetoleft(struct node *nod, int iter_num);
struct node *iteratetoright(struct node *nod, int iter_num);

struct void *addbeforenode(struct node *nod, int data_element);
struct void *addafternode(struct node *prev_node, int data_element);

int obeb_bul(int sayi1, int sayi2);
int mod_al(int sayi1, int sayi2);
 
int main()
{
    
    
    int i = obeb_bul(14, 28);
    cout << i << std::endl;
	
	

    int mod = 0;
    int obeb = 0;
    
    int onceki_sayi = 0;
    /*
	int option,data_element,item_pos;
	struct node *begin = NULL;
	struct node *currentNode = NULL;
	
	
	int obeb = 0;
	
	
	std::string s = "82 75 3 56 78 98 ";
    std::string delimeter = " ";
    
    size_t pos = 0;
    std::string num;
    
    while((pos = s.find(delimeter)) != std::string::npos) 
    {
        num = s.substr(0, pos);
        int i = stoi(num);
		cout << i << std::endl;
		
		if(begin != NULL) {
		    
			int tempObeb = obeb_bul(i, onceki_sayi);
			
			if( tempObeb > obeb ) {
				obeb = tempObeb;
				mod = mod_al(i, onceki_sayi);
				if(mod > 0) {
					// mod kadar sola git
					// iteratetoleft(currentNode, mod - 1);
					
					// liste sonu null geliyorsa başa ekle
					//begin = addatbeglist(begin, i);
					 currentNode = begin;
					 
					//gelmiyorsa
					// currentNode = addbeforenode(currentNode, i);
					
					
				} else {
					// o anki nodun bir sagina ekle
					// iteratetoright(struct node *nod, 1);
					// addafternode(struct node *prev_node, int data_element);
					
					
				}
				
			} else {
				
				while (tempObeb < obeb && currentNode != null) {
					// currentNode = iteratetoright(currentNode, 1);
					   tempObeb = obeb_bul(currentNode -> info, i);
					// liste sonu gelirse sonuncu alınacak
				}
					
					// ?? bu şarta girildikten sonra bir sonraki işlemde baştaki nodu referans olarak almış anlamadım
					// currentNode = begin;
					
		    }
		} else {
		    begin = addtoemptylist(begin, i);
			currentNode = begin;
			onceki_sayi = i;
		}
		
		s.erase(0, pos + delimeter.length());
    }
	
	while(1)
	{
		cout<<"\n1.Create A New Doubly Linked List\n";
		cout<<"2.Display the Doubly Linked List\n";
		cout<<"3.Add to an Empty Doubly Linked List\n";
		cout<<"4.Add at Starting of the Doubly Linked List\n";
		cout<<"5.Add at Ending\n";
		cout<<"6.Add After a Node\n";
		cout<<"7.Add Before a Node\n";
		cout<<"8.Delete a Node\n";
		cout<<"9.Reverse the Doubly Linked List\n";
		cout<<"10.Exit\n";
		cout<<"Enter your option : ";
		cin>>option;
		
		switch(option)
		{
		 case 1:
			begin=create_list(begin);
			break;
		 case 2:
			display(begin);
			break;
		 case 3:
			cout<<"Enter the element:";
			cin>>data_element;
			begin=addtoemptylist(begin,data_element);
			break;
		 case 4:
	        	cout<<"Enter the element:";
			cin>>data_element;
			begin=addatbeglist(begin,data_element);
			break;
		 case 5: 
			cout<<"Enter the element:";
			cin>>data_element;
			begin=addatendlist(begin,data_element);
			break;
		 case 6:
			cout<<"Enter the element:";
			cin>>data_element;
			cout<<"Enter the element after which to insert : ";
			cin>>item_pos;
			begin=addafterlist(begin,data_element,item_pos);
			break;
		 case 7:
			cout<<"Enter the element: ";
			cin>>data_element;
			cout<<"Enter the element before which to insert : ";
			cin>>item_pos;
			begin=addbeforelist(begin,data_element,item_pos);
			break;
		 case 8:
			cout<<"Enter the element to be Deleted : ";
			cin>>data_element;
			begin=deletenode(begin,data_element);
	   		break;
		 case 9:
		 	begin=reverselist(begin);
			break;
		 case 10:
			exit(1);
		 default:
			cout<<"Wrong option\n";
	}
   }
   */
   return 0;
}

struct void *addbeforenode(struct node *nod, int data_element) {

  
}
	
}
struct void *addafternode(struct node *prev_node, int data_element) {
	 if (prev_node == NULL) {
	   cout<<"Previous node is required , it cannot be NULL";
	   return;
	}
   struct Node* newNode = new Node;
   newNode->data = new_data;
   newNode->next = prev_node->next;
   prev_node->next = newNode;
   newNode->prev = prev_node;

   if (newNode->next != NULL) {
	   newNode->next->prev = newNode;
   }
}

void display(struct node *begin)
{
	struct node *p;
	if(begin==NULL)
	{
		cout<<"List is empty\n";
		return;
	}
	p=begin;
	cout<<"List is :\n";
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->next_node;
	}
	cout<<"\n";
}

int obeb_bul(int sayi1,int sayi2) {
	int buyukSayi, obeb;

	if(sayi1 > sayi2) {
		buyukSayi = sayi1;
	} else {
		buyukSayi = sayi2;
	}

	for(buyukSayi; buyukSayi>0; buyukSayi--) {
		if( (sayi1%buyukSayi==0) && (sayi2%buyukSayi==0) ) {
			 obeb = buyukSayi;
			break;
		}
	}
	
	return obeb;
}

int mod_al(int sayi1, int sayi2) {
	int buyukSayi, kucukSayi;
	
	if(sayi1 > sayi2) {
		buyukSayi = sayi1;
		kucukSayi = sayi2;
	} else {
		buyukSayi = sayi2;
		kucukSayi = sayi1;
	}
	
	return buyukSayi%kucukSayi;
	
}
 
struct node *create_list(struct node *begin)
{
	int i,n,data_element;
	cout<<"Enter the number of nodes : ";
	cin>>n;
	begin=NULL;
	if(n==0)
		return begin;
	cout<<"Enter the element: ";
	cin>>data_element;
	begin=addtoemptylist(begin,data_element);
		
	for(i=2;i<=n;i++)
	{
		cout<<"Enter the element to be inserted : ";
		cin>>data_element;
		begin=addatendlist(begin,data_element);	
	}
	return begin;
}
 
void display(struct node *begin)
{
	struct node *p;
	if(begin==NULL)
	{
		cout<<"List is empty\n";
		return;
	}
	p=begin;
	cout<<"List is :\n";
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->next_node;
	}
	cout<<"\n";
}

struct node *iteratetoleft(struct node *nod, int iter_num)
{
	struct node *p;
	p=nod;
	
	while(p != NULL)
	{
		cout << p -> info << " ";
		p = p -> prev_node;
		
		
	}
	
	return NULL;
}

struct node *iteratetoright(struct node *nod, int iter_num)
{
	struct node *p;
	p=nod;
	
	while(p != NULL)
	{
		cout << p -> info << " ";
		p = p -> next_node;
		
		
	}
	
	return NULL;
}
 
struct node *addtoemptylist(struct node *begin,int data_element)
{
	struct node *temp;
	temp=new struct node;
	temp->info=data_element;
	temp->prev_node=NULL;
	temp->next_node=NULL;
	begin=temp;
	return begin;
}
struct node *addatbeglist(struct node *begin,int data_element)
{
	if(begin==NULL)
	{
		cout<<"List is empty\n";
		return begin;
	}
	
	struct node *temp;
	temp = new struct node;
	temp->info=data_element;
	temp->prev_node=NULL;
	temp->next_node=begin;
	begin->prev_node=temp;
	begin=temp;
	return begin;
}
 
struct node *addatendlist(struct node *begin,int data_element)
{
	if(begin==NULL)
	{
	   // addtoemptylist(begin, data_element);
	    
	    cout<<"List is empty\n";
		return begin;
	}
	
	struct node *temp,*p;
	temp=new struct node;
	temp->info=data_element;
	p=begin;
	while(p->next_node!=NULL)
		p=p->next_node;
	p->next_node=temp;
	temp->next_node=NULL;
	temp->prev_node=p;
	return begin;
}
struct node *addafterlist(struct node *begin,int data_element,int item_pos)
{
	struct node *temp,*p;
	temp=new struct node;
	temp->info=data_element;
	p=begin;
	while(p!=NULL)
	{
		if(p->info==item_pos)
		{
			temp->prev_node=p;
			temp->next_node=p->next_node;
			if(p->next_node!=NULL) 
				p->next_node->prev_node=temp;
			p->next_node=temp;
			return begin;	
		}
		p=p->next_node;
	}
	cout<<item_pos<<" not present in the list\n\n";
	return begin;
}
 
struct node *addbeforelist(struct node *begin,int data_element,int item_pos)
{
	struct node *temp,*q;
	if(begin==NULL )
	{
		cout<<"List is empty\n";
		return begin;
	}
	if(begin->info==item_pos)
	{
		temp = new struct node;
		temp->info=data_element;
		temp->prev_node=NULL;
		temp->next_node=begin;
		begin->prev_node=temp;
		begin=temp;
		return begin;
	}
	q=begin;
	while(q!=NULL)
	{
		if(q->info==item_pos)
		{
			temp=new struct node;
			temp->info=data_element;
			temp->prev_node=q->prev_node;
			temp->next_node = q;
			q->prev_node->next_node=temp;
			q->prev_node=temp;
			return begin;
		}	
		q=q->next_node;
	}
	cout<<item_pos<<" not present in the list\n";
	return begin;
}	
 
struct node *deletenode(struct node *begin,int data_element)
{
	struct node *temp;
	if(begin==NULL)
	{
		cout<<"List is empty\n";
		return begin;
	}
	if(begin->next_node==NULL)	
		if(begin->info==data_element) 
		{
			temp=begin;
			begin=NULL;
			delete(temp);
			return begin;
		}
		else
		{
			cout<<"Element "<<data_element<<" not found\n";
			return begin;
		}
	
	if(begin->info==data_element)
	{
		temp=begin;
		begin=begin->next_node;  
		begin->prev_node=NULL;
		delete(temp);
		return begin;
	}
 
	temp=begin->next_node;
	while(temp->next_node!=NULL )
	{
		if(temp->info==data_element)     
		{
			temp->prev_node->next_node=temp->next_node;
			temp->next_node->prev_node=temp->prev_node;
			delete(temp);
			return begin;
		}
		temp=temp->next_node;
	}
 
	if(temp->info==data_element)
	{
		temp->prev_node->next_node=NULL;
		delete(temp);
		return begin;
	}
	cout<<"Element "<<data_element<<" not found\n";
	return begin;
}
 
struct node *reverselist(struct node *begin)
{
	if(begin==NULL)
	{
		cout<<"List is empty\n";
		return begin;
	}
	
	struct node *p1,*p2;
	p1=begin;
	p2=p1->next_node;
	p1->next_node=NULL;
	p1->prev_node=p2;
	while(p2!=NULL)
	{
		p2->prev_node=p2->next_node;
		p2->next_node=p1;
		p1=p2;
		p2=p2->prev_node; 
	}
	begin=p1;
	cout<<"List reverselistd\n";
	return begin;
}
