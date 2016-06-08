val x = 3;
val y = 4;
	    
datatype aexpr = Lf of int | Plus of aexpr * aexpr
datatype expr  = Lf of int | Plus of expr * expr | Mul of expr * expr

datatype 'a lst = Emp | Cons of ('a * 'a lst)

(* Simple function*)				    
val f = (fn x => x + 1);

(* factorial *)
fun fact (n) = if n=0 then 1 else n * fact (n-1);

(* Recursive Print*)
fun print nil = nil | print (x::xs) = x :: print (xs);

(*length of list*)
fun printlen nil = 0 | printlen (x::xs) = 1 + printlen(xs);

(* function applied on pair*)
fun f (x,y) = x div y;


(*check element in the list*)

fun member (x,nil) = false | member (x,y::ys) = x=y orelse member (x,ys);
(* member ("pucsd" ,["SPPU","pucsd", "department"])*)


(* insert a number in a list at proper position*)
fun insert (x,nil) = [x] | insert(x,y::ys) = if y>x then x::y::ys else y :: insert (x,ys);

(* merge two lists*)
fun merge (xs,nil) = xs | merge (nil,ys) = ys | merge (x::xs,y::ys) = if x<y then x::merge (xs,y::ys) else y::merge (x::xs,ys);
								      

(* function as a argument*)
fun apply (f) = f(10);
fun test n = n + 100;
(* apply (fact) *)

(*using the helper function*)
fun f n = n+1;
fun addone nil = nil | addone (x::xs) = f (x) :: addone (xs);

(*Generic fold*)
fun fold f i nil = i  | fold f i  (x::xs) = f (x , fold f i xs);

(*append two list*)
fun append (nil,ys) = ys | append (x::xs,ys) =  x :: append(xs,ys);

datatype 'a tree = Tip | Node of ('a tree * 'a * 'a tree)
						      
fun dfs Tip = [] | dfs (Node (l,x,r)) = dfs l @ [x] @ dfs r;

fun dfs2 Tip a = [] | dfs2 (Node  (l,x,r)) a = dfs2 l (x :: dfs2 r a);

(*add last*)
fun addlast (x,nil) = x | addlast(x,ys) = y :: addlast(x,ys);

(*Binary Tree*)(*
fun tree nil = nil | tree (l,xs,r) = l.x @ x @ r.x
*)

							  
						      
