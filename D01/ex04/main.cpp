#include "iostream"
#include "fstream"

bool is_readable( const std::string & file )  {  
    std::ifstream fichier( file.c_str() );  
    return !fichier.fail();  
}  

void    my_replace(std::string &fichier, int i, int size, std::string s2){
    fichier.erase(i, size);
    fichier.insert(i,s2);
    
}

void    my_swap(std::string &fichier, std::string s1, std::string s2){
    int size = fichier.length();
    int i = 0;
    int j = 0;
    while (i < size){
        if (fichier[i] == s1[0]){
            j = 0;
            while (i + j < size && fichier[i + j] == s1[j]){
                j++;
            }
            if (j == s1.size()){
                my_replace(fichier, i, j, s2);
                size = fichier.length();
                i += s2.length() - 1;
            }
        }
        i++;
    }
}

std::string     read_file(std::ifstream &ifs){
    std::string fichier;
    std::string lecture;


    std::getline(ifs,  lecture);
    lecture.append("\n");
    fichier.append(lecture) ;
    while ((ifs.rdstate() & std::ifstream::eofbit ) == 0){
        std::getline(ifs,  lecture);
        fichier.append(lecture);
        if ((ifs.rdstate() & std::ifstream::eofbit ) == 0)
            fichier.append("\n");
    }
    return fichier;
}

int main(int ac, char **av){
    if (ac != 4)
        return 0;
    
    std::string fichier;
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream   ifs(filename);
    if ( !is_readable(filename ) )  {  
        std::cout << "Fichier inexistant ou illisible.\n";
        return 0;  
    }  
    fichier = read_file(ifs);
    my_swap(fichier, s1, s2);
    filename.append(".replace");
    std::ofstream ofs(filename);
    ofs << fichier;
    return 0;
}