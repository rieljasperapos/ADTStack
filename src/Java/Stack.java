public class Stack extends myStack {

    /**
     * Definition of MAX indicating the maximum element that the stack can hold
     */
    public static final int MAX = 7;

    /**
     * The size of the stack it is changed whenever we do some changes in the stack
     * 
     */
    private int size;

    /**
     * The array that holds the elements of the stack
     * 
     */
    private char[] elems;

    /**
     * Indicates what index our top is located 
     * 
     */
    private int top;

    public Stack() {
        this.size = 0;
        this.elems = new char[MAX];
        this.top = -1;
    }

    public void push(char data) {
        if (isFull()) {
            System.out.println("Stack is full, cannot push");
        } else {
            elems[++top] = data;
            size++;
        }
    }

    public void pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty, cannot pop");
        } else {
            top--;
        }
    }

    public char top() {
        if (isEmpty()) {
            throw new IllegalStateException("Stack is empty, top element not found");
        } else {
            return elems[top];
        }
    }

    public void display() {
        for (int indx = 0; indx <= top; indx++) {
            System.out.println(elems[indx]);
        }
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public boolean isFull() {
        return top == size;
    }


}
