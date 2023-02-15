#pragma once
#include <exception>
#include <cassert> // for assert()


class bad_length : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "ERROR: bad lenght";
    }
};

class bad_range : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "ERROR: bad range";
    }
};

class IntArray
{
private:
    int m_length{};
    int* m_data{};

public:
    IntArray() = default;
    
    IntArray(int length);

    IntArray(const IntArray& a);

    ~IntArray();

    void erase();

    int& operator[](int index);

    void reallocate(int newLength);

    void resize(int newLength);

    IntArray& operator=(const IntArray& a);

    void insertBefore(int value, int index);

    void remove(int index);

    void insertAtBeginning(int value);

    void insertAtEnd(int value);

    int getLength() const;

    void find_ell(int el);

};

