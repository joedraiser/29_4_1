#include <iostream>

class Animal
{
public:
    virtual std::string voice()=0;
    virtual std::string voiceDuet()=0;
};

class Dog : public Animal
{
public:
    virtual std::string voice()
    {
        return "Bark";
    }

    virtual std::string voiceDuet()
    {
        return "Woof-Woof";
    }
};

class Cat : public Animal
{
public:
    std::string voice()
    {
        return "Meow";
    }

    virtual std::string voiceDuet()
    {
        return "Purr Purr";
    }
};

void meeting(Animal* a, Animal* b)
{
    if(a->voice()==b->voice())
    {
        std::cout << a->voiceDuet();
    }
    else
        std::cout << a->voice() << " " << b->voice();
}

int main()
{
    //Dog* a=new Dog;
    Cat* a=new Cat;
    //Dog* b=new Dog;
    Cat* b=new Cat;

    meeting(a,b);
    return 0;
}
