class Main{
    public static void main(String args[]){
        StringBuffer sb = new StringBuffer("Hi My name is Nani");
        System.out.println(sb);
        //Inserting
        sb.insert(18," Nalli");
        System.out.println(sb);
        //deleting
        sb.delete(13,18);
        System.out.println(sb);
        //replacing
        sb.replace(16,19,"ni");
        System.out.println(sb);
        //String equals go
        String s1 = "Nani";
        System.out.println("s1 : "+s1);
        StringBuffer s2 = new StringBuffer(s1);
        System.out.println("s2 : "+s2);
        //System.out.println(s2 == s1);
        System.out.println((s1).equals(s2));
        
        
        
    }
}