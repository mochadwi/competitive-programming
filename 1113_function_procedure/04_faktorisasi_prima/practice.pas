program factorate;

var
prim:array [0..1000000] of longint;
outp:array [0..1000000] of longint;
n,x,it,y,l:longint;
i:longint;
tr:boolean;


//MENCARI BILANGAN PRIMA 2 - (N DIV 2)
procedure searchPrime(n:longint);
var
i,j:longint;
frek:longint;
begin
	x := 1;
	for i := 2 to (n div 2) do
	begin
		while n mod i = 0 do
		begin
			n := n div i;
			prim[x] := i;
			inc(x);
		end;
	end;
end;

//MENCARI FAKTORASI MENGGUNAKAN REKURSIF, MEMASUKKAN HASIL KE DALAM ARRAY OUTP[]
procedure factorate(n:longint);
var
x,z:longint;
begin
	x := 1;
	if (n = 1) then
	begin
		exit;
	end else
	begin
		while (n mod prim[x] <> 0) do
		begin
			x := x + 1;
		end;
		z := n div prim[x];
		outp[y] := prim[x];
		y := y + 1;
		factorate(z);
	end;
end;

//MENGECEK APAKAH N BILANGAN PRIMA ATAU BUKAN
procedure cekPrim(n:longint);
var
i,frek:longint;
begin
	frek := 0;
	for i := 2 to trunc(sqrt(n)) do
	begin
		if (n mod i = 0) then
		begin
			frek := frek + 1;
		end;
	end;
	if (frek = 0) then
	begin
		writeln (n);
		tr := true;
	end;
end;

begin
	tr := false;
	y := 1;
	readln (n);
	l := n;
	cekPrim(n);
	if (tr = true) then
	begin
		exit;
	end;
	searchPrime(n);
	factorate(n);
	it := 1;
	//OUTPUT
	for i := 1 to y-2 do
	begin
		if (outp[i] = outp[i+1]) then
		begin
			it := it + 1;
		end else if (outp[i] <> outp[i+1]) then
		begin
			if (it = 1) then
			begin
				write (outp[i],' ','x',' ');
				it := 1;
			end else
			begin
				write (outp[i],'^',it,' ','x',' ');
				it := 1;
			end;
		end;	
	end;
	if (it = 1) then
	begin
		writeln (outp[i+1]);
	end else
	begin
		writeln (outp[i+1],'^',it);
	end;
end.