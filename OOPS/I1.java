class shape{
    protected double side;
    public shape(double side) //constructor
    {
        this.side=side;
    }
}
class square extends shape{
    public square(double side) //constructor
    {
        super(side);
    }
    public double calculateArea(){
        return side*side;
    }
}
class rectangle extends shape{
    private double width;
    public rectangle(double side,double width) //constructor
    {
        super(side);
        this.width=width;
    }
    public double calculateArea(){
        return side*width;
    }
}
public class I1 {
    public static void main(String[] args) {
        square sq=new square(4.0);
        System.out.println(sq.calculateArea());
        rectangle rec=new rectangle(4.0,5.0);
        System.out.println(rec.calculateArea());

    }
}
