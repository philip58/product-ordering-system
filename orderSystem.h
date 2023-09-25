#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

class OrderSystem 
{
    public:
        OrderSystem();
        void mainMenu();
        void adminMenu();
        void customerMenu();
        void exit();
        void login();
        int getNumberOfUsers();
    private:
        std::string product_name_;
        int product_number_;
        float product_price_;
        int number_of_users;
};

