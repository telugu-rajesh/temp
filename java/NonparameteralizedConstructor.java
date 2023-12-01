class Test{
    int c = 30;
     void Test()
    {
        int a = 10;
        int b = 20;
        System.out.println("a : "+a+"b : "+b+" C : "+c);
    }
}
class Main{
    public static void main(String args[]){
        Test t = new Test();
        t.Test();
    }
}