import math  as  m
fn = lambda x , y :   x ** 2 - x + 9 * y - y** 2 -  m.cos(m.pi  **2 ) - m.sin(x) ** 2



_h = fn(12  * m.pi ,25 * m.pi )


print (_h)


#  180  ->  pi 

# cons   =  ->   x 


# x =  cons * pi / 180
_vartopi  = lambda y :  y * m.pi / 180

print (_vartopi(_h))



_volume  = lambda ray ,h:   m.pi * (ray) ** 2 * h / 3.0 


ray = float(input("enter  rayounn "))

hau = float(input("hauteur en   (cone) m "))

v_ = _volume(ray,hau)


print (v_)

