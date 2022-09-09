import java.util.Stack;
import java.util.*;

class Main{

    public static void main(String[] args) {

        //declarition

        Stack<Character> stack=new Stack<>();

        //input class

        Scanner read = new Scanner(System.in);     //Scanner Object

        System.out.print("Enter a String : ");
        
        String str=read.nextLine();    //to read

        System.out.print("\nInput String : "+str);

        //push in stack

        for(int i=0; i<str.length(); i++){
            char a=str.charAt(i);
            stack.push(a);
        }


        System.out.print("\n\nReversed String : ");

        while(!stack.isEmpty()){
            System.out.print(stack.peek());
            stack.pop();
        }

        read.close();


        
    }

}