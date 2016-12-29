program pola_5;

var
  i, j: integer; // looping
  jml: integer; // total
  n, k: integer; // baris dan kolom

function fact(n: integer): longint;
{ Fungsi rekursif, mencari faktorial }
begin
  if (n = 0) then begin
    fact := 1;
  end else begin
    fact := n * fact(n - 1);
  end;
end;

function c(n, k: integer): longint;
{ n = baris, k = kolom }
begin
  c := fact(n) div (fact(k) * fact(n - k)); // rumus segitiga (pascal: nama orang) 
end;

begin
  write('masukkan jumlah: '); readln(jml);
  n := -1;
  for i := jml downto 1 do begin
    n := n + 1;
    k := -1; // reset kolom
    for j := 1 to jml do begin
      if (j >= i) then begin
        k := k + 1;
        write(c(n, k));
      end; // only show number when triggered
      write(' ');
    end; // end j
    writeln;
  end; // end i
end.