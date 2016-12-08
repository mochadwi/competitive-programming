program if_then_else;

var 
  n: longint;
  ket: string;

begin
  readln(n);
  
  if (n = 0) then
    ket := 'nol'
  else if (n > 0) and (n <= 100000) then
    ket := 'positif'
  else if (n < 0) and (n >= -100000) then
    ket := 'negatif';

  writeln(ket);
end.