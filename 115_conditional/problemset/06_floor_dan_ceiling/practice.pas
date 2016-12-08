program floor_dan_ceiling;

var x: real;

begin
  readln(x);
  if (-100000 <= x) and (x <= 100000) then begin
    if (x = 0) then begin
      writeln(0, ' ', 0);
    end else if (x < 0) then begin
      writeln(x:0:0, ' ', trunc(x));
    end else if (x > 0) then begin
      writeln(trunc(x), ' ', x:0:0);
    end;
  end;
end.