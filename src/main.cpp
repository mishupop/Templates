#include <iostream>
#include <string>
// /*
// void swap(int& a, int& b)//fara referinte nu mere ca se sterge de pe stack
// {                        // mergea si cu pointeri in argumente si a si b dereferentiati in corpul fct
//     int temp =a;         // o ref ocupa memorie cam cat un int - e val hexadecimala
//     a=b;
//     b=temp;
// }

// void swap (char& a, char& b)
// {
//      char temp =a;         // o ref ocupa memorie cam cat un int - e val hexadecimala
//     a=b;
//     b=temp;
// }
// */

//template <class T>//pt folosit cu atribute de clasa

// la for each loop daca folosesti & e mai eficient decat fara- fara face copii dupa datele respective

template<typename T>//T poate fi orice litera
void swap (T &a,T &b)
{
T temp = a;
a=b;
b=temp;
}
// creeati o fct template ce sa returneze cel mai mare elem intre 2 param

template <typename Y>
void largest (Y a, Y b)
{
if (a>b)
{

std::cout<<a<<std::endl;
}
else
std::cout<<b<<std::endl;

}


int main(int argc, char const *argv[])
{

int c=10;
int d=99;

char e='c';
char f='z';


std::string g="test";
std::string h="bla";

std::cout<<"inainte de swap\n";
std::cout<<g<<std::endl;
std::cout<<h<<std::endl;
std::cout<<c<<std::endl;
std::cout<<d<<std::endl;

std::cout<<e<<std::endl;
std::cout<<f<<std::endl;

swap(e,f);
swap(c,d);
swap(g,h);


std::cout<<"dupa de swap\n";
std::cout<<g<<std::endl;
std::cout<<h<<std::endl;
std::cout<<c<<std::endl;
std::cout<<d<<std::endl;

std::cout<<e<<std::endl;
std::cout<<f<<std::endl;

int number1;
int number2;

std::cout<<"insert number:";

std::cin>>number1>>number2;
largest(number1,number2);

char character1;
char character2;

std::cout<<"insert char:";
std::cin>> character1>>character2;
largest(character1,character2);

double d_number1;
double d_number2;

std::cout<<"insert double:";
std::cin>>d_number1>>d_number2;
largest(d_number1,d_number2);

std::string str1;
std::string str2;

std::cout<<"insert string:";
std::cin>>str1>>str2;
largest(str1,str2);

    return 0;
}
