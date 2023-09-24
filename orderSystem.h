#pragma once

#include<iostream>
#include<string>

class OrderSystem 
{
    public:
        OrderSystem();
        void mainMenu();
        void adminMenu();
        void customerMenu();
        void exit();
        void login();
    private:
        std::string product_name_;
        int product_number_;
        float product_price_;

};