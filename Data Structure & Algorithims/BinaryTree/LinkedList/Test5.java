
package LinkedList;

class Node{
     int data;
     Node next;
    
    public Node(int data){
        this.data=data;
    }
    public Node(Node next, int data){
        this.data=data;
        this.next=next;
    }
    public Node insertAtfirst(Node start,int x){   //new thing inserAtFirst function
        Node p = new Node(x);
        p.next=start;
        return start=p;
    }
    public void insert(Node start, int x){
        Node p;
        p=start;
        while(p.next!=null){
            if(p.next.data>x)
                break;
            p=p.next;
        }
        p.next=new Node(p.next,x);
    }
            
}

public class Test5 {
    
    public static void main(String args[]){
        
        Node start = new Node(11);
        Node p=start;
       for (int i=0; i<=5; i++)
           p=p.next=new Node(22+11*i);
        
        int counter=0;
        start.insert(start,34);
        start.insert(start, 12);
        start.insert(start, 15);
       start= start.insertAtfirst(start, 9);
        for (Node i=start; i!=null; i=i.next){
            System.out.print(" "+i.data);
            counter++;
        }
        System.out.println("\nsize: "+counter);
    }
    
}