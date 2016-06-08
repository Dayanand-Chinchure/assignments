theory new_nat
imports Main
begin

hide_type nat

datatype nat = Zero ("zz") | Succ nat

value "Succ (Succ Zero)"

primrec addition:: "nat \<Rightarrow> nat \<Rightarrow> nat"
(infixr "++" 63)
where
"addition zz m = m"
| "addition (Succ n) m = Succ (addition n m)"

lemma add_right:"(m::nat) ++ zz = zz ++ (m::nat)"
apply (induction m)
apply (auto)
done
lemma "(zz ++ y) ++ z = zz ++ y ++ z"
by auto

lemma associativity : "((x::nat) ++ y) ++ z = x ++ (y ++ z)"
by (induction x ; auto)
end