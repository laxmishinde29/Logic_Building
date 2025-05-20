class node
{
    public int data;
    public node next;
    public node prev;
    
    public node(int Value)
    {
        data = Value;
        next = null;
        prev = null;
    }
}

class Doublycl
{
    public node First;
    public node Last;
    
    public int iCount;

    public DoublyCL()
    {
        System.out.println("Object of DoublyCL gets created succesfully");

        First = null;
        Last = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn.next = First;
            First.prev = Last;
            First = newn;
        }

        Last.next = First;
        First.prev = Last;

        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            Last.next = newn;
            newn.prev = Last;

            Last = newn;
        }

        Last.next = First;
        First.prev = Last;

        iCount++;
    }
    public void Display()
    {
       if(First == null && Last == null)
       {
        System.out.println("LLL is empty");
        return;
       }

       System.out.print("<=>");

       do
       {
        System.out.print("|"+First.data+"| <=>");
        First = First.next;
       }while(First != Last.next);

        System.out.println();
    }
    
    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if(First == null && Last == null)
        {
            System.out.println("LL is empty");
            return;
        }
        else if(First == null)
        {
            First = null;
            Last = null;
        }
        else
        {
            First = First.next;

            Last.next = First;
            First.prev = Last;
        }
        iCount--;
    }
    public void DeleteLast()
    {
         if(First == null && Last == null)
        {
            System.out.println("LL is empty");
            return;
        }
        else if(First == null)
        {
            First = null;
            Last = null;
        }
        else
        {
            Last = Last.prev;

            Last.next = First;
            First.prev = Last;
        }
        iCount--;
    }
    public void InsertAtPos(int No, int iPos)
    {
        if(iPos < 1 || iPos > iCount+1)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(No);
        }
        else
        {
            node newn = new node(No);
            node temp = First;
            int i = 0;

            for(i = 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;

            iCount++;
        }
    }
    public void DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCount+1)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            node temp = First;
            int i = 0;

            for(i = 1; i < iPos-1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;
        }
    }
}

class DoublyCL
{
    public static void main(String Arg[])
    {
        Doublycl obj = new Doublycl();
        int iRet = 0;

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);
        obj.InsertLast(171);

        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements in LL is :"+iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements in LL is :"+iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements in LL is :"+iRet);

        obj.InsertAtPos(105,5);
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements in LL is :"+iRet);

        obj.DeleteAtPos(5);
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements in LL is :"+iRet);

    }
}