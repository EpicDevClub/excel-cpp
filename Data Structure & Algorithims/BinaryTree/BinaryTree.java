
// maximum no of nodes in a binary tree with heigth h is = 2^h+1 -1  means no. of levels minus 1


package BinaryTree;

public class BinaryTree {
    int value;
    BinaryTree root,left,right;
    
    public BinaryTree(){
        this.root=null;
        this.left=null;
        this.right=null;            
    }
    public BinaryTree(int value){
        this.value=value;        
    }
  
    public BinaryTree insert(BinaryTree root,int value){
        if(root==null){
            root=new BinaryTree(value);
            return root;
        }
        if(value<root.value){
            root.left=insert(root.left,value);
        }
        else{
            root.right=insert(root.right,value);
        }
        return root;
    }
    public Object getRoot(){
        return root;
    }
    public BinaryTree getLeft(){
        return left;
    }
    public BinaryTree getRight(){
        return right;
    }
 /*   public Object setRoot(Object root){
        Object oldRoot=this.root;
        this.root=root;
        return oldRoot;
    }
    public BinaryTree setLeft(BinaryTree left){
        BinaryTree oldLeft = this.left;
        this.left=left;
        return oldLeft;
    }
    public BinaryTree setRight(BinaryTree right){
        BinaryTree oldRight=this.right;
        this.right=right;
        return oldRight;
    }*/
    public String toString(){
        StringBuffer sb = new StringBuffer();
        if(left!=null)
            sb.append(left.toString()+",");
        sb.append(root);
        if(right!=null)
            sb.append(","+right.toString());
        return sb+"";
    }
    public String preOrder(){
        StringBuffer sb = new StringBuffer();
        sb.append(root);
        if(left!=null)
            sb.append(" "+left.preOrder());
        if(right!=null)
            sb.append(" "+right.preOrder());
        return sb+"";
    }
    public String postOrder(){
        StringBuffer sb = new StringBuffer();
        if(left!=null)
            sb.append(left.postOrder());
        if(right!=null)
            sb.append(" "+right.postOrder());
        sb.append(" "+root);
        return sb+"";
    }
    public boolean isLeaf(){
        if(left==null && right==null) return true;
        return false;
    }
    public int size(){
        if(left==null && right==null)
            return 1;
        if(left==null)
            return 1+right.size();
        if(right==null)
            return 1+left.size();
        return 1+left.size()+right.size();
    }
    public int height(){
        if(root==null)
            return -1;
        
        int lefts=0,rights=0;
        
        if(left!=null)
            lefts= 1+left.height();
        
        if(right!=null)
            rights=1+right.height();
        return lefts>rights ? lefts : rights;  
    }
    public boolean contains(Object obj){
        if(root==obj)
            return true;
        if(left!=null)
            if(left.contains(obj))
                return true;
        if(right!=null)
        if(right.contains(obj))
            return true;
        return false;
    }
    
    public static void main(String args[]){
       /* BinaryTree tree22= new BinaryTree("22");
        BinaryTree tree66= new BinaryTree("66");
        BinaryTree tree88= new BinaryTree("88");
        BinaryTree tree33= new BinaryTree("33",tree22,null);
        BinaryTree tree55= new BinaryTree("55",null,tree66);
        BinaryTree tree44= new BinaryTree("44",tree33,tree55);
        BinaryTree tree99= new BinaryTree("99",tree88,null);
        BinaryTree tree77= new BinaryTree("77",tree44,tree99);
        
        System.out.println("InOrder "+tree77);
        System.out.println("PreOrder "+tree77.preOrder());
        System.out.println("PostOrdre "+tree77.postOrder());
        System.out.println(tree77.height());
        System.out.println(tree77.size());
        System.out.println(tree22.isLeaf());
        System.out.println(tree44.isLeaf());
        System.out.println(tree22.contains("66"));*/
        
       BinaryTree root = new BinaryTree();
       root.insert(root, 55);
       root.insert(root, 66);
       root.insert(root, 34);
       root.preOrder();
     //  System.out.println(root);
    }

}
