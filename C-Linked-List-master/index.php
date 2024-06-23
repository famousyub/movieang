<?php 






$a ; 

$b ;




trait message {
       function help(){
            echo "hello  tehre ";
       }
}

trait message2{
       function help2(){
          return  strstr("hello  there" , "hello  howa are you");
       }
}


trait message1
{
     public function msg1(){
         echo "message 1";
     } 
}



class Welcome {
       use message1;

    }


    class mywell {
         use message2 , message;


    }


    $obj1 = new mywell();
   echo  $obj1->help2();
    $obj1->help();



    $obj = new Welcome();
    $obj->msg1();
function sum($a , $b){

      if($a == $b){
         return  ($a +$b ) * 3 ; 
      }

      return $a +$b;
}


function test($str) 
{
   return (strlen($str) < 3 && $str=="C#") || (substr($str,0,2) == "C#" && substr($str,2,1) == ' ');
}

var_dump(test("C# Sharp"));
var_dump(test("C#"));
var_dump(test("C++"));


function startwith($v)
{

     return ( substr($v , 0,2) =="c#" && substr($v,2,1) ==' '  || $v =="c#" ||  strlen($v) <3) ;
}


echo sum(20 , 20);
echo "\n";
echo sum(1 , 2);

echo "\n";
var_dump(startwith("C# Sharp"));
var_dump(startwith("C#"));
var_dump(startwith("C++"));