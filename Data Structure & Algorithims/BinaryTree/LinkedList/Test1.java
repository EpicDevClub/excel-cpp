
package LinkedList;

class Node{
     int data;
     Node next;
    
    public Node(int data){
        this.data=data;
    }
            
}

public class Test1 {
    
    public static void main(String args[]){
        
        Node start = new Node(11);
        start.next = new Node(22);
        start.next.next=new Node(33);
        start.next.next.next=new Node(44);
        start.next.next.next.next=new Node(55);
        
        for (Node i=start; i!=null; i=i.next){
            System.out.print(" "+i.data);
        }
    }
    
}
