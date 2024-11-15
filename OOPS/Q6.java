// Department has a variable deptname and two abstract methods enterdetails() and showdetails().Class Student and staff implement a interface 
// Interface department has a variable deptName and two abstract methods enterdetails() and showDetails(). Classes Student and staff implement the interface 
import java.util.Scanner;
interface department{
    String deptName="";  //variable

    void enterDetails();   //abstract methods
    void showDetails();
}
class student implements department{
    private String studentName;
    private String studentId;
    private String deptName;
    public void enterDetails(){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter student name ");
            studentName=sc.nextLine();
            System.out.print("Enter student Id ");
            studentId=sc.nextLine();
            System.out.print("Enter dept name");
            deptName=sc.nextLine();
        }
    }
    public void showDetails(){
        System.out.println("Name of the student "+studentName);
        System.out.println("Student Id"+studentId);
        System.out.println("Department of the student "+deptName);
        
    }

}
class staff implements department{
    private String staffName;
    private String staffId;
    private String deptName;
    public void enterDetails(){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter staff name ");
            staffName=sc.nextLine();
            System.out.print("Enter staff Id ");
            staffId=sc.nextLine();
            System.out.print("Enter dept name");
            deptName=sc.nextLine();
        }
    }
    public void showDetails(){
        System.out.println("Name of the student "+staffName);
        System.out.println("Student Id"+staffId);
        System.out.println("Department of the student "+deptName);
        
    }

}
public class Q6{
    public static void main(String[] args) {
        student student = new student();
        student.enterDetails();
        staff staff = new staff();
        staff.enterDetails();
        student.showDetails();
        staff.showDetails();
    }
}