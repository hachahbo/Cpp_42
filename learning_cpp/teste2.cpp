/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:52:09 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/24 22:41:50 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class employee
{
    private:
        string  name;
        int     age;
        double     salary;
    public:
        string getName()
        {
            if(name == "")
            {
                return ("undefined empoloyee");
            }
                return name;
        }
        int getAge()
        {
            return  age;
        }   
        double getsalary()
        {
            return  salary;
        }
        void    setName(string n)
        {
            name = n; 
        }
        void setAge(int a)
        {
            age = a;
        }
        void setSalary(double s)
        {
            salary = s;
        }
};

int main()
{
    employee e;

    e.setName("");
    e.setAge(21);
    e.setSalary(1242.65);
    
    cout <<  "name : " << e.getName() << "\n";
    cout <<  "age : " << e.getAge() << "\n";
    cout <<  "salary : " << e.getsalary() << "$" << "\n";
    
}