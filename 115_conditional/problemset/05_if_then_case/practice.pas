program if_then_case;

var
  n: longint;
  ket: string;

begin
  readln(n);
  if (n > 0) and (n <= 100000) then begin
    case (n) of
      1..9        : ket := 'satuan';
      10..99      : ket := 'puluhan';
      100..999    : ket := 'ratusan';
      1000..9999  : ket := 'ribuan';
      10000..99999: ket := 'puluhribuan';
      100000      : ket := 'ratusribuan';
    end;
    writeln(ket);
  end;
end.