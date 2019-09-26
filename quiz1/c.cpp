#include <bits/stdc++.h>
  
using namespace std;

struct Node{
	Node * prev;
	Node * next;
	string val;
	Node(string _val){
		prev = NULL;
		next = NULL;
		val = _val;
	}	
};

Node * head = NULL;
Node * tail = NULL;
int cnt;
void add_back(string s)
{
    if(head == NULL){
        head = new Node(s);
        tail = head;
    }
    else{
        (*tail).next = new Node(s);
        (*(*tail).next).prev = tail;
        tail = (*tail).next;
    }
    cnt++;
    return;
}
void add_front(string s)
{
    if(head == NULL)
    {
        head = new Node(s);
        tail = head;
    }
    else{
        (*head).prev = new Node(s);
        (*(*head).prev).next = head;
        head = (*head).prev;
    }
    cnt++;
    return;
}
bool empty(){
    if(cnt == 0)
        return true;
    return false;
}
void erase_front()
{
    if(!empty())
    {
        if(cnt == 1)
        {
            head = NULL;
            tail = NULL;
        }
        else{
        head = (*head).next;
        (*head).prev = NULL;
        }
        cnt--;
    }
    return;
}
void erase_back(){
    if(!empty())
    {
        if(cnt == 1)
        {
            head = NULL;
            tail = NULL;
        }
        else{
            tail = (*tail).prev;
            (*tail).next = NULL;
        }
        cnt--;
    }
    return;
}
string front(){
    return (*head).val;
}
string back(){
    return (*tail).val;
}
void clear(){
    cnt = 0;
    head = NULL;
    tail = NULL;
    return;
}
  
int main()
{
	string s;
   	while(cin >> s){
   		if(s == "add_front"){
   			string t;
   			cin >> t;
   			add_front(t);
   			cout << "ok" << endl;
   		}
   		if(s == "add_back"){
   			string t;
   			cin >> t;
   			add_back(t);
   			cout << "ok" << endl;
   		}
   		if(s == "erase_front"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else
   			{
   				cout << front() << endl;
   				erase_front();
   			}
   		}
   		if(s == "erase_back"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << back() << endl;
   				erase_back();
   			}
   		}
   		if(s == "front"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << front() << endl;
   			}
   		}
   		if(s == "back"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << back() << endl;
   			}
   		}
   		if(s == "clear"){
   			clear();
   			cout << "ok" << endl;
   		}
   		if(s == "exit"){
   			cout << "goodbye" << endl;
   			break;
   		}
   		// cout << "hi" << endl;
   	}
    return 0;
}