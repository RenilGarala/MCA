public class EmployeeDemo {
    public static void main(String[] args) {
        // Employee e1 = new Employee(101, "renil", 20000);
        // Employee e2 = new Employee(e1);
        // e2.display();
        System.out.println(Employee.company);
    }
}

class Employee{
    int eid;
    String ename;
    int salary;
    static String company = "infotech";

    Employee(){
        System.out.println("Default constructor is called");
    }
    Employee(int eid, String ename, int salary){
        this.eid = eid;
        this.ename = ename;
        this.salary = salary;
        System.out.println("Parameterize constructor");
    }
    Employee(Employee e1){
        this.eid = e1.eid;
        this.ename = e1.ename;
        this.salary = e1.salary;
    }
    void display(){
        System.out.println(ename);
        System.out.println(salary);
        System.out.println(eid);
    }
}