program practice;

var
  a: integer;

begin
  a := 0; // selama ada nilainya, sama dengan true
  if not (a and 1 = 0) then begin // what this actually means? (a and (1 = 0)), now makes sense XD
    write('genap ');
  end else begin
    write('ganjil ');
  end;

  if (a > 0) then begin
      writeln('positif');      
  end else if (a < 0) then begin
      writeln('negatif');  
  end else begin
      writeln('nol');
  end;
end.