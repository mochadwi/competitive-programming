program soal08;

function getStatus(x: longint): string;
begin
    if (x mod 2 = 1) then begin
        getStatus := 'a';
    end else begin
        getStatus := 'b';
    end;
end;

procedure printStatus(a, b: longint);
var
    i: longint;
begin
    for i := a to b do begin
        writeln(getStatus(i));
    end;
end;

begin
  printStatus(10, 12);
  printStatus(11, 13);
  writeln;
  printStatus(10, 12);
  printStatus(2, 4);
  writeln;
  printStatus(10, 14);
  printStatus(10, 12);
  writeln('===');
  printStatus(10, 8);
  printStatus(11, 10);
end.