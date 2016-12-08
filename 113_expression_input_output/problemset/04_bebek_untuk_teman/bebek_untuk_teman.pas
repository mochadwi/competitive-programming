program bebek_untuk_teman;

var
  a, n, m: longint;

begin
  read(n);
  read(m);
  case (n) of
    1..100000: begin
      writeln('masing-masing ', n div m);  
    end;
  end;

  case (m) of
    1..100000: begin
      writeln('bersisa ', n mod m);  
    end;
  end;
end.