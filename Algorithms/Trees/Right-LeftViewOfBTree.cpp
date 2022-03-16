// Left View of Tree
void leftViewOfBtree(Node* root, vector<int> &ans, int level) {
    if(root == NULL) return;
    if(level == ans.size()) ans.push_back(root->data);
    leftViewOfBtree(root->left, ans, level + 1);
    leftViewOfBtree(root->right, ans, level + 1);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   leftViewOfBtree(root, ans, 0);
   return ans;
}


// Right View of Tree
void rightViewOfBtree(Node* root, vector<int> &ans, int level) {
    if(root == NULL) return;
    if(level == ans.size()) ans.push_back(root->data);
    rightViewOfBtree(root->right, ans, level + 1);
    rightViewOfBtree(root->left, ans, level + 1);
}