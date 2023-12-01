class Animal{
    void animal(){
        System.out.println("Animal class");
    }
}
class Dog extends Animal{
    void dog(){
        System.out.println("Dog class");
    }
}
class Cat extends Animal{
    void cat(){
        System.out.println("Cat class");
    }
}
class Main{
    public static void main(String args[]){
        Dog d = new Dog();
        d.dog();
        d.animal();
       // d.cat();
       Cat c = new Cat();
       c.cat();
       c.animal();
       //c.dog();
    }
}
