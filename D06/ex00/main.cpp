#include "iostream"
#include <errno.h>
#include <math.h>

void    display(double a, float b, int c, char d){
    std::cout << "char: ";
    if (errno != 0 || a < 32 || a > 126)
        std::cout << "Non displayable" << std::endl;
    else if (isnan(a))
        std::cout << "impossible" << std::endl;
    else
        std::cout << "'" << d << "'" << std::endl;


    std::cout << "int: ";
    if (errno != 0 || a < -2147483648 || a > 2147483647)
        std::cout << "Non displayable" << std::endl;
    else if (isnan(a))
        std::cout << "impossible" << std::endl;
    else
        std::cout << c << std::endl;


    std::cout << "float: ";
    if (errno != 0 || ((a < -std::numeric_limits<float>::max()
                        || a > std::numeric_limits<float>::max()) 
                    && (a != -std::numeric_limits<double>::infinity() 
                            && a != std::numeric_limits<double>::infinity())))
        std::cout << "Non displayable" << std::endl;
    else{
        std::cout << b;
        if (truncf(b) == b && a != -std::numeric_limits<float>::infinity() 
                            && a != std::numeric_limits<float>::infinity())
            std::cout << ".0"; 
        std::cout << 'f' <<  std::endl;
    }
    
    std::cout << "double: ";
    if (errno != 0)
        std::cout << "Non displayable" << std::endl;
    else{
        std::cout << a;
        if (trunc(a) == a && a != -std::numeric_limits<double>::infinity() 
                            && a != std::numeric_limits<double>::infinity())
            std::cout << ".0"; 
        std::cout  << std::endl;
    }
}

int find_type(std::string entry){
    int i = 0;
    if (!entry[0])
        return -1;
    if (entry[i] == '-' || entry[i] == '+'){
        i++;
    }
    if (isdigit(entry[i]) ||  entry[i] == '.'){
        while (entry[i] && entry[i] != '.' && isdigit(entry[i]) )
            i++;
        if (entry[i] != '.' && entry[i] != 'f')
            return 0;
        if (entry[i] == 'f')
            return 1;
        i++;    
        while (entry[i] && isdigit(entry[i]))
            i++;
        if (entry[i] == 'f')
            return 1;
        return 2;
    }
    if (!entry.compare("nan") || !entry.compare("inf") || !entry.compare("+inf") || !entry.compare("-inf"))
        return 2;
    if (!entry.compare("nanf") || !entry.compare("inff") || !entry.compare("+inff") || !entry.compare("-inff"))
        return 1;
    return 3;
}

void    from_double(const char *entry){
    double a = strtod(entry, NULL);

    int c = static_cast<int>(a);
    float b = static_cast<float>(a);
    char d = static_cast<char>(a);

    display(a,b,c,d);
}

void    from_int(const char *entry){
    int c = atoi(entry);

    double a = static_cast<double>(c);
    float b = static_cast<float>(c);
    char d = static_cast<char>(c);

    display(a,b,c,d);
}

void    from_char(const char *entry){
    double d = entry[0];

    double a = static_cast<double>(d);
    float b = static_cast<float>(d);
    int c = static_cast<int>(d);

    display(a,b,c,d);
}
void    from_float(const char *entry){
    float b = atof(entry);

    double a = static_cast<double>(b);
    int c = static_cast<int>(b);
    char d = static_cast<char>(b);

    display(a,b,c,d);
}


int main(int ac, char **av){
    if (ac != 2)
        return 1;

    int i = find_type(av[1]);
    switch (i)
    {
    case 0:
        from_int(av[1]);
        break;
    case 1:
        from_float(av[1]);
        break;
    case 2:
        from_double(av[1]);
        break;
    case 3:
        from_char(av[1]);
        break;
    
    default:
        break;
    }
    return 0; 
}