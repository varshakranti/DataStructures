#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int calculateHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(calculateHeight(root->left),calculateHeight(root->right)) + 1;
}

int calcDiameter(Node* root){
    if(root == NULL){
        return 0;
    }
    int lHeight = calculateHeight(root->left);
    int rHeight = calculateHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

   //calculate diameter of binary tree
   cout<<calcDiameter(root)<<"\n";

    return 0;
}
