class Test{
    int x,y;
    int c = 30;
     void Test(int a , int b)
    {
        x = a;
        y = b;
        System.out.println("a : "+x+" b : "+y+" C : "+c);
    }
}
class Main{
    public static void main(String args[]){
        Test t = new Test();
        t.Test(10,30);
    }
}