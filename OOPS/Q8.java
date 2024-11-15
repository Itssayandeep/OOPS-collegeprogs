// calculate the mileage inner class in java

import java.util.Scanner;

class vehicle {
    private double fuelused;
    private double distance;

    public void enterDetails(double fuel, double dist) {
        this.fuelused = fuel;
        this.distance = dist;
    }

    class mileageCalculator {
        public double calculateMileage() {
            return distance / fuelused;
        }
    }

    public void showMileage() {
        mileageCalculator m = new mileageCalculator(); // object create
        double mileage = m.calculateMileage();
        System.out.println("mileage" + mileage);
    }

}

public class Q8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        vehicle v = new vehicle();
        System.out.print("enter the distance travelled");
        double dist = sc.nextDouble();
        System.out.print("enter the fuel consumed");
        double fuel = sc.nextDouble();
        v.enterDetails(dist, fuel);
        v.showMileage();
        sc.close();
    }
}
