class Sum{
    int a,b;
    void values(int a , int b){
        this.a = a;
        this.b = b;
    }
    void add(){
        System.out.println("Sum: "+(a+b));
    }
}
class Main{
    public static void main(String args[]){
        Sum s = new Sum();
        s.values(20,20);
        s.add();
    }
}