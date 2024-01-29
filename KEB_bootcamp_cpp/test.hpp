#ifndef TEST_H
#define TEST_H

class Employee{
    private:
        char name;
        int age;
        int serviceYear;
        int salary;

    public:
        Employee();
        Employee(char n, int a, int serv, int sal);
        Employee(const Employee& em);
        ~Employee();
        void print() const;

        void setName(char n);
        void setAge(int a);
        void setServiceYear(int serv);
        void setSalary(int sal);

        char getName();
        int getAge();
        int getServiceYear();
        int getSalary();

};

#endif