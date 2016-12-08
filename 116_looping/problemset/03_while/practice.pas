program while_;

var kata: string;

begin
  while not (eof(input)) do begin
    readln(kata);
    writeln(kata);
  end;
end.