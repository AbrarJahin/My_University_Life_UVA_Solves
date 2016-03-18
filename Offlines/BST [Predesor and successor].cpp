/*
	A programme for Making , showing and searching BST
*/

#include<iostream>
using namespace std;

typedef struct tag
{
	int a;
	bool flag;
}datas;

class TNode
{
	private:
		int data;
	public:
		TNode *LeftChild,*RightChild;
	TNode()
	{
		data=0;
		LeftChild=NULL;
		RightChild=NULL;
	}
	void SetData(int dat)	
	{
		data=dat;
	}
	int GetData()
	{
		return data;
	}
};

class Tree
{
	private:
		TNode *Root;
	void preOrder(TNode *ParentNode)
	{
		if(ParentNode!=NULL)
		{
			cout<<" "<<ParentNode->GetData();
			preOrder(ParentNode->LeftChild);
			preOrder(ParentNode->RightChild);
		}
	}
   
	void inOrder(TNode *ParentNode)
	{
		if(ParentNode!=NULL)
		{
			inOrder(ParentNode->LeftChild);
			cout<<" "<<ParentNode->GetData();
			inOrder(ParentNode->RightChild);
		}
	}
	void postOrder(TNode *ParentNode)
	{
		if(ParentNode!=NULL)
		{
			postOrder(ParentNode->LeftChild);
			postOrder(ParentNode->RightChild);
			cout<<" "<<ParentNode->GetData();
		}
	}
	public:
	Tree()
	{
		Root=NULL;
	}
	TNode* getroot()
	{
	    return Root;
	}
	void AddNode(int temp_data)
	{
		TNode *NewNode;
		NewNode=new TNode;
		NewNode->SetData(temp_data);
		if(Root==NULL)
			Root=NewNode;
		else
		{
			TNode *ParentNode,*CurrentNode;
			CurrentNode=Root;					//Start from root
			while(1)
			{
				ParentNode=CurrentNode;
				if(temp_data<CurrentNode->GetData())
				{
					CurrentNode=CurrentNode->LeftChild;
					if(CurrentNode==NULL)
					{
						ParentNode->LeftChild=NewNode;
						return;
					}
				}
				else
				{
					CurrentNode=CurrentNode->RightChild;
					if(CurrentNode==NULL)
					{
						ParentNode->RightChild=NewNode;
						return;
					}
				}
			}
		}
	}
	void Traversal(int type)
	{
		switch(type)
		{
			case 1:
				cout<<"\n\nTraversing PreOrder :\n";
				preOrder(Root);
				break;
			case 2:
			cout<<"\n\nTraversing InOrder :\n";
				inOrder(Root);
				break;
			case 3:
			cout<<"\n\nTraversing PostOrder :\n";
				postOrder(Root);
				break;
		}
		cout<<endl;
	}
	
	/*int Pre_Order_Next_Value(TNode *ParentNode)
	{
		if(ParentNode!=NULL)
		{
			if(ParentNode->LeftChild!=NULL)
				return ParentNode->LeftChild->GetData();
			else if(ParentNode->RightChild!=NULL)
				return ParentNode->RightChild->GetData();
			else
				return 0;
		}
	}*/
	
	void preOrder_Show(TNode *ParentNode,datas flag[],int value)
	{
		if(ParentNode!=NULL)
		{
			if(flag[1].flag==true)
			{
				if(ParentNode!=NULL && flag[2].flag==false)
				{
					flag[2].a=ParentNode->GetData();
					flag[2].flag=true;
				}
			}
			else
			{
				if(value==ParentNode->GetData())
				{
					flag[1].a=ParentNode->GetData();
					flag[1].flag=true;
				}
				else
				{
					flag[0].a=ParentNode->GetData();
					flag[0].flag=true;
				}
				/*preOrder(ParentNode->LeftChild);
				preOrder(ParentNode->RightChild);*/
				preOrder_Show(ParentNode->LeftChild,flag,value);
				preOrder_Show(ParentNode->RightChild,flag,value);
			}
		}
	}
};

int main()
{
	datas flag[3];
	Tree tree;
	int i;
	while(1)
	{
		int choice;
		cout<<"If u want to add a number press 1.\nIf u want to show numbers press 2.\nIf u want to show successor(porar value) and predecessor press 3.\nIf u want to tarminate the programme press 4.\n\t: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Please enter a Integer : ";
				cin>>choice;
				tree.AddNode(choice);
				break;
			case 2:
				cout<<"\tIf u want to show in preorder press 1.\n\tIf u want to show in inorder press 2.\n\tIf u want to show in postorder press 3.\n\t\t:";
				cin>>choice;
				tree.Traversal(choice);
				cout<<endl<<endl;
				break;
			case 3:
				for(i=0;i<3;i++)
				{
					flag[i].a=0;
					flag[i].flag=false;
				}
				cout<<"\n\n\tPlease enter a number : ";
				cin>>choice;
				tree.preOrder_Show(tree.getroot(),flag,choice);
				if(flag[1].flag)
				{
					if(flag[0].flag)
						cout<<"\n\npredecessor = "<<flag[0].a;
					else
						cout<<"\n\npredecessor not found .";
					cout<<"\tNumber = "<<flag[1].a;
					if(flag[2].flag)
						cout<<"\tsuccessor = "<<flag[2].a<<" .\n";
					else
						cout<<"\n\nsuccessor not found .";
				}
				else
					cout<<"\n\nnumber not found!!!!!!!!!!!!!!";
				break;
			case 4:
				return 0;
		}
	}
}