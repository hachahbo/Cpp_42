/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:41:37 by hamza             #+#    #+#             */
/*   Updated: 2023/11/23 12:48:46 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// class printer
// {
//     std::string _name;
//     int paper;
//     public :
//     printer(std::string name, int paper)
//     {
//         this->_name = name;
//         this->paper = paper;
//     }
//     void print(std::string txtDoc)
//     {
//         int r = txtDoc.length() / 10;
//         if(r > paper)
//             throw 404;
//         std::cout << "printing ...." << txtDoc << std::endl;
//         paper -= r;
//     }
// };
// int main()
// {
    
//     // printer obj("book", 9);
//     // try
//     // {
//     //     obj.print("hello, m hamza a future software engineer");
//     //     obj.print("hello, m hamza a future software engineer");
//     //     obj.print("hello, m hamza a future software engineer");
//     //     obj.print("hello, m hamza a future software engineer");
//     // }
//     // catch(const char *exception)
//     // {
//     //     std::cout << "Exeption  : "<< exception << '\n';
//     // }
//     std::string w = "hamza";

//     try
//     {
//         // std::cout << w.at(6) << std::endl;
//     }
//     catch(std::out_of_range & e)
//     {
//         std::cout << "Exception happend : " << e.what() << std::endl;
//     }

// }
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPadronForm.hpp"

#include "Intern.hpp"

int main( void )
{
    {
        Intern someRandomIntern;
        AForm * rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        delete rrf;
    }
    try
    {  
        std::cout << std::endl << "------- ShrubberyCreationForm -----------" << std::endl;
        Bureaucrat bureaucrat("hamza", 5);
        // ShrubberyCreationForm form("ShrubberyCreationForm");
        // RobotomyRequestForm form1("RobotomyRequestForm");
        PresidentialPadronForm form2("PresidentialPadronForm");
        
        // bureaucrat.signForm(form);
        // bureaucrat.executeForm(form);
        // std::cout <<std::endl << "------- RobotomyRequestForm-----------" << std::endl;

        // bureaucrat.signForm(form1);
        // bureaucrat.executeForm(form1);
        // bureaucrat.executeForm(form1);
        // bureaucrat.executeForm(form1);
        // bureaucrat.executeForm(form1);
        std::cout <<std::endl << "------- PresidentialPadronForm-----------" << std::endl;
        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
        
}