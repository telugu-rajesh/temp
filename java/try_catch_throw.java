class FinallyDemo{
    void procA(){
        try{
            System.out.println("Inside A");
            throw new RuntimeException("Demo");
            
        }
        finally {
            System.out.println("Finally A");
        }
    }
    void procB(){
        try{
            System.out.println("Inside B");
            return;
        }
        finally{
            System.out.println("Finally B");
        }
    }
    void procC(){
        try{
            System.out.println("Inside c");
        }
        finally{
            System.out.println("Finally C");
        }
    }
}

class Main{
    public static void main(String args[]){
        FinallyDemo fd = new FinallyDemo();
        try {
            fd.procA();
        }
        catch(Exception e){
            System.out.println("Execption caught");
            
        }
    
    fd.procB();
    fd.procC();
    }
}
