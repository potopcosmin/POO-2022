#pragma once
using namespace std;

template<typename T>
class VectorTemp
{
    T* v;
    int size;
    int max_size;

public:
    VectorTemp()
    {
        max_size = 10;
        v = new T[max_size];
        size = 0;
    }
   

    void push(const T& val)
    {
        if (size + 1 == max_size)
        {
            max_size *= 2;

            T* new_v = new T[max_size];

            for (int i = 0; i < size; i++)
                new_v[i] = v[i];

            delete[] v;
            v = new_v;
        }

        v[size++] = val;
    }
   
    T& pop()
    {
        return v[size - 1];
    }

    void insert(const T& val, int pos)
    {
        if (size + 1 == max_size)
        {
            max_size *=2 ;

            T* new_v = new T[max_size];

            for (int i = 0; i < size; i++)
                new_v[i] = v[i];

            delete[] v;
            v = new_v;
        }

        for (int i = size; i > pos; i--)
        {
            v[i] = v[i - 1];
        }

        v[pos] = val;
        size++;
    }
    void remove(int pos)
    {
        for (int i = pos; i < size; i++)
        {
            v[i] = v[i + 1];
        }
        size--;
    }
    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << ' ';
        }

        cout << endl;
    }
};