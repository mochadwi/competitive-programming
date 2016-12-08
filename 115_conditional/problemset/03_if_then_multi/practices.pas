program if_then_multi;

var n: longint;

begin
  readln(n);
  if (n mod 2 = 0) then begin
    if (n > 0) and (n <= 100000) then
      writeln(n);
  end;
end.