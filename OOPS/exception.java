import java.util.Scanner;
class TooHot extends Exception{
    public TooHot(String message){
        super(message);
    }
}
class TooCold extends Exception{
    public TooCold(String message){
        super(message);
    }
}
public class exception{
    public static void main(String [] args){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the temperature");
        int temp=sc.nextInt();
        try{
            if(temp>40){
                throw new TooHot("its too hot in nature");
            }
            else if(temp<20){
                throw new TooCold("its too cold in nature");
            }
            else{
                System.out.println("temp is normal");
            }
        }catch(Exception e){
            System.out.println(e);
        }
        sc.close();

    }
}