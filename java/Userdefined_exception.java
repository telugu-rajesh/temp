class MyException extends Exception{
    MyException(String message){
        super(message);
    }
}
class Main{
    public static void main(String args[] ){
        try {
            System.out.println("User Defined Exception");
            throw new MyException("This is my exception");
        }
        catch (MyException e){
            System.out.println("Exception Caught  : "+e);
        }
    }
}
