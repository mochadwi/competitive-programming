program for_;

var
  n: shortint;
  b, i, total: integer;

begin
  total := 0;
  readln(n);
  for i := 1 to n do begin
    read(b);
    total := total + b;
  end;
  writeln(total);
end.