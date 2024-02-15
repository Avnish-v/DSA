class Node {
    int data;
    Node next;
    Node prev ; 

    public Node(int data) {
        this.data = data;
        this.next = null;
        this.prev =  null;
    }
}

class LinkedList {
    Node head;
    public LinkedList() {
        this.head = null;
    }

    public void append(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
    

        } else {
            
            Node current = head;
            while (current.next != null) {
                current = current.next;
                newNode.prev =  current ;
            }
            current.next = newNode;
        }
    }

    public void printList() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.append(10);
        list.append(202);
        list.append(92892);
        System.out.print("Linked List: ");
        list.printList();
    }
}
