#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
#include <cassert>
template<typename T>
class TPQueue {
private:
    T* arr;
    int size;
    int begin,
        end;
    int count;
public:
    TPQueue(int = 100);
TPQueue();
    ~TPQueue();

    void push(const T&);
    T pop();
    T get() const;
    bool isEmpty() const;
    bool isFull() const;
};
template<typename T> TPQueue<T>::TPQueue(int sizeQueue) : size(sizeQueue),
template<typename T> TPQueue<T>::TPQueue() : size(100),
begin(0), end(0), count(0) {
    arr = new T[size + 1];
}
@@ -42,8 +41,7 @@ template<typename T> void TPQueue<T>::push(const T& item) {
                continue;
            }
        }
    }
    else {
    } else {
        arr[begin] = item;
    }
    count++;
    end++;
}
template<typename T> T TPQueue<T>::pop() {
    assert(count > 0);
    T item = arr[begin++];
    count--;
    if (begin > size)
        begin -= size + 1;
    return item;
}
template<typename T>
T TPQueue<T>::get() const {
    assert(count > 0);
    return arr[begin];
}
template<typename T>
bool TPQueue<T>::isEmpty() const {
    return count == 0;
}
template<typename T>
bool TPQueue<T>::isFull() const {
    return count == size;
}
struct SYM {
    char ch;
    int  prior;
};
#endif// Copyright 2021 NNTU-CS
