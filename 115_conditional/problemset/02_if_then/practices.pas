program if_then;

var n: longint;

begin
  readln(n);
  if (n > 0) and (n <= 100000) then
    writeln(n);
end.