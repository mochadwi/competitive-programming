program kuadrat;

var
    a, b, c, x, hasil: longint;

begin
    a := 1;
    b := 3;
    c := -2;
    x := 2;
    
    hasil := a*x*x + b*x + c;
    writeln('ax^2 + bx + c = ', hasil); // 8
end.