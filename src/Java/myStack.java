abstract class myStack {

    /**
     * Pushes the element on the top of the stack
     * @param elem The element to be pushed
     */
    abstract void push(char elem);

    /**
     * Pop or remove the element on the top of the stack
     */
    abstract void pop();
    
    /**
     * Display the elements in the stack
     */
    abstract void display();

    /**
     * 
     * @return a character or element located at the top of the stack
     */
    abstract char top();

    /**
     * 
     * @return true if it is empty, else false
     */
    abstract boolean isEmpty();

    /**
     * 
     * @return true if it is full, else false
     */
    abstract boolean isFull();
    
}
