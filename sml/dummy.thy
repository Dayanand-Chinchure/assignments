theory dummy
imports Main
begin

definition intrel :: "(nat \<times> nat) \<Rightarrow> (nat \<times> nat) \<Rightarrow> bool"
where
"intrel \<equiv> \<lambda>(x,y) (u,v). (x+v = y+u)"

lemma intrel_iff[simp]:"intrel (x,y) (u,v) \<longleftrightarrow> x+v = y+u"
      using intrel_def by (simp add: intrel_def)

definition productadd::"nat \<times> nat \<Rightarrow> nat \<times> nat \<Rightarrow> nat \<times> nat"
where
"productadd \<equiv> \<lambda> (x,y) (z,w) . (x + z , y+w)"  


lemma "productadd (0,w0) (0,0) = (0,0)"
unfolding productadd_def 
apply (simp) (*going back to the original definition *)

value "productadd ((2::nat),3) (5,6)"

quotient_type integer = "nat \<times> nat"/"intrel"
morphisms Rep_integr Abs_integr
proof(rule equivpI)
show "reflp intrel"
  unfolding reflp_def by simp
show "symp intrel"
  unfolding symp_def by simp
show "transp intrel"
  unfolding transp_def by simp
qed

definition addint ::"integer \<Rightarrow> integer \<Rightarrow> integer"
where
"addint x y \<equiv>  Abs_integr (productadd (Rep_integr x) (Rep_integr y))"

(*
w
*)
