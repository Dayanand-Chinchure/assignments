theory Nat_Num
imports Main
begin

hide_type nat
datatype nat = Zero ("z") 
               | Succ nat

value "Succ (Succ Zero)"

primrec addition :: "nat \<Rightarrow> nat \<Rightarrow> nat" (infixr "++" 63)
where
"addition z x = x"
| "addition (Succ n) m = Succ (addition n m) "

lemma "(x::nat) ++ z = z ++ (x::nat)"
apply(induction x)
apply(auto)
done

lemma associativity: "((x::nat) ++ y) ++ zz = x ++ (y ++ zz)"
apply(induction x)
by(auto)

lemma "(z ++ y) ++ zz = z ++ y ++ zz"
by auto

definition intrev ::
    "(nat \<times> nat ) \<Rightarrow> (nat \<times> nat) \<Rightarrow> bool"
where
"intrev \<equiv> \<lambda>(x,y) (u,v). (x++v = y++u)"

lemma intrel_iff[simp]: "intrel (x,y) (u,v)
  \<longleftrightarrow> x  v = y  u"
  using ew_nat.intrev_def by (simp add :intrev_def)

end
