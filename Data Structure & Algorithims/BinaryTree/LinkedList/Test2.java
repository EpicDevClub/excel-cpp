
package LinkedList;

class Node{
     int data;
     Node next;
    
    public Node(int data){
        this.data=data;
    }
            
}

public class Test2 {
    
    public static void main(String args[]){
        
        Node start = new Node(11);
        Node p=start;
        p.next = new Node(22);
        p=p.next;
        p.next=new Node(33);
        p=p.next;
        p.next=new Node(44);
        p=p.next;
        p.next=new Node(55);
        
        int counter=0;
        for (Node i=start; i!=null; i=i.next){
            System.out.print(" "+i.data);
            counter++;
        }
        System.out.println("\nsize: "+counter);
    }
    
}