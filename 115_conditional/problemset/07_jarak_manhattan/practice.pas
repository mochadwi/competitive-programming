program jarak_manhattan;

var
  x1, y1, x2, y2,
  total: longint;

begin
  readln(x1, y1, x2, y2);
  writeln(abs(x1 - x2) + abs(y1 - y2));
end.