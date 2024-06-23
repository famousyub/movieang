


import os 
from Fiboo import Fibbo

class File_(object) :


    def __init__(self,  file_  , data ,  structure="v.1" ,path=os.getcwd()):

        self.f = file_ 
        self.data =data 

        self.stru = structure
        self.p = path
    

    def write(self):

        with open(self.f , "a+") as _f :
            if len  (self.data)  > 1 :
                for _k , v  in enumerate(self.data):
                    if type(v)  == type([1,2]) :
                        for  o in v:
                            print (o)
                           # f.write(o)
                    elif  type (v) == type(dict) :
                        for  k, i in v.items() :
                            f.write(k)
                            f.write(i)
                    else:

                        print(v)


                        #f.write(v) 
                        #f.write("\n")
            else :
                f.write(self.data)



codes  = list(zip([i for i in range(1,200,20)] , [ j for j in  range(2,201,20)]))



code = list(zip(
[1000,900 ,500,400 ,100,90 ,50 ,40 ,10 ,9 ,8,7,6,5 ,4 ,3,2,1],
["M" ,"CM","D","CD","C","XC","L","XL","X","IX","VIII", "VII", "VI", "V","IV","III","II","I"]
))
# fonctions
def decToRoman(num):
    res = []
    for d, r in code:
        while num >= d:
            res.append(r)
            num -= d
    return ''.join(res)



if  __name__ =='__main__': 
    f = File_(file_ ="ayub.txt",data = [[1,2,5,4,57,14] , 14,98,54,4,{"username":"ayoub"}]   )

    f.write()

    from turtle import *
    forward(120)
    left(90)
    color('red')
    forward(80)
    a = 0
    while a <12:
        a = a +1
        forward(150)
        left(150)


    import math as  m 
    for i in range(12000, 13000):
        print(i, decToRoman(i))
        with open(f"roman- {i}.txt","a+") as f : 
            fib = Fibbo(i,i)
            _i = fib.fibo()
            a = 0
            while a <i:
                a = a +1
                forward(150 * m.pi /  i )
                forward(m.sin(m . pi) * a)
                backward(m.cos(m.pi) * a)
                color("green")
                shape("turtle")


                left(150)
            
            f.write (f" fiboo {i}   =   \t is {_i}")
            f.write("\n")
            f.write("\t\n")
            f.write(f" DECIMAL {i} =  Roman  {decToRoman(i)}")


