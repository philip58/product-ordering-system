#include "orderSystem.h"

OrderSystem::OrderSystem()
{
}

//main menu page
void OrderSystem::mainMenu()
{
    //navigating to other menus
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"      Welcome To The Main Menu!      "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"      What May I Help You WIth?      "<<std::endl<<std::endl;
    std::cout<<"      A) Admin                       "<<std::endl<<std::endl;
    std::cout<<"      B) Customer                    "<<std::endl<<std::endl;
    std::cout<<"      C) Exit                        "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;

    //input to decide task/menu
    char input;
    std::cout<<"      Please Enter A Choice...       "<<std::endl<<std::endl;
    std::cin>>input;

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
    std::cout<<"            Hello Admin...           "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
}

void OrderSystem::customerMenu()
{
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    std::cout<<"           Hello Customer...         "<<std::endl<<std::endl;
    std::cout<<"-------------------------------------"<<std::endl<<std::endl;
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
