class Grandfather{
    String grandfather = "rohan";
    void grandfather(){
        System.out.println("Grand father : "+grandfather);
    }
}

class Parent extends Grandfather{
    String father = "rohith";
    void parent(){
        System.out.println("Father Name: "+father);
    }
}
class Child extends Parent{
    String son = "vanu";
    void child(){
        System.out.println("Son name : "+son);
    }
}
class Main{
    public static void main(String args[]){
        Child c = new Child();
        c.grandfather();
        c.parent();
        c.child();
    }
}
