#include "orderSystem.h"
#include "user.cpp"

OrderSystem::OrderSystem()
{
    number_of_users = 0;
}

//main menu page
void OrderSystem::mainMenu()
{
    //navigating to other menus
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"      Welcome To The Main Menu!      "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"      What May I Help You WIth?      "<<std::endl<<std::endl;
    std::cout<<"A) Admin                       "<<std::endl<<std::endl;
    std::cout<<"B) Customer                    "<<std::endl<<std::endl;
    std::cout<<"C) Exit                        "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;

    //input to decide task/menu
    char input;
    std::cout<<"Please Enter A Choice: ";
    std::cin>>input;
    std::cout<<std::endl;

    switch (input)
    {
    case 'A':
        adminMenu();
        break;
    case 'B': 
        customerMenu();
        break;
    case 'C':
        exit();
        break;
    
    default:
        std::cout<<" Unaccepted Input, Please Try Again! "<<std::endl<<std::endl;
        mainMenu();
    }
}

void OrderSystem::adminMenu()
{
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"          Sign In To Admin...        "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"Username: ";
    std::string username;
    std::cin>>username;
    std::cout<<std::endl;
    std::cout<<"Password: ";
    std::string password;
    std::cin>>password;
    std::cout<<std::endl;
    User newUser(password,username,"admin");
    if(newUser.getUsernames().find(username)!=newUser.getUsernames().end()){

        adminMenu();
    }
    newUser.adminLogin(username,password);
}

void OrderSystem::customerMenu()
{
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"         Sign In As Costumer...      "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"Username: ";
    std::string username;
    std::cin>>username;
    std::cout<<std::endl;
    std::cout<<"Password: ";
    std::string password;
    std::cin>>password;
    std::cout<<std::endl;
}

void OrderSystem::exit()
{
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"         Thank You Come Again!       "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
}

void OrderSystem::login()
{
}

int OrderSystem::getNumberOfUsers()
{
    return number_of_users;
}

