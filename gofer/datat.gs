ctype List.t
      where
      Cons : t -> List.t -> List.t
      Emp  : List.t

ctype Exp
      where
	Plus : Exp -> Exp -> Exp
	Mul  : Exp -> Exp -> Exp
	Triv : Int -> Exp

exp = (Plus.(Triv.1).(Triv.2))
eval : Exp -> Int
eval.(Plus.e1.e2) = (eval.e1)+(eval.e2)
eval.(Mul.e1.e2) = (eval.e1)*(eval.e2)
eval.(Triv.e) = e


tobuiltin : List.t -> [t]
tobuiltin.(Emp) = []
tobuiltin.(Cons.x.xs) = x::(tobuiltin.xs)

toours : [t] -> List.t
toours.[] = Emp
toours.(x::xs) = Cons.x.(toours.xs)

compo = toours;tobuiltin