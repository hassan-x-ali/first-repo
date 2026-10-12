import java.util.*;

public class App {
    public static void main(String[] args) {

        // output
        System.out.println("Hello, World!");
        System.out.println("*\n**\n***\n****\n*****");
        String name = "Tony Stark";
        int age = 48;
        double height = 1.85;
        float weight = 75.5f;
        char gender = 'M';
        boolean isAlive = true;
        int a = 10;
        int b = 5;
        int ans1 = a * b / a - b;
        int ans2 = (a * b) / (a - b);
        System.out.println(ans1);
        System.out.println(ans2);

        // input
        Scanner sc = new Scanner(System.in);
        String inputName = sc.nextLine();
        System.out.println("Hello, " + inputName + "!");
        //nextInt() method is used to read integer input from the user
        //nextDouble() method is used to read double input from the user
        //nextFloat() method is used to read float input from the user
        //nextBoolean() method is used to read boolean input from the user
        //next() method is used to read string input from the user
        //nextLine() method is used to read string input from the user, including spaces
        //nextByte() method is used to read byte input from the user
        //nextShort() method is used to read short input from the user
        //nextLong() method is used to read long input from the user
        

        {
            int i = sc.nextInt();
            int j = sc.nextInt();
            int sum = i + j;
            System.out.println(sum);
        }
    }
}