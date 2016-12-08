program luas_segitiga;

var
    a, t, luas: real;

begin
    readln(a, t);
    luas := 0.5 * (a * t);
    writeln(luas:0:2);
end.