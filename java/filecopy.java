import java.io.*;

class FileReadAndWrite {
    public static void main(String args[]) {
        try {
            FileInputStream fis = new FileInputStream("nani.txt");
            FileOutputStream fos = new FileOutputStream("nani2.txt");
            int i = fis.read();
            while (i != -1) {
                fos.write(i);
                //System.out.println(i);
                i = fis.read();
            }
            fis.close(); // Close the input stream
            fos.close(); // Close the output stream
            System.out.println("File copy successful");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
