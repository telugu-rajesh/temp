class Test{
    int x,y;
    void Test1(){
        System.out.println("No parameters in this Method");
    }
    void Test1(int a){
        x=a;
        System.out.println("Single parameter : "+a);
    }
     void Test1(int a , int b)
    {
        x = a;
        y = b;
        System.out.println("Two parameters in this Method a : "+x+" b : "+y);
    }
}
class Main{
    public static void main(String args[]){
        Test t = new Test();
        t.Test1(10,30);
        t.Test1();
        t.Test1(10);
    }
}