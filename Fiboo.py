


class Fibbo(object) :


    def __init__(self, n ,  a) : 

        self.num = n 
        self.a = a 

    def  fibo(self) : 
        t1 = 1  
        t2 = 2
        i = 1
        s = 0
        m = [1]
        while(i< self.num)  :
            s = t1 +t2 
            t1   = t2 
            t2= s 


            i+=1
            m.append(t1) 
        return  m 

    
    def palindrom( self , para):
        rev_ = para[::-1]
        print(rev_)
        print(para)
        return   rev_ == para  or  rev_ is para 
    

    def _saver(self):

        with open("fibboo.txt" ,"a+") as f : 
            f.write(str(self.num))

    





if __name__ =='__main__': 

    fib = Fibbo(10,10)
    _i = fib.fibo()
    print (_i)

    f = fib.palindrom("aabybaa")
    print(f)
    fib._saver()

    
