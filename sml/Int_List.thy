theory Int_List
imports Main
begin

type_synonym intlists = "int list"

primrec sumlist:: "intlists \<Rightarrow> int"
where
"sumlist [] = 0"
| "sumlist (x#xs) = x + (sumlist xs)"

value "sumlist [(1::int),2,3]"

definition postsumlist:: "intlists \<Rightarrow> bool"
where
"postsumlist xs = (sumlist xs > (0::int))"

primrec first_element :: "intlists \<Rightarrow> bool"
where
"first_element [] = False"
| "first_element (x#xs) = (x>0)"

lemma non_empty_postsumlist :"postsumlist [(3::int)]"

(*by(auto simp add: postsumlist_def) *)
using postsumlist_def by (auto)

typedef positive_lists = "{(x::intlists) . (postsumlist x)}"
using non_empty_postsumlist by auto

lemma "sumlist x > 0"
netpick
value "sumlist = [1,(2::int)]" 

value "Abs_positive_lists [1,(2::int),3]"
value "Rep_positive_lists (Abs_positive_lists [5,(2::int)])"
value "Rep_intlists [-3,(1::int)]"

definition first_element_check :: "intlists \<Rightarrow> bool"
where
"first_element_check xs \<equiv> (case xs of 
                                      [] \<Rightarrow> False|
                                      [y] \<Rightarrow> False|
                                      (y#xs) \<Rightarrow> (y>(0::int)))"
definition intrev ::
    "(nat \<times> nat ) \<Rightarrow> (nat \<times> nat) \<Rightarrow> bool"
where
"intrev \<equiv> \<lambda>(x,y) (u,v). (x++v = y++u)"

lemma intrel_iff[simp]: "intrel (x,y) (u,v)
  \<longleftrightarrow> x ++ v = y ++ u"
  using new_nat.intrev_def by (simp add :intrev_def)



(*
quotient_type integer = "nat \<times> nat"/ "intrev"
  morphisms Rep_integer Abs_integer 
proof(rule equivpI)
have "reflp intrel"*)