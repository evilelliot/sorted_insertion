#include <iostream>
#include "./SortedArray.hpp"

SortedArray::SortedArray(){
    this->size = 0;
}
int SortedArray::_create(int value) {
    int i = 0;
    int pos = this->_search(value); // Buscar la posición del valor
    int result = 0;

    if (this->size < this->MAX) {
        if (pos < 0) {
            pos = -(pos + 1); // Calcular la posición de inserción
            for (i = this->size; i > pos; i--) {
                this->bucket[i] = this->bucket[i - 1];
            }
            this->bucket[pos] = value;
            this->size++;
        } else {
            std::cout << "Element " << value << " already exists." << std::endl;
            result = -1;
        }
    } else {
        std::cout << "There's no space available in bucket" << std::endl;
        result = 0;
    }

    return result;
}

int SortedArray::_search(int value) {
    int i = 0;

    while (i < this->size && this->bucket[i] < value) {
        i++;
    }

    return (i < this->size && this->bucket[i] == value) ? i : -(i + 1);
}
void SortedArray::_update(int previousValue, int newValue){
    int i = 0;
    while((i <= this->size) && previousValue != this->bucket[i]){
        i++;
        if(i > this->size){
            std::cout << "Item not found" << std::endl;
        }else{
            this->bucket[i] = newValue;
        }
    }
}
int SortedArray::_delete(int value) {
    int i = 0;
    int pos = 0;
    int result = 0;

    if (this->size > 0) {
        pos = this->_search(value);
        if (pos < 0) {
            result = -1;
        } else {
            this->size--;
            for (i = pos; i < this->size; i++) {
                this->bucket[i] = this->bucket[i + 1];
            }
        }
    } else {
        result = 0;
    }

    return result;
}


void SortedArray::_showAll() {
    std::cout << "Number of elements: " << this->size << std::endl;
    for (int i = 0; i < this->size; i++) {
        std::cout << this->bucket[i] << std::endl;
    }
}

