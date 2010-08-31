#ifndef QLIST_H
#define QLIST_H

template <typename T>
class QNode
{
private:
    T data;
    QNode<T>* next;
public:
    QNode();
};

template <typename T>
class QList
{
private:
    int i_Count;
    QNode<T>* _Head;
public:
    QList();
    ~QList();

public:
    int InsertBefore(const int pos,const T data);
    int InsertAfter(const int pos,const T data);
    int AddHead(const T data);
    int AddTail(const T data);
    void RemoveAt(int pos);
    void RemoveHead();
    void RemoveTail();
    void RemoveAll();
    T& GetAt(const int pos);
    T& GetHead();
    T& GetTail();
};

#endif // QLIST_H
