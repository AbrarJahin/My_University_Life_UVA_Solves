/*
	A programme for Making , showing and searching BST
*/

#include<iostream>
using namespace std;

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
};

int main()
{
	Tree tree;
	while(1)
	{
		int choice;
		cout<<"If u want to add a number press 1.\nIf u want to show numbers press 2.\nIf u want to show successor and predecessor press 3.\nIf u want to tarminate the programme press 4.\n\t: ";
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
				break;
			case 3:
				cout<<"\n\n\tBlank\n\n";
			case 4:
				break;
		}
	}
	return 0;
}