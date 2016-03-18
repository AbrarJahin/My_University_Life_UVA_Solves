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
		TNode *LeftChild,*RightChild,*Parent_Node;
	TNode()
	{
		data=0;
		LeftChild=NULL;
		RightChild=NULL;
		Parent_Node=NULL;
	}
	void SetData(int dat)
	{
		data=dat;
	}
	int GetData()
	{
		return data;
	}
	void SetParent(TNode *parent)
	{
		Parent_Node=parent;
	}
	int GetParent(TNode *parent)
	{
		return parent->GetData();
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
					ParentNode=CurrentNode;
					CurrentNode=CurrentNode->LeftChild;
					CurrentNode->SetParent(ParentNode);
					if(CurrentNode==NULL)
					{
						ParentNode->LeftChild=NewNode;
						return;
					}
				}
				else
				{
					ParentNode=CurrentNode;
					CurrentNode=CurrentNode->RightChild;
					CurrentNode->SetParent(ParentNode);
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
	int predecessor(int value)
	{
		TNode *Parent=Root;
		while(Parent!=NULL && value==Parent->GetData())
		{
			if(Parent->GetData()<value)
				Parent=Parent->LeftChild;
			else
				Parent=Parent->RightChild;
		}
		if(Parent==NULL)
		{
			cout<<"\n\nNumber Not Found . . .\n";
			return 0;
		}
		else
		{
			if(Parent->LeftChild!=NULL)
				return Parent->Parent_Node->GetData();
			else
			{
				cout<<"No Predecessor found . . .";
				return 0;
			}
		}
	}
	int GetSuccessor(int value)
	{
		TNode *Parent=Root;
		while(Parent!=NULL && value==Parent->GetData())
		{
			if(Parent->GetData()<value)
				Parent=Parent->LeftChild;
			else
				Parent=Parent->RightChild;
		}
		if(Parent==NULL)
		{
			cout<<"\n\nNumber Not Found . . .\n";
			return 0;
		}
		else
		{
			if(Parent->LeftChild!=NULL)
				return Parent->LeftChild->GetData();
			else if(Parent->RightChild!=NULL)
				return Parent->RightChild->GetData();
			else
			{
				cout<<"No Successor found . . .";
				return 0;
			}
        }
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
				cin>>choice;
				cout<<"Predecessor = "<<tree.predecessor(choice)<<"\tSuccessor = "<<tree.GetSuccessor(choice)<<endl<<endl;
				break;
			case 4:
				return 0;
		}
	}

}
