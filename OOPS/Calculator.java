// Calculator program in java with exception
// import java.util.Scanner;

// public class Calculator {

//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         System.out.println("Simple Calculator");
//         System.out.println("Choose operation: addition, subtraction, multiplication, division");

//         try {
//             // Read the operation type
//             System.out.print("Enter operation (addition, subtraction, multiplication, division): ");
//             String operation = scanner.nextLine().toLowerCase();  // Convert input to lowercase for consistency

//             // Read two numbers
//             System.out.print("Enter first number: ");
//             double num1 = scanner.nextDouble();
//             System.out.print("Enter second number: ");
//             double num2 = scanner.nextDouble();

//             double result = 0;

//             // Perform the operation based on user input
//             switch (operation) {
//                 case "addition":
//                     result = num1 + num2;
//                     break;
//                 case "subtraction":
//                     result = num1 - num2;
//                     break;
//                 case "multiplication":
//                     result = num1 * num2;
//                     break;
//                 case "division":
//                     // Handle division by zero
//                     if (num2 == 0) {
//                         throw new ArithmeticException("Error: Cannot divide by zero.");
//                     }
//                     result = num1 / num2;
//                     break;
//                 default:
//                     throw new IllegalArgumentException("Invalid operation! Please use addition, subtraction, multiplication, or division.");
//             }

//             // Display the result
//             System.out.println("Result: " + result);

//         } catch (ArithmeticException e) {
//             System.out.println(e.getMessage()); // Handle division by zero
//         } catch (IllegalArgumentException e) {
//             System.out.println(e.getMessage()); // Handle invalid operation input
//         } catch (Exception e) {
//             System.out.println("Invalid input! Please enter valid numbers.");
//         } finally {
//             // Close the scanner resource
//             scanner.close();
//         }
//     }
// }

import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Simple calculator");
        
        try{
            System.out.println("enter operation -> addition subtraction multiplication division");
            String operation = sc.nextLine().toLowerCase();
            System.out.println("Enter the first number ");
            double num1=  sc.nextDouble();
            System.out.println("Enter the second number ");
            double num2=  sc.nextDouble();

            double result=0;

            switch (operation) {
                case "addition":
                    result=num1+num2;
                    break;
                case "subtraction":
                    result=num1-num2;
                    break;
                case "multiplication":
                    result=num1*num2;
                    break;
                case "division":
                if(num2==0){
                    throw new ArithmeticException("num2 cannnot be zero");

                }
                    result=num1/num2;
                    break;
                    
                default:
                    throw new IllegalArgumentException("Invalid operation! Please use addition, subtraction, multiplication, or division.");
                    
        }
        System.out.println("Result"+result);
        
    }catch(Exception e){
        System.out.println(e.getMessage());
    }finally{
        sc.close();
    }
    }
}