import System.Environment
import System.Exit


main::IO()





eveno :: Int  -> Bool 

eveno  x=  if x  `rem` 2 == 0 
    then  True
else False 


noto :: Bool -> String  
noto x = if x ==True 
    then "this is even numer"
else  "this is odd  number"




fType::Int -> Int ->Int 

fType x y = x *y + y*x 



add :: Integer -> Integer  ->Integer 

add x y = x +y 


roots :: (Float , Float , Float) -> (Float, Float)

roots (a,b,c) = (x1 , x2) where 
    x1 = e + sqrt d / (2 * a) 
    x2 = e - sqrt d / (2 * a) 
    d = b * b - 4 * a * c  
    e = - b / (2 * a) 

main = do 
    let  var1 = 1 
    let var2 = 5 
    putStrLn "the addition  is "
    print(var1 + var2)
    print([1..23])
    print(fType 2 4 )

    print(roots (41 , 29  ,-98 ) )

    print (add  10008 899655)

    print((noto.eveno)(16))
    