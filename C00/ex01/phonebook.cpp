/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 16:36:51 by user42            #+#    #+#             */
/*   Updated: 2021/01/03 10:34:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	welcome(void)
{
	std::cout <<std::endl <<"WELCOME TO THE LAME PHONEBOOK..." <<std::endl;
	std::cout <<"... where you can store, search and print up to 8 contacts!" <<std::endl;
	std::cout <<"Impressive no?!"<<std::endl<<std::endl<<"Available commands:"<<std::endl;
	std::cout <<" ______________________________________________ " <<std::endl;
	std::cout <<"|                                              |" <<std::endl;
	std::cout <<"|ADD___: adds a new contact                    |" <<std::endl;
	std::cout <<"|SEARCH: prints the contacts and allows you to |" <<std::endl;
	std::cout <<"|        get more info about a specific one    |" <<std::endl;
	std::cout <<"|EXIT__: exits this completely lame phonebook  |" <<std::endl;
	std::cout <<"|______________________________________________|" <<std::endl;
	std::cout << std::endl << "Enjoy!" <<std::endl;
}

void	search(Contact entries[8], int count)
{
	if (!count)
		std::cout<<"No contact has been added yet"<<std::endl;
	else
	{
		int index (1);
		std::cout <<"Provide the entry index of the contact info you wish to get or press \"q\" to quit"<<std::endl;
		std::cout <<std::endl<<"Available entries:" << std::endl; 
		std::cout <<" ___________________________________________"<<std::endl;
		std::cout <<"|  Index    First name    Name     Nickname |"<<std::endl;
		std::cout <<"|          |          |          |          |"<<std::endl;
		while (index <= count && index <= 8)
		{
			entries[index - 1].print_entry_id(index);
			index++;
		}
		std::cout <<"|__________|__________|__________|__________|"<<std::endl <<std::endl<<"Index of the entry you wish to have the contact info of ?"<<std::endl<<">>";
		while (1)
		{
			std::string	buf;
			std::getline(std::cin,buf);
			if (buf.size() == 1 && buf[0] == 'q')
				break ;
			else if (buf.size() == 1 && buf[0] > '0' && buf[0] <= ('0' + count))
			{
				entries[buf[0] - '0' - 1].print_entry_contact_info();
				break ;
			}
			else if (buf.size())
				std::cout <<"Error"<<std::endl<< "Provide the entry index of the contact info you wish to get or press \"q\" to quit"<<std::endl<<">>";
		}
	}
	std::cout<<'>';
	return ;
}

int		main(void)
{
	Contact		entries[8];
	int			count(0);
	std::string	buf;
	std::string add_command("ADD");
	std::string search_command("SEARCH");
	std::string exit_command("EXIT");

	welcome();
	std::cout<<">";
	while(1)
	{
		std::getline(std::cin,buf);
		if (!(add_command.compare(buf)))
		{
			if (count >= 8)
				std::cout<<"We said 'no more than 8 contacts' dude!"<<std::endl;
			else
				entries[count].add();
			count++;
		}
		else if (!(search_command.compare(buf)))
			search(entries, count);
		else if (!(exit_command.compare(buf)))
			break ;
		else
			std::cout<<">";
	}
	std::cout<<"See ya! :)"<<std::endl;
	return (0);
}