#ifndef STACK_H
#define STACK_H
#include "Node.H"


template<class T>
class Stack
{
public:
    Stack();
    Stack(initializer_list<T>__l);
    Stack(const Stack&);
    bool push(T val);
    T pop();
    bool empty();
    T top();

    template <std::size_t N>
    Stack(const T(&arr)[N])
    {
        int size = this->array_size(arr);
        Head=NULL;
        for(int i=0; i<size; i++)
        {
            this->Insert(arr[i]);
        }
    }
    template <std::size_t N>
    constexpr std::size_t array_size(const T(&)[N])
    {
        return N;
    }
    ~Stack();


protected:
    Node<T>*Head;

};

#endif // STACK_H
