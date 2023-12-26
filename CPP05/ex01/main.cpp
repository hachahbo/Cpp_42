/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:41:37 by hamza             #+#    #+#             */
/*   Updated: 2023/11/22 12:27:45 by hamza            ###   ########.fr       */
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
#include "Form.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("hamza",2);
        Form obj("F-B", 5);
        
            bureaucrat.signForm(obj);
        std::cout << obj << std::endl;
        
    } catch (Form::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
}