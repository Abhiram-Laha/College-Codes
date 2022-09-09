import java.util.Scanner;

class Bubble{

    public static void main(String[] args) {

        System.out.println("Code Runnig.........");

        Scanner sc=new Scanner(System.in);

        System.out.println("Enter Size of Array : ");
        int n=sc.nextInt();

        //array Declartion
        int[] arr=new int[n];

        System.out.println("\nEnter Values : ");

        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }

        //array display
        System.out.println("\nUnsorted Array : ");
        for(int i=0; i<n; i++){
            System.out.print(arr[i]+" ");
        }

        //Bubble Sorting

        int t;

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i; j++){
                if(arr[j]>arr[j+1]){
                    t=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=t;
                }
            }
        }


        //array display
        System.out.println("\nSorted Array : ");
        for(int i=0; i<n; i++){
            System.out.print(arr[i]+" ");
        }

        sc.close();


    }
}