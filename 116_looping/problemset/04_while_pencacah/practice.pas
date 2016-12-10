program while_pencacah;

var i, bil, total: integer;

begin
  bil := 0;
  total := 0;
  while not eof(input) do begin
    readln(bil);
    total := total + bil;
  end;
  writeln(total);
  close(input);
end.