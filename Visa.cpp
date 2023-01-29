#include <iostream>

class Passport
{
public:

    // Contstructor
    Passport()
    {

    }

    // Input Passport Data 
    void Input()
    {
        // Using ASCII Create "Random" Identifier to Passport 
        for (int i = 0; i < 16; i++)
        {
            IdCode_[i] = 47 + rand() % 37;
        }

        std::cout << "Enter Your Name" << std::endl;
        std::string UserName;
        std::cin >> UserName;
        Name_ = UserName;
        std::cout << "Enter Your Surname" << std::endl;
        std::string UserSurname;
        std::cin >> UserSurname;
        Surname_ = UserSurname;
        std::cout << "Enter Your Patronymic" << std::endl;
        std::string UserPatronymic;
        std::cin >> UserPatronymic;
        Patronymic_ = UserPatronymic;
        std::cout << "Enter Your Date of birth" << std::endl;
        std::string UserDateofBirth;
        std::cin >> UserDateofBirth;
        for (size_t i = 0; i < UserDateofBirth.size(); i++)
        {
            DateofBirth_[i] = UserDateofBirth[i];
        }
    }

    // Display Passport Data
    void Output()
    {
        for (size_t i = 0; i < Name_.size(); i++)
        {
            std::cout << Name_[i];
        }
        std::cout << std::endl;
        for (size_t i = 0; i < Surname_.size(); i++)
        {
            std::cout << Surname_[i];
        }
        std::cout << std::endl;
        for (size_t i = 0; i < Patronymic_.size(); i++)
        {
            std::cout << Patronymic_[i];
        }
        std::cout << std::endl;
        for (size_t i = 0; i < 10; i++)
        {
            std::cout << DateofBirth_[i];
        }
        std::cout << std::endl;
        for (size_t i = 0; i < 16; i++)
        {
            std::cout << IdCode_[i];
        }
    }

    // Destructor
    ~Passport()
    {

    }

private:
    // Passport Data Fields
    std::string Name_;
    std::string Surname_;
    std::string Patronymic_;
    std::string DateofBirth_[10];
    std::string IdCode_[16];
};

class Visa
{
private:
    std::string CountryName_;
    std::string DurationTime_;
public:
    // Contstructor
    Visa()
    {

    }

    // Set Country Name to class Visa 
    void SetCountryName()
    {
    std::cout << "Enter Country Name" << std::endl;
    std::string UserCountryName;
    std::cin >> UserCountryName;
    CountryName_ = UserCountryName;
    }

    // Set Duration Time to class Visa 
    void SetDurationTime()
    {
    std::cout << "Enter Duration Time" << std::endl;
    std::string UserDurationTime;
    std::cin >> UserDurationTime;
    DurationTime_ = UserDurationTime;
    }

    // Display Visa Data
    void Output()
    {
    for (size_t i = 0; i < CountryName_.size(); i++)
    {
        std::cout << CountryName_ << std::endl;
    }
    for (size_t i = 0; i < DurationTime_.size(); i++)
    {
        std::cout << DurationTime_ << std::endl;
    }
    }

    // Input Visa Data
    void Input()
    {
    Visa::SetCountryName();
    Visa::SetDurationTime();
    }

    // Destructor
    ~Visa()
    {
    
    }
};

class ForeignPassport : protected Passport, Visa
{
public:

    // Constructor 
    ForeignPassport()
    {
        Passport::Input();
        Visa::Input();
    };

    // Input Inheritance Passport & Visa Data
    void Output()
    {
        Passport::Output();
        Visa::Output();
    }

    // Destructor
    ~ForeignPassport()
    {
    
    };
};

int main()
{
    ForeignPassport Passport;
    Passport.Output();
}
