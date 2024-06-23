

#include<iostream>

#include<cstdlib>
#include<string>


#include<vector>
#include<algorithm>


#include <type_traits>
template <typename T1, typename T2>
std::common_type_t<T1, T2>& max(T1 const& a,
T2 const& b)
{
if (a > b)
{
return a;
}
return b;
}


class Circle  {


     public :
     void draw() const  ; 
     double area() const  ;
};



class Rectangle  {
    public   :
    void draw()const  ;
    double area() const ;
};

class Impl
{
public:
virtual void fun1() = 0;
virtual void fun2() = 0;
};
class Impl1 : public Impl
{
public:
void fun1() override;
void fun2() override;
};
class Impl2 : public Impl
{
public:
void fun1() override;
void fun2() override;
};
class Interface
{
public:
void fun1()
{
body->fun1();
}
void fun2()
{
body->fun2();
}
private:
Impl* body;
};











template <typename T>

struct my_allocator {
     using value_type = T;

    my_allocator() = default;
T* allocate(std::size_t n)
{
int bytes{n*sizeof(T)};
cout << "allocated " << n << " elements" << endl;
return static_cast<T*>(std::malloc(bytes));
}
void deallocate(T* p, std::size_t n)
{
cout << "dellocated " << n << " elements" << endl;
std::free(p);
}


     };


     int main(int argc ,   const char *argv[])
     

{
std::vector<int, my_allocator<int>> v{};
for (int i{0}; i < 100; ++i)
v.push_back(i);
        return 1 ;

     }