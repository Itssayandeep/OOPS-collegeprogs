class vehicle{
    protected int license_number;
    protected int speed;
    protected String color;
    protected String owner_name;
    public vehicle(int license_number,int speed,String color,String owner_name){
        this.license_number=license_number;
        this.speed=speed;
        this.color=color;
        this.owner_name=owner_name;
    }
    public void showdata(){
        System.out.println("License_Number of vehicle:"+license_number);
        System.out.println("Speed of vehicle:"+speed);
        System.out.println("Color of vehicle :"+color);
        System.out.println("Name of the owner"+owner_name);
    }
}
class bus extends vehicle{
    private int route_no;

    public bus(int license_number,int speed,String color,String owner_name,int route_no){
        super(license_number,speed,color,owner_name);
        this.route_no=route_no;
    }
    @Override
    public void showdata(){
        super.showdata();
        System.out.println("Route no of the bus "+route_no);
    }
    
}
class car extends vehicle{
    private String manufacturer_name;

    public car(int license_number,int speed,String color,String owner_name,String manufacturer_name){
        super(license_number,speed,color,owner_name);
        this.manufacturer_name=manufacturer_name;
    }
    @Override
    public void showdata(){
        super.showdata();
        System.out.println("Manufacturer of the car "+manufacturer_name);
    }
    
}
public class I2 {
    public static void main(String[] args) {
        bus Bus=new bus(123, 89, "red", "sayan", 45);
        car Car=new car(456, 69, "blue", "deep", "rick");
        Bus.showdata();
        Car.showdata();
    }
}
