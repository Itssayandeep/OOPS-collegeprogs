// coin toss in java
import java.util.Random;
import java.util.Scanner;
class coin{
    private String call;
    private String outcome;
    public void makecall(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Make your call heads or tails");
        call= sc.nextLine().trim().toLowerCase();
    }
    public void tossCoin(){
        Random random = new Random();
        outcome= random.nextBoolean() ? "heads": "tails";

    }
    public String analyzeOutcome(){
        if(call.equals(outcome)){
            return "you guessed it correctly";
        
        }
        else{
            return "you guessed wrong!";

        }
    }
    public void declareOutcome(){
        System.out.println("your call"+call);
        System.out.println("outcome"+outcome);
        System.out.println(analyzeOutcome());
    }
}
public class Q2{
    public static void main(String[] args) {
        coin coin = new coin();
        coin.makecall();
        coin.tossCoin();
        coin.declareOutcome();
    }
}