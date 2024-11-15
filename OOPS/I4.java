class Account{
    protected int acc_no;
    protected int bal;
    public Account(int acc_no,int bal){
        this.acc_no=acc_no;
        this.bal=bal;
    }
    public void display(){
        System.out.println("account no" +acc_no);
        System.out.println("balance"+bal);
    }
}
class person extends Account{
    private String name;
    private int aadhar_no;
    public person(int acc_no,int bal,String name,int aadhar_no){
        super(acc_no, bal);
        this.name=name;
        this.aadhar_no=aadhar_no;   
    }
    @Override
    public void display(){
        super.display();
        System.out.println("name"+name);
        System.out.println("aadhar_no"+aadhar_no);
    }
}
public class I4 {
    public static void main(String[] args) {
        person[] person=new person[5];  //array of objects
        person[0]=new person(0, 0, null, 0);
        person[1]=new person(0, 0, null, 0);
        person[2]=new person(0, 0, null, 0);
        person[3]=new person(0, 0, null, 0);
        person[4]=new person(0, 0, null, 0);

        for(person persons : person){
            persons.display();
        }
    }
}
