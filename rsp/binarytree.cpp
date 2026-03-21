#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
    TreeNode(int v) : data(v), left(nullptr), right(nullptr) {}
};

class BST
{
public:
    TreeNode *root = nullptr;

    void insert(int v)
    {
        if (!root)
        {
            root = new TreeNode(v);
            return;
        }
        TreeNode *cur = root;
        while (true)
        {
            if (v < cur->data)
            {
                if (!cur->left)
                {
                    cur->left = new TreeNode(v);
                    break;
                }
                cur = cur->left;
            }
            else if (v > cur->data)
            {
                if (!cur->right)
                {
                    cur->right = new TreeNode(v);
                    break;
                }
                cur = cur->right;
            }
            else
                break;
        }
    }

    bool search(int v)
    {
        TreeNode *cur = root;
        while (cur)
        {
            if (v == cur->data)
                return true;
            else if (v < cur->data)
                cur = cur->left;
            else
                cur = cur->right;
        }
        return false;
    }

    void remove(int v)
    {
        root = removeNode(root, v);
    }

    void DFS()
    {
        DFSRecursive(root);
        cout << "\n";
    }

    void BFS()
    {
        if (!root)
            return;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *cur = q.front();
            q.pop();
            cout << cur->data << ' ';
            if (cur->left)
                q.push(cur->left);
            if (cur->right)
                q.push(cur->right);
        }
        cout << "\n";
    }

private:
    TreeNode *removeNode(TreeNode *node, int v)
    {
        if (!node)
            return nullptr;
        if (v < node->data)
            node->left = removeNode(node->left, v);
        else if (v > node->data)
            node->right = removeNode(node->right, v);
        else
        {
            if (!node->left)
                return node->right;
            if (!node->right)
                return node->left;
            TreeNode *minNode = node->right;
            while (minNode->left)
                minNode = minNode->left;
            node->data = minNode->data;
            node->right = removeNode(node->right, minNode->data);
        }
        return node;
    }

    void DFSRecursive(TreeNode *node)
    {
        if (!node)
            return;
        cout << node->data << ' ';
        DFSRecursive(node->left);
        DFSRecursive(node->right);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "DFS\n";
    tree.DFS();

    cout << "BFS\n";
    tree.BFS();

    cout << "40 in BT: " << (tree.search(40) ? "Yes" : "No") << "\n";
    cout << "90 in BT: " << (tree.search(90) ? "Yes" : "No") << "\n";

    tree.remove(20);
    tree.remove(30);
    tree.remove(50);

    cout << "DFS after deletions\n";
    tree.DFS();

    cout << "BFS after deletions\n";
    tree.BFS();

    return 0;
}
