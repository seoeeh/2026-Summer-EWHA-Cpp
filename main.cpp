#include <iostream>
int main()
{
    int i{1};
    const int end{10};
    do 
    {
        std::cout << i << ' '; ++i;
    }while (i<=end);
    std::cout << std::endl;

    i=1;
    while (i<=end)
    {
        std::cout <<i<< ' '; ++i;
    }

    // std::cout << "Enter 1, 2, or 3";
    // int x{};
    // std::cin >> x;
    // switch(x)
    // {
    //     case 1: std::cout << "one\n"; break;
    //     case 2: std::cout << "two\n"; break;
    //     case 3: std::cout << "three\n"; break;
    //     default: std::cout << "unknown\n";
    // }

    // std::cout << "Enter two integers: ";
    // int x{}, y{}, z{};
    //  std::cin >> x >> y;


    // // if (x > y) z = x;
    // z = x>y ? x:y;
    // std::cout << z << std::endl;

     
    //  if (x>0) std::cout << "positive\n";
    //  else if (x<0) std::cout << "negative\n";
    //  else 
    //     std::cout << "zero\n";

    // if (x==0) //= ==
    //     std::cout <<"zero\n";
    // else
    //     std::cout << "non-zero\n";



    //전위,후위증가연산자//
    //int n{2};
    //std::cout << 2* n++ <<std::endl;
    //std::cout << n <<std::endl;

    //int m{2};
    //std::cout << 2 * ++m <<std::endl;
    //std::cout << m <<std::endl;


    //const int numOfStudents{30};
    //numOfStudents = 22;
    //std::cout << numOfStudents << std::endl;
    //std::cout << sizeof(numOfStudents) << std::endl;
    //std::cout << typeid(numOfStudents).name() << std::endl;
    //std::cout << typeid(static_cast<double>(numOfStudents)).name << std::endl;

    return 0;
}
