#include "Stack.H"

template<class T>
Stack<T>::Stack()
{
    this->Head=NULL;
}
template<class T>
Stack<T>::Stack(initializer_list<T>__l)
{

    int size=__l.size();
    this->Head=NULL;
    for(int i=0; i<size; i++)
    {
        this->push(*(__l.begin()+i));
    }

}

template<class T>
Stack<T>::Stack(const Stack& s)
{

    Node<T>*temp=s.Head;
    this->Head=NULL;
    while(temp!=NULL)
    {
        this->push(temp->get_value());
        temp=temp->get_next();
    }

}
template<class T>
bool Stack<T>::empty()
{
    if(Head==NULL)
    {
        return true;
    }
    else return false;
}

template<class T>
bool Stack<T>::push(T val)
{
    if(this->Head!=NULL)
    {
        Node<T>*new_node = new Node<T>(val);
        new_node->set_next(this->Head);
        this->Head=new_node;
    }
    else
    {
        this->Head=new Node<T>(val);
    }
    return true;
}
template<class T>
T Stack<T>::pop()
{

    T val =Head->get_value();
    Node<T>*temp=Head;
    Head=Head->get_next();
    delete temp;
    return val;

}


template<class T>
T Stack<T>::top()
{
    try
    {
        if(Head != NULL) return Head->get_value();
        else
        {
            throw "Null pointer exception";
        }

    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }

}




template<class T>
Stack<T>::~Stack()
{
    while(Head != NULL)
    {
        Node<T>*temp=Head;
        Head=Head->get_next();
        delete temp;
    }
}


template class Stack<int>;
template class Stack<float>;
template class Stack<long long>;
template class Stack<long>;
template class Stack<string>;
template class Stack<char>;
template class Stack<double>;
template class Stack<long double>;
