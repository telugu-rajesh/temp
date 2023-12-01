class Test{
   
    void test(int a, int b){
        a=a/2;
        b=b/2;
        
    }
}
class Main{
    public static void main(String args[]){
        Test t = new Test();
        int a=10;
        int b=20;
        System.out.println("Before Meth a: "+a+" b : "+b);
        t.test(a,b);
        System.out.println("After Meth a : "+a+" b : "+b);
    }
}