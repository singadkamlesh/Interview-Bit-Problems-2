#include <bits/stdc++.h>
using namespace std;

int main(){

    Node *a = new Node(10);

    a->left = new Node(20);
    a->right = new Node(30);

    a->left->left = new Node(40);
    a->left->right = new Node(50);

    a->right->left = new Node(60);
    a->right->right = new Node(70);
    
    return 0;
}
