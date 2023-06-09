//{ Driver Code Starts
// Initial Template for C++
// Problem Link: https://practice.geeksforgeeks.org/problems/introduction-to-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-linked-list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;   
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/
void insert(Node* &head,int d){
    if(!head){
        Node* node = new Node(d);
        head=node;
        return;
    }
    Node* node = new Node(d);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
}
class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node* head=new Node(arr[0]);
        Node* temp=head;
        for(int i=1;i<arr.size();i++){
            Node* node=new Node(arr[i]);
            temp->next=node;
            temp=node;
        }
        return head;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        Node* ans = obj.constructLL(arr);
        while (ans) {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
