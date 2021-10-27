package LinkedList;

import java.util.Scanner;

class Node{
    private int data;
    private Node next;
    
    public Node(){
        data =0;
        next = null;
    }
    
    public Node(int data, Node next){
        this.data = data;
        this.next = next;
    }
    public void setData(int data){
        this.data=data;
    }
    public int getData(){
        return data;
    }
    public void setNext(Node next){
        this.next = next;
    }
    public Node getNext(){
        return next;
    }
}

class LinkedList{
    
    private int size;
    private Node start;
    
    LinkedList(){
        size=0;
        start=null;
}
    public boolean isEmpty(){
        if (start==null)
            return true;
        else
            return false;  
    }
    
    public void insertAtFirst(int val){
        Node n;
        n = new Node();
        n.setData(val);
        n.setNext(start);
        start=n;
        size++;
    }
    
    public void insertAtLast(int val){
        Node n,t;
        n = new Node();
        n.setData(val);
        if (start == null){
            start=n;
        }
        else{
          t=start;
          for (int i=1; i<=size-1; i++){
              t = t.getNext();
          }
          t.setNext(n);
        }
        size++;
    }
    
    public void insertAtPos(int val, int pos){
        
        Node n;
        
        if (pos==1){
            insertAtFirst(val);
        }
        else if (pos==size+1)
            insertAtLast(val);
        else if (pos>1 && pos<=size){
            n = new Node(val,null);
            Node t = start;
            for (int i=1; i<pos-1; i++){
                t = t.getNext();
            }
            n.setNext(t.getNext());
            t.setNext(n);
            size++;
        }
        else
            System.out.println("Insertion not possible at position "+pos);
    }
    
    public void deleteAtPos(int pos){
        if (start==null)
            System.out.println("List is already empty");
        else if (pos<1 || pos>size)
            System.out.println("Invalid position");
        else if (size==1)
            deleteAtFirst();
        else if (pos==size)
            deleteAtLast();
        else{
            Node  n,n1;
            n=start;
            for (int i=1; i<pos-1; i++)
                n=n.getNext();
            n1=n.getNext();
            n.setNext(n1.getNext());
            size--;   
        }      
    }
    
    public void deleteAtLast(){
        if(start==null)
            System.out.println("List is already empty");
        else if(size==1){
            start=null;
            size--;
        }  
        else{
        Node n;
        n=start;
        for (int i=1; i<size-1; i++)
            n = n.getNext();
        n.setNext(null);
        size--;
        }
    }
    
    public void deleteAtFirst(){
        if (start==null)
            System.out.println("List is already empty");
        else{
          start=start.getNext();
          size--;
        }
    }
    
    public int listSize(){
        return size;
    }
    public void viewList(){
        Node n ;
        if (isEmpty()){
            System.out.println("List is empty");
        }
        else{
         n = start;
        for (int i =1; i<=size; i++){
            
            System.out.print(" "+n.getData());
            n=n.getNext();  
        }
        System.out.println();
      }  
    }
    
}

public class LinkedList1 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        LinkedList list = new LinkedList();
        boolean flag=true;
        int pos,val;
                
        while(flag){
        System.out.println("1. Add item to List at Start");
        System.out.println("2. Add item to List at Last");
        System.out.println("3. Add item to List at Postion");
        System.out.println("4. Delete item to List at Start");
        System.out.println("5. Delete item to List at Last");
        System.out.println("6. Delete item to List at Position");
        System.out.println("7. View List");
        System.out.println("8. View List size");
        System.out.println("9. Exist");
        System.out.println("Enter a Choice");
        int choice = s.nextInt();
        switch(choice){
            case 1:
                System.out.println("Enter value");
                val = s.nextInt();
                list.insertAtFirst(val);
                break;
            case 2:
                System.out.println("Enter value");
                val = s.nextInt();
                list.insertAtLast(val);
                break;
            case 3:
                System.out.println("Enter value");
                val = s.nextInt();
                System.out.println("Enter postion");
                 pos = s.nextInt();
                list.insertAtPos(val, pos);
                break;
            case 4:
                list.deleteAtFirst();
                break;
            case 5:
                list.deleteAtLast();
                break;
            case 6:
                System.out.println("Enter position");
                 pos = s.nextInt();
                list.deleteAtPos(pos);
                break;
            case 7:
                list.viewList();
                break;
            case 8:
                System.out.println("Size of List: "+list.listSize());
                break;
            case 9:
                flag=false;
                break;
            default :
                System.out.println("Invalid Choice");
        }
        }
    }
    
}
