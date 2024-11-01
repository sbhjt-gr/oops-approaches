/* Create a class named “Student” having protected instance variables Roll_number, Student_Name and 
class variable College_Name having values "HITK". Use constructor to initialize data members. It contains 
method “showdata()” to display student's details. Inherit the Student class and create subclass named 
“Exam ” having private instance variable marks of three subjects . Use constructor to initialize data 
members .It contains the method “showresult()” which will display student information along with 
average mark of three subjects. Write a program in java to test the “Exam” class and to display all the 
details of Student. */

class Student {
    protected int Roll_no;  
    protected String Student_name;  
    protected String College_name = "HITK";  

    public Student(int roll_no, String student_name) {
        this.Roll_no = roll_no;
        this.Student_name = student_name;
    }

    public void showdata() {
        System.out.println("Roll Number: " + Roll_no);
        System.out.println("Student Name: " + Student_name);
        System.out.println("College Name: " + College_name);
    }
}

class Exam extends Student {
    private int DBMS;  
    private int OOPS;  
    private int AUTOMATA;  

    public Exam(int roll_no, String student_name, int marks1, int marks2, int marks3) {
        super(roll_no, student_name);  
        this.DBMS = marks1;  
        this.OOPS = marks2;  
        this.AUTOMATA = marks3;  
    }

    public void showresult() {
        System.out.println("DBMS Marks: " + DBMS);
        System.out.println("OOPS Marks: " + OOPS);
        System.out.println("AUTOMATA Marks: " + AUTOMATA);
    }
}

public class Main {
    public static void main(String args[]) {
        Exam e = new Exam(254, "Subhajit", 70, 80, 90);
        e.showdata();  
        e.showresult();  
    }
}
