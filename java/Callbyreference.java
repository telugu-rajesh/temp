class Test{
    int a , b;
    void Test(int x, int y){
        a=x;
        b=y;
        
    }
    void meth(Test o){
        o.a=a/2;
        o.b=b/2;
    }
}
class Main{
    public static void main(String args[]){
        Test t = new Test();
        t.Test(10,20);
        System.out.println("Before Meth a: "+t.a+" b : "+t.b);
        t.meth(t);
        System.out.println("After Meth a : "+t.a+" b : "+t.b);
    }
}