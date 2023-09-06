#pragma once

class SortedArray{
    private:
        const int MAX = 100;
        int size;
        int bucket[100];
    public:
        SortedArray();
        int _create(int value);
        void _update(int previousValue, int newValue);
        int _search(int value);
        int _delete(int value);
        void _showAll();
        // Getters
        int getSize() { return this->size; }
}; 