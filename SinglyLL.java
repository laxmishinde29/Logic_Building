class node
{
    public int data;
    public node next;

    public node(int Value) //parameterized constructor (Insertatpos)
    {
        data = Value;
        next = null;
    }
}

class Singlyll
{
    public node First;
    public int iCount;

    Singlyll()
    {
        System.out.println("object of singlyll created succesfully");
        First = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;
        node temp = null;

        newn = new node(No);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;

        }
        iCount++;
    }
    public void Display()
    {
        System.out.println("Element of Linkedlist are : ");

        node temp = First;

        while(temp != null)
        {
            System.out.print("|" +temp.data+"|->");  //ln ahi lihila mahnun te adva print zal 
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if(First == null)
        {
            System.out.println("LL is Empty");
            return;
        }
        else if(First.next == null)
        {
            First = null;
        }
        else
        {
            First = First.next;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(First == null)
        {
            System.out.println("LL is Empty");
            return;
        }
        else if(First.next == null)
        {
            First = null;
        }
        else
        {
            node temp = First;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        iCount--;
    }

    public void InsertAtPos(int No, int iPos)
    {
        if((iPos < 1) || (iPos > iCount + 1))
        {
            System.out.println("LL is empty");
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iCount+1)
        {
            InsertLast(No);
        }
        else
        {
            node temp = First;
            int i = 0;

            node newn = new node(No);

            for(i = 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            iCount++;
        }
    }

    public void DeleteAtPos(int iPos)
    {
        if((iPos < 1) || (iPos > iCount + 1))
        {
            System.out.println("LL is empty");
            return;
        }
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount+1)
        {
            DeleteLast();
        }
        else
        {
            node temp = First;
            int i = 0;

            for(i = 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            
            temp.next = temp.next.next;

            iCount--;
        }
    }


}

class SinglyLL
{
    public static void main(String arg[])
    {
        Singlyll obj = new Singlyll();
        int iRet = 0;

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of linked list is :"+iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of linked list is :"+iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of linked list is :"+iRet);

        obj.InsertAtPos(105,3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of linked list is :"+iRet);

        obj.DeleteAtPos(3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of linked list is :"+iRet);

    }
}