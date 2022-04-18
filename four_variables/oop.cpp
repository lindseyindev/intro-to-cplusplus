#include <iostream>
using std::string;

// abstraction, used as a contract
class AbstractEmployee {
//if you make pure virtual function this becomes obligatory 
    virtual void AskForPromotion() = 0;



};


// class is a blueprint for whenever youw ant to create an employee this is a model it will say the employee needs a name, company and age and then you create instances of the class
class Employee:AbstractEmployee
{
private:
    // hidden within the class this is part of encapsulation, keeping data and data manipulator func grouped together, you can no longer access these outside the class
    string Name;
    string Company;
    int Age;

public:
    // any one can invoke since public
    // getters and setters for encapsulation

    // sets value of data to value received in setter
    void setName(string name)
    {
        Name = name;
    }

    // returns value of encapsulated Name
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        //only if 18 >= then can you assign
        if(age>=18)
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    // a function aka class method
    void IntroduceYourself()
    {
        std::cout << "Hellow my name is " << Name << std::endl;
        std::cout << "I work at " << Company << std::endl;
        std::cout << "My age is  " << Age << std::endl;
    }
    //must call abstraction here since virtual & obligatory
    //this class must provide the implementation
    
    void AskForPromotion(){
        if(Age > 30)
        std::cout << Name << " got promoted!" << std::endl;
        else 
            std::cout << Name << " sorry no promotion for you"<< std::endl;
    }

    // constructor below -- must have same name as class and needs to be within public section of class if it's supposed to be public
    // when you create a custom constructor, thereis a default constructor that is lost, so you must ensure params are passed
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company,
        Age = age;
    }
};

// classes are private by default, access modifier = private
//-private things are hidden, not accessible outside the class
//-public is available outside the class
//-protected modifier is somewhere between priv and pub

// int main()
// {

//     int number;
//     Employee employee1 = Employee("Lindsey", "Youtube", 4); // creates an object called employee1
//     // to set variables of the object
//     // before constructor
//     // employee1.Name = "Lindsey";
//     // employee1.Age = 4;
//     // employee1.Company = "Youtube";
//     employee1.IntroduceYourself();
//     Employee employee2 = Employee("John", "Apple", 12);
//     employee2.IntroduceYourself();

//     employee1.setAge(18);
//     std::cout << employee1.getName() << " is: " << employee1.getAge() << std::endl;
// }

int main(){

    Employee employee1 = Employee("Lindsey", "Youtube", 4);
    Employee employee2 = Employee("John", "Apple", 42);

    employee1.AskForPromotion();
    employee2.AskForPromotion();




}