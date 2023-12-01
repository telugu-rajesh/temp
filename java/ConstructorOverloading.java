class Test{
    int x,y;
    void Test(){
        System.out.println("No parameters in this constructor");
    }
    void Test(int a){
        x=a;
        System.out.println("Single parameter : "+a);
    }
     void Test(int a , int b)
    {
        x = a;
        y = b;
        System.out.println("Two parameters in this constructor a : "+x+" b : "+y);
    }
}
class Main{
    public static void main(String args[]){
        Test t = new Test();
        t.Test(10,30);
        t.Test();
        t.Test(10);
    }
}