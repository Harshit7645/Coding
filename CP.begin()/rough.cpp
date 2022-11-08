#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define PNO cout<<"NO\n"
#define PYES cout<<"YES\n"
using namespace std;
class node {
public:
	char value;
	node* left;
	node* right;
	node* next = NULL;
	node(char c)
	{
		this->value = c;
		left = NULL;
		right = NULL;
	}
	node()
	{
		left = NULL;
		right = NULL;
	}
	friend class Stack;
	friend class expression_tree;
};
class Stack {
	node* head = NULL;

public:
	void push(node*);
	node* pop();
	friend class expression_tree;
};
class expression_tree {
public:
	void inorder(node* x)
	{
		if (x == NULL)
			return;
		else {
			inorder(x->left);
			cout << x->value << " ";
			inorder(x->right);
		}
	}
};

void Stack::push(node* x)
{
	if (head == NULL) {
		head = x;
	}
	else {
		x->next = head;
		head = x;
	}
}
node* Stack::pop()
{
	node* p = head;
	head = head->next;
	return p;
}
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string infixToPostfix(string s)
{
  
    stack<char> st;
    string result;
  
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty()
                   && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
}
int main()
{
    expression_tree random;
	string s;
    cin>>s;
    s=infixToPostfix(s);
	Stack exp;
	node *rise, *drown, *z;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '+' || s[i] == '-' || s[i] == '*'|| s[i] == '/' || s[i] == '^') 
        {
			z = new node(s[i]);
            drown = exp.pop(); 
			rise = exp.pop();
            z->right = rise;
			z->left = drown;
			exp.push(z);
		}
		else {
			z = new node(s[i]);
			exp.push(z);
		}
	}
	cout<<"Inorder Traversal of Expression Tree:-"<<endl;
	random.inorder(z);
}