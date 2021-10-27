
package LinkedList;

class Node{
     int data;
     Node next;
    
    public Node(int data){
        this.data=data;
    }
            
}

public class Test3 {
    
    public static void main(String args[]){
        
        Node start = new Node(11);
        Node p=start;
       for (int i=0; i<=5; i++)             //new thing loop
           p=p.next=new Node(22+11*i);
        
        int counter=0;
        for (Node i=start; i!=null; i=i.next){
            System.out.print(" "+i.data);
            counter++;
        }
        System.out.println("\nsize: "+counter);
    }
    
}