program ContohReadln;

var
    a, b, c, d, e: byte;

begin
    read(a);
    readln(b);
    read(c, d);
    readln(e);

    a := 250;
    write(a + 10);
    a := a + 10;
    writeln(' ', a);

    writeln;

    writeln(a);
    writeln(b);
    writeln(c);
    writeln(d);
    writeln(e);
end.