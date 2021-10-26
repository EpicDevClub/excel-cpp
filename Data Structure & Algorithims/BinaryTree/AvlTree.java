
package BinaryTree;

public class AvlTree {
  
    private static class Node{
        int data;
        Node right,left;
        int height;
        
        Node(){
            right=left=null;              
        }
        Node(int data){
            this.data=data;
            right=left=null;
        }
    }
    Node root;
    public AvlTree(){
        root=null;
    }
    
    //******************height****************
    public int height(Node root){
        return root==null ? -1 : root.height;
    }
    //********max height left or right***************
    public int max(int lhs, int rhs){
        return lhs>rhs  ? lhs : rhs;
    }
    public void insert(int data){
        this.root = insertRecursive( data,  root);
    }
    private Node insertRecursive(int data, Node root){
        if(root==null){
            root= new Node(data);
        }
        else if(data<root.data){
            root.left=insertRecursive(data,root.left);
            if(height(root.left)-height(root.right)==2){
               if(data<root.left.data){
                   root=rotateWithLeft(root);
               }
               else{
                   root=DoubleRotateWithLeft(root);
               }
            }        
    }
        else if(data>root.data){
            root.right=insertRecursive(data,root.right);
            if(height(root.right)-height(root.left)==2){
                if(data>root.right.data){
                    root=rotateWithRight(root);
                }
                else{
                    root=DoubleRotateWithRight(root);
                }
            }
        }
        else ;// duplicate do nothing
        root.height=max(height(root.left),height(root.right))+1;
        return root;   
    }
    
    /*  O 
       o  o
      o  
     o        in this type of secnario Simple rotate Left works */
    
    private Node rotateWithLeft(Node root){
        Node r = root.left;
        root.left=r.right;
        r.right=root;
        root.height=max(height(root.left),height(root.right))+1;
        r.height=max(height(r.left),root.height)+1;
        return r;
    }

     /*  
         O 
       o   o
            o
             o
                      in this type of secnario Simple rotate Right works */
    
    private Node rotateWithRight(Node root){
        Node r = root.right;
        root.right=r.left;
        r.left=root;
        root.height=max(height(root.left),height(root.right))+1;
        r.height=max(height(r.left),root.height);
        return r;
    }
    /*
         o
        o o
           o
          o
    */
    
    private Node DoubleRotateWithLeft(Node root){
        root.left=rotateWithRight(root.left);
        return rotateWithLeft(root);
    }
     /*
           o
          o  o
         o
           o  
    */
    private Node DoubleRotateWithRight(Node root){
        root.right=rotateWithLeft(root.right);
        return rotateWithRight(root);
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
    public static void main(String args[]){
        AvlTree tree = new AvlTree();
        
        tree.insert(10);
        tree.insert(11);
        tree.insert(8);
        tree.insert(7);
        tree.insert(9);
                
        tree.postOrder();
        
    }
}
