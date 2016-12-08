program for_;

var n, b, i, total: integer;

begin
  readln(n);
  total := 0;
  i := 1;
  while (i <= n) and ((1 <= n) and (n <= 1000)) do begin
    total := total + i;
    i := i + 1;
    // read(b);
    // if ((1 <= b) and (b <= 1000)) then begin
    //   total := total + b;
    // end else begin
    //   continue;
    // end;
  end;
  writeln(total);
end.