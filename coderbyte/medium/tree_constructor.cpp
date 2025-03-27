/*

          4  
         /
        2
       / \
      1   7 
         / 
        5 
         \
          9 

*/

// i need to construct a tree from the string array, and then check if it is a binary search tree or not
//
/*
Input: {"(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)"}
Output: true


Input: {"(1,2)", "(2,4)", "(5,7)", "(7,2)", "(15,9)"}

Output: false

// i need to construct a tree from the string array, and then check if it is a binary search tree or not


// check this again later
//
// i need to construct a tree from the string array, and then check if it is a binary search tree or not




*/
using namespace std; 

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>


class  node {

public:
	int data;
	node *left;
	node *right;
	
	node(int val) : data(val), left(nullptr), right(nullptr) {}
	
	void setLeft(node* ln) {this->left = ln;}
	void setRight(node* rn) {this->right = rn;}
	
	node* getLeft() {return this->left;}	
	node* getRight() {return this->right;}

};

bool isProperTree(node* root) {
	if(root == nullptr) return true; 

	if(root->getLeft() != nullptr && root->getLeft()->data > root->data) return false;
	if(root->getRight() != nullptr && root->getRight()->data < root->data) return false;

	return isProperTree(root->getLeft()) && isProperTree(root->getRight());


}


node* buildtree(vector<string> &arr) {
	unordered_map<int, node*> nodes; 
	node* root = nullptr;
	for(const string &s: arr) {	
		int child, parent; 

		sscanf(s.c_str(), "(%d,%d)", &child, &parent); 
		
		// create nodes if they don't exist 
		if(nodes.find(child) ==  nodes.end()) {
		nodes[child] =  new node(child); 		
		}

		if(nodes.find(parent) == nodes.end()) {
		nodes[parent] = new node(parent); 
		}
		
		node* childnode = nodes[child];
		node* parentnode = nodes[parent]; 
		
		if(parentnode->data > childnode->data && parentnode->getLeft() == nullptr) {
			parentnode->setLeft(childnode);
		} else if(parentnode->data < childnode->data &&  parentnode->getRight() == nullptr) {
			parentnode->setRight(childnode);
		} else {
			return nullptr; // more than two children for a node 
		}
		
		if(!root || root == childnode) 
			root = parentnode; // the root will eventually be the topmost parent
	}
	return root;
		
	}



string TreeConstructor(vector<string> strArr){
	node* root = buildtree(strArr);
	
	return (root && isProperTree(root)) ? "true" : "false";
}



int main() {
	vector<string> strArr = {"(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)"};
	cout << TreeConstructor(strArr) << endl;

}




