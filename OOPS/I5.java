import java.util.Scanner;
class vehicle{
    protected String name;
    protected double dist;
    protected double fuel;
    public vehicle(String name, double dist,double fuel){
        this.name=name;
        this.dist=dist;
        this.fuel=fuel;
    }
    public double mileage(){
        return dist/fuel;
    }
    public void showdata(){
        System.out.println("Name:"+name);
        System.out.println("Distance "+dist);
        System.out.println("fuel "+fuel);
        System.out.println("mileage"+mileage());

    }
}
class twowheeler extends vehicle{
    private double price;
    public twowheeler(String name, double dist,double fuel,double price){
        super(name, dist, fuel);
        this.price=price;

    }
    @Override
    public void showdata(){
        super.showdata();
        System.out.println("Price of twowheeler"+price);
    }
}
class fourwheeler extends vehicle{
    private double cost;
    public fourwheeler(String name, double dist,double fuel,double cost){
        super(name, dist, fuel);
        this.cost=cost;

    }
    @Override
    public void showdata(){
        super.showdata();
        System.out.println("cost of fourwheeler"+cost);
    }
}
public class I5 {
    public static void main(String[] args) {
        twowheeler t = new twowheeler("Honda",67.0,6.0,87000.0);
        fourwheeler f = new fourwheeler("creta",89.0,9.0,700000.0);
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your choice 1.Twowheeler 2.Fourwheeler");
        int choice = scanner.nextInt();
        if(choice==1){
            t.showdata();

        }
        else if(choice==2){
            f.showdata();

        }
        else{
            System.out.println("give the correct choice");
        }
        scanner.close();

    }
}
