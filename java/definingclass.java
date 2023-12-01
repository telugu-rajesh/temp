class Prog{
    String name;
    int roll;
    double marks;
    void details(String name, int roll , double marks ){
        this.name=name;
        this.roll=roll;
        this.marks=marks;
    }
    void display(){
        System.out.println("Student details:");
        System.out.println("Name : "+name);
        System.out.println("Roll : "+roll);
        System.out.println("Marks : "+marks);
    }
}
 class Main{
     public static void main (String args[]){
         Prog p = new Prog();
         p.details("Nani",15,9.7);
         p.display();
     }
 }