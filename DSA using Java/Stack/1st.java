import java.util.Stack;

class MainClass{

    public static void main(String[] args){

        Stack<Integer> stack=new Stack<>();

        stack.push(9);
        stack.push(3);
        stack.push(4);
        stack.push(5);
        stack.push(7);
        stack.push(1);


        while(!stack.isEmpty()){
            System.out.println("|  "+stack.peek()+"  |");
            stack.pop();
        }
        System.out.println("-------");

        


    }
}