
package LinkedList;

import java.util.Scanner;

class Node{
    private int data;
    private Node next;
    //private int size=0;
    
    public Node(){
        data=0;
    }
    
    public Node(int data,Node next){
        this.data=data;
        this.next=next;
    }
    
   public static Node insert(int x,Node start){
       if (start==null || start.data>x){
        Node p = new Node(x,start);
           return p;
       }
       else{
           Node p;
           p=start;
           while(p.next!=null){
               if (p.next.data>x) break;
               p=p.next;
           }
           p.next=new Node(x,p.next);
           return start;  
       }
   }
   
   public static Node deleteData(int d, Node start){
       if (start==null){
           System.out.println("List is already empty\n");
           return null;
       }
       if (start.data==d)
           return start=null;
       
       for(Node i=start ;i!=null; i=i.next){
           if(i.data!=d && i.next==null){
                   System.out.println("Input data is not in the List");
                   return start;
               }
           if(i.next.data==d){
               i.next=i.next.next;
               return start;
           }
       }
        return start;
   }
   
   public static int sum(Node list){
       if(list==null){
           System.out.println("List is empty");
       }
       int sum=0;
       for(Node i=list; i!=null; i=i.next){
           sum+=i.data;
       }
        return sum;   
   }
   
   public static Node copy(Node list){
       if(list==null){
           System.out.println("List is empty");
           return list;
       }
       Node start=list;
       for (Node i=start; i.next!=null; i=i.next){
           i.next=new Node(list.next.data,list.next.next);
           list=list.next;
       }
       return start;
   }
   
   public static Node concat(Node list1, Node list2){
       if (list1==null && list2==null){
           System.out.println("Both lists are empty");
           return null;
       }
       else if(list2==null && list1!=null){
           return list1;
       }
       else if(list1==null && list2!=null)
           return list2;
       else{
           Node i,n,start;
           start=list1;
           i=list1;
           n=list2;
           while(i.next!=null){
               i.next=new Node(i.next.data,i.next.next);
               i=i.next;
           }
          while (n!=null){
              i.next=new Node(n.data,n.next);
              i=i.next;
              n=n.next;
          }
           return start;
       }      
   }
   
   public static void swap(Node start,int ith,int jth){
       Node l1,l2,temp;
       l1=start;
       l2=start;
       for(int i=1; i<ith-1; i++)
           l1=l1.next;
       for(int i=1; i<jth-1; i++)
           l2=l2.next;
       temp=l1.next;
     //  l1.next=l2.next;
       l2.next=temp;
       System.out.println(l1.next.data+" "+l2.next.data);
   }
   
   public static void viewList(Node start){
       if(start==null)
           System.out.println("\n"+null);
       int size=0;
       for(Node i=start; i!=null; i=i.next){
           System.out.print(" "+i.data);
           size++;
       }
       System.out.print("\nsize : "+size);
   }
 /*  public static void viewMemoryAddress(Node OriList,Node CopList){
       System.out.println("Memory Adress of Original List: ");
       for(Node i=OriList; i!=null; i=i.next){
           System.out.println(i);
       }
       System.out.println("\nMemory Adress of Copied List: ");
       for(Node i=CopList; i!=null; i=i.next){
           System.out.println(i);
       }
   }*/
}

public class Test6 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        Node list = null;
        Node list1=null;
        
        
       
        
        int choice=0;
        int val;
        boolean flag=true;
        while(flag){
        System.out.println("\n1. To insert elements");
        System.out.println("2. To delete data");
        System.out.println("3. To add all elements of the list");
        System.out.println("4. To Copy one List to another List");
        System.out.println("5. To make new List");
        System.out.println("6. To concet list1 and list2 in new list & view that list");
        System.out.println("7. To Swap the elements of list");
        System.out.println("8. View List and size");
        System.out.println("9. Exit");
        System.out.println("Enter a choice");
        choice=s.nextInt();
        
        switch(choice){
            case 1:  
                System.out.print("input value ");
                val=s.nextInt();
                list = Node.insert(val, list);
                break;
            case 2:
                System.out.print("Input value ");
                val=s.nextInt();
                list=Node.deleteData(val, list);
                break;
            case 3: 
                System.out.println("Sum of all elements of list: "+Node.sum(list));
                break;
            case 4:
                Node newList=Node.copy(list);
              //  if(list!=null)
               // Node.viewMemoryAddress(start,list);
                break;             
            case 5:
                System.out.print("input value ");
                val=s.nextInt();
                list1= Node.insert(val, list1);
                Node.viewList(list1);
                break;
            case 6:
                Node concatList;
                concatList=Node.concat(list, list1);
                Node.viewList(concatList);
                break;
            case 7:
                System.out.println("input ith postion");
                int i=s.nextInt();
                System.out.println("Input jth position");
                int j=s.nextInt();
                Node.swap(list, i, j);
                break;
            case 8:
               System.out.println("1. to view 1st list\n2. to view 2nd list");
               choice=s.nextInt();
               if(choice==1)
                Node.viewList(list);
               if(choice==2)
                 Node.viewList(list1);
                break;
            case 9:
                flag=false;
            default:
                System.out.println("invalid input");
        }
        }    
                
        
    }
}
