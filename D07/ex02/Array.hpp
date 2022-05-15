#ifndef ARRAY_H
# define ARRAY_H

#include "iostream"

template <typename T>
class Array{

public:
    Array<T> (): _data(NULL), _len(0){}

    Array<T> (unsigned int n):  _len(n){
        if (n == 0)
            this->_data = NULL;
        else{
            T *tmp = new T();
            this->_data = new T[n];
            int i = 0;
            while (i < this->_len){
                this->_data[i] = *tmp;
                i++;
            }
            delete tmp;
        }
    }

    Array<T>(Array const & src){
        if (src.size() == 0){
            this->_data = NULL;
            this->_len = 0;
        }
        else{
            this->_len = src.size();
            this->_data = new T[src.size()];
            int i = 0;
            while (i < src.size()){
                this->_data[i] = src._data[i];
                i++;
            }
        }
    }

    unsigned int size(void) const{
        return this->_len;
    }

    ~Array<T>(){
        if (this->_data != NULL)
            delete [] this->_data;
        return ;
    }

    Array<T> & operator=(Array<T> const & rhs){
		if (this == &rhs)
			return *this;
        if (this->_len != 0)
            delete [] this->_data;
        this->_len = rhs.size();
        if (this->_len == 0){
            this->_data = NULL;
            return *this;
        }
        this->_data = new T[rhs.size()];
        int i = 0;
        while (i < rhs.size()){
            this->_data[i] = rhs._data[i];
            i++;
        }
        return *this;

    }
    void    display(void) const{
        int i = 0;

        while (i < this->_len){
            std::cout << i << ": " << this->_data[i] << std::endl;
            i++;
        }
        std::cout << std::endl;
    }
    T& operator[](const int i){
        if (i < 0 || i >= this->_len)
            throw(std::exception());
        return this->_data[i]; 
    }

private:
    T   *_data;
    int _len;
    
};

template <typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs);

#endif