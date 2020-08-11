#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    int enBuyukObeb = 0;
    int currentObeb = 0;


    string fileAddress = "/home/ismail/Desktop/text.txt";
    
    string line;

    std::ifstream inFile(fileAddress);

    if (inFile.good()) {

        while (getline(inFile, line)) {

		int i = stoi("1");
		cout << i << '\n';


		cout << line << '\n';

		// split line



	}
	inFile.close();
    } else {
	cout << "Unable to open file";
    }
    
    return 0;
}


struct Node { 
    int data; 
    struct Node* next; 
    struct Node* prev; 
};

 
struct node *addbeforelist(struct node *begin, int data_element, int item_pos)
{
	struct node *temp, *q;
	if(begin == NULL )
	{
		cout << "List is empty\n";
		return begin;
	}

	if(begin->info == item_pos)
	{
		temp = new struct node;
		temp -> info=data_element;
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

struct node *addafterlist(struct node *begin, int data_element, int item_pos)
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

int obebBul(int sayi1, sayi2) {
	int buyukSayi,buyukSayi, obeb;

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


