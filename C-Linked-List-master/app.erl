-module(app).


-export([convert_length/1]).
-export([fact/1]).


fact(1)->
    1;
fact(0)->
    1;


fact(X)->
    X * fact ( X - 1 ).

convert_length({centimeter , X}) ->
    {inch , X /2.54};

convert_length({inch , Y})->
    {centimeter ,  Y * 2.54}.




