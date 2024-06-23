-module(main).
-export([say_hello/1]).

say_hello("yu")->
    "hello there yu";


say_hello(Name)->
    "hello" ++ Name ++ ".".