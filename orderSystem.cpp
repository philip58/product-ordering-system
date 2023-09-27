#include "orderSystem.h"

OrderSystem::OrderSystem()
{
    User admin("adminUserP","adminPasswordP","admin");
    admin.pushUser(admin);
    number_of_users = 1;
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
    newUser.printVector();
    if(newUser.adminLogin(username,password)){
        adminAuthorizedPage();
        } else {
            adminMenu();
        }
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

void OrderSystem::adminAuthorizedPage()
{
    char input;
        std::cout<<"A) View An Item                "<<std::endl<<std::endl;
        std::cout<<"B) Add An Item                 "<<std::endl<<std::endl;
        std::cout<<"C) Edit An Item                "<<std::endl<<std::endl;
        std::cout<<"D) Delete An Item              "<<std::endl<<std::endl;
        std::cout<<"E) Return To Main Menu         "<<std::endl<<std::endl;
        std::cout<<"F) Exit                        "<<std::endl<<std::endl;
        std::cout<<"-------------------------------------"<<std::endl<<std::endl;
        std::cout<<"Please Enter A Choice: "<<std::endl;
        std::cin>>input;
        switch (input)
        {
        case 'E':
            mainMenu();
            break;
        case 'F':
            exit();
            break;
        
        default:
            std::cout<<" Unaccepted Input, Please Try Again! "<<std::endl<<std::endl;
            adminAuthorizedPage();
        }
}
