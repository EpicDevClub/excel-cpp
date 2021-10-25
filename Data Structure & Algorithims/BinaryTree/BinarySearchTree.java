package BinaryTree;

public class BinarySearchTree {

    public static class Node {

        int data;
        Node left, right;

        Node(int data) {
            this.data = data;
            left = right = null;
        }

    }
    Node root;

    BinarySearchTree() {
        root = null;
    }
    //**********insert************** 

    public void insert(int data) {
        root = insertRecursively(root, data);
    }

    private Node insertRecursively(Node root, int data) {
        // tree is empty
        if (root == null) {
            root = new Node(data);
            return root;
        }
        //tree is not empty ....traverse the tree
        if (data < root.data) {
            root.left = insertRecursively(root.left, data);
        } else if (data > root.data) {
            root.right = insertRecursively(root.right, data);
        }
        return root;
    }
    //************preOrder**************

    public void preOrder() {

        preOrderRecursive(root);
        System.out.println();
    }

    private void preOrderRecursive(Node root) {
        if (root != null) {
            System.out.print(root.data + " ");
            preOrderRecursive(root.left);
            preOrderRecursive(root.right);
        }      
    }
    //************InOrder******************

    public void InOrder() {

        InOrderRecursive(root);
        System.out.println();
    }

    private void InOrderRecursive(Node root) {
        if (root != null) {
            InOrderRecursive(root.left);
            System.out.print(root.data + " ");
            InOrderRecursive(root.right);
        }
    }
    //*****************PostOrder********************

    public void postOrder() {

        postOrderRecursive(root);
        System.out.println();
    }

    private void postOrderRecursive(Node root) {
        if (root != null) {
            postOrderRecursive(root.left);
            postOrderRecursive(root.right);
            System.out.print(root.data + " ");
        }
    }
    //*********size***************************

    public int size() {
        return sizeRecursive(root);
    }

    private int sizeRecursive(Node root) {
        if (root.left == null && root.right == null) {
            return 1;
        }
        if (root.left == null) {
            return 1 + sizeRecursive(root.right);
        }
        if (root.right == null) {
            return 1 + sizeRecursive(root.left);
        }
        return 1 + sizeRecursive(root.left) + sizeRecursive(root.right);
    }
    //***************IsLeaf*******************

    public boolean isLeaf() { 
        if (root.left == null && root.right == null) {
            return true;
        }
        return false;
    }
    // ******************************************************
    //*****************Height******************************

    public int height() {
        return heightRecursive(root);
    }

    private int heightRecursive(Node root) {
        if (root == null) {
            return -1;
        }
        int lefts = 0, rights = 0;
        if (root.left != null) {
            lefts = 1 + heightRecursive(root.left);
        }
        if (root.right != null) {
            rights = 1 + heightRecursive(root.right);
        }
        return lefts > rights ? lefts : rights;
    }
    //******************************************************
    //***********Search*************************************

    public boolean search(int data) {
        root = searchRecursive(root, data);
        if (root != null) {
            return true;
        } else {
            return false;
        }
    }

    private Node searchRecursive(Node root, int data) {
        if (root == null || data == root.data) {
            return root;
        }
        if (data < root.data) {
            return searchRecursive(root.left, data);
        }
        if (data > root.data) {
            return searchRecursive(root.right, data);
        }
        return null;
    }
    //*****************************************************
    //*********************DELETE**************************

    public Node delete(int key) {
        return deleteRecursive(root, key);
    }

    private Node deleteRecursive(Node root, int key) {
        if (root == null) {
            return null;
        }
        if (root.data > key) {
            root.left= deleteRecursive(root.left, key);
        } else if (root.data < key) {
           root.right= deleteRecursive(root.right, key);
        } else {
            //if deleted node have both children
            if (root.left != null && root.right != null) {
                Node temp = root;
                // Finding minimum element from right
                Node rightMinRoot = minValue(temp.right);
                // Replacing current node with minimum node from right subtree
                root.data = rightMinRoot.data;
                // Deleting minimum node from right now
                root.right = deleteRecursive(root.right, rightMinRoot.data);
            } // if nodeToBeDeleted has only left child
            else if (root.left != null) {
                root = root.left;
               // root.left = null;
            } else if (root.right != null) {
                root = root.right;
              //  root.right = null;
            } else {
                root = null;
            }
        }
        return root;
    }
    //********************Minimum Element From Right Sub-Tree*********************************

    private Node minValue(Node root) {
        if (root.left == null) {
            return root;
        } else {
            return minValue(root.left);
        }
    }

    public static void main(String args[]) {
        BinarySearchTree tree = new BinarySearchTree();

        tree.insert(12);
        tree.insert(5);
        tree.insert(17);
        tree.insert(13);
        tree.insert(7);
        tree.insert(3);
       // tree.insert(13);
        tree.insert(9);

        tree.preOrder();
        //  tree.postOrder();
        // tree.InOrder();
        // System.out.println(tree.size()+"\n"+tree.height());
        // System.out.println(tree.search(63));
        // tree.delete(13);
        // tree.preOrder();
       // tree.delete(17);
        tree.delete(5);
       // tree.delete(7);
        tree.preOrder();
    }
}
