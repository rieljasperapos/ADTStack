public class main {
    public static void main(String[] args) {
        Stack newStack = new Stack();
        
        newStack.push('C');
        newStack.push('S');
        newStack.push('D');
        newStack.push('G');
        newStack.push('C');
        newStack.push('S');
        newStack.push('U');

        newStack.pop();
        newStack.pop();
        // newStack.pop();
        // newStack.pop();
        // newStack.pop();
        // newStack.pop();
        // newStack.pop();
        // newStack.pop();

        newStack.display();
        System.out.println("Top: " + newStack.top());
        // newStack.pop();
        // System.out.println("Top: " + newStack.top());

    }
}
