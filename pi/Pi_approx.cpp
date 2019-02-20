#include<iostream>
#include <cstdlib>
#include<bits/stdc++.h> 
#include <cmath> 
bool c_prime(int a, int b) { 
      
    if ( std::__gcd(a, b) == 1) 
        return true;  
    else
        return false;         
} 
int main()
{
    int up_lt = 2;
std::cout << "Enter the Upper Limit of the Random Number Pairs\n";
while(1)
{

std::cin >> up_lt;
if(up_lt < 10)
{
std::cout << "Too small : Enter a bigger Number\n";
}
else
    break;
}
int lw_lt = 1;
std::cout << "Enter the Lower Limit of the Random Number Pairs\n";
while(1)
{
std::cin >> lw_lt;
if(lw_lt < 5)
{

    std::cout << "Too small : Enter a bigger Number\n";
}
else
    break;
    
}
double trials = 100;
std::cout << "Enter the number to Trials ( > 100 )\n";
while(1)
{
std::cin>>trials;
if(trials  < 100)
    std::cout << " Too small : Enter a bigger Number\n";
else
    break;
    
}
int r1=0;
int r2=0;
double c_prime_count = 0;
for(int i = 1 ; i <= trials ; i++)
{
    r1 = rand()%(up_lt- lw_lt + 1) + lw_lt;
    r2 = rand()%(up_lt- lw_lt + 1) + lw_lt;
    if(c_prime(r1,r2))
    {
        c_prime_count++;
    }
}
double p_result = (( (6 * trials) / c_prime_count));
double pi_result = sqrt(p_result);

//std::cout << c_prime_count << " " << p_result << "\n";
std::cout << "Pi is estimated to be "<<pi_result << "\n";
std::cout << "Error : ";
return 0;    
}
