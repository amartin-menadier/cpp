#include "MutantStack.hpp"

int main()
{
	std::cout << "    -- 42 MAIN --" << std::endl;
	std::cout << "    42 MAIN -- expected output (with list):" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(0);
	std::list<int>::iterator it0= mlist.begin();
	std::list<int>::iterator ite0 = mlist.end();
	++it0;
	--it0;
	while (it0!= ite0)
	{
		std::cout << *it0<< std::endl;
		++it0;
	}
	std::list<int> l(mlist);

	std::cout << "    42 MAIN -- our output:" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << "    -- EXTRA TEST --" << std::endl;
	MutantStack<std::string> BurgundyKing;
	BurgundyKing.push("J'apprecie les fruits au sirop");
	BurgundyKing.push("Pas changer assiette pour fromage");
	BurgundyKing.push("Arthur! C'est la guerre!");
	BurgundyKing.pop();
	BurgundyKing.push("Cuilleeeeeeeeere");
	BurgundyKing.push("La fleur en bouquet fane et jamais ne renait");
	BurgundyKing.pop();
	for (MutantStack<std::string>::iterator i = BurgundyKing.begin(); i != BurgundyKing.end(); i++)
	{
		std::cout << *i << std::endl;
	}
	return 0;
}