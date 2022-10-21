import java.util.*;

public class pre_order{

    static class node{
        int data;
        node left;
        node right;

        node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }

    }


    static class BinaryTree{
        static int idx=0;
        public static node buildTree(int nodes[]){
            idx++;
            if(nodes[idx]==-1){
                return null;
            }

            node newNode=new node(nodes[idx]);
            newNode.left=buildTree(nodes);
            newNode.right=buildTree(nodes);

            return newNode;

        }
    }

    public static void main(String[] args) {
        int nodes[]={1,2,4-1,-1,5,-1,-1,3,-1,6,-1,-1};   // pre order

        BinaryTree tree=new BinaryTree();
        node root=tree.buildTree(nodes);
        System.out.println(root);
        
    }
}