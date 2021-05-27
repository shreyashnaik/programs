class Node
{
	private String data;
	private Node next;
  
    public Node(String data)
    {
      this.data = data;
    }
    public void setData(String data)
    {
      this.data = data;
    }
    public void setNext(Node node)
    {
      this.node = node;
    }
    public String getData()
    {
      return this.data;
    }
    public Node getNext()
    {
     return this.next;
    }
}

class LinkedList
{

 private Node head;
 private Node tail;

 public Node getHead()
 {
 return this.head;
 }
 public Node getTail()
 {
 return this.tail;
 }
public addAtEnd(String data)
{
	Node node = new Node(data);
	if(this.head == null)
	{
	  this.head = this.tail = node;
	}
	else
	{
	 this.tail.setNext(node);
	 this.tail = node;
	}
}
}

class Tester
{
	public static void main(String a[])
	{
	LinkedList list = new LinkList();
	list.addAtEnd("Milan");
	list.addAtEnd("venice");
	}
}