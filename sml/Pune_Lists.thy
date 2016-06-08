theory Pune_Lists
imports Main
begin

no_notation Nil ("[]") and Cons (infixr "#" 65) and append(infixr "@" 65)

hide_type list
hide_const rev

text{*begin by defining lists - latex style comments*}

datatype 'a list = Nil ("[]") 
                  | Cons "'a" "'a list"
                    (infixr "#" 65)

(*How to use value for type checking*)
value "(9::nat)#(xs ::nat list)"

primrec append :: " 'a list \<Rightarrow> 'a list \<Rightarrow> 'a list"
(infixr "@" 65)
where
 "[]@xs = xs"
 |"(y#ys)@xs = y#(ys@xs)"
value "(1::nat)#2#[]@(3#4#[]) = 1#[]@(2#3#4#[])"
 
(*definition of non primitive  but recursive function*)
fun one_element_list :: " 'a list \<Rightarrow> bool"
where
"one_element_list [] = False"
|"one_element_list (x#[]) = True"
|"one_element_list (x#y#xs) = False"

primrec rev :: " 'a list \<Rightarrow> 'a list"
where
"rev []  = []"
|"rev (x#xs) = (rev xs)@(x#[])"

value "(rev ((1::nat)#2#3#[])) = 3#2#(1#[])"


(*prove associativity of @*)
lemma associativity:"xs@(ys@zs) = (xs@ys)@zs"
apply(induction xs)
apply(auto)
done

(*backward tactics*)
lemma first_lemma: "xs@[] = xs"
apply(induction xs)
apply(simp) (*it simplifies and it eliminated 1 sub goal *)
apply(simp add: append_def)
(*
apply(auto) (*Isabelle's in built automation*)
*)
done

lemma rev_assoc: "rev (xs@ys) = (rev ys)@(rev xs)"
apply (induction xs)
apply(auto)
apply (auto simp add: associativity first_lemma)
done

lemma reverse: "(rev(rev xs)) = xs"
apply(induction xs)
apply(auto simp add:rev_assoc )
done

primrec double::" 'a list \<Rightarrow> 'a list"
where
"double [] = []"
| "double (x#xs) = (x#xs)@(x#xs)"

(*Definiton approach to functions*)
definition double_list:: " 'a list \<Rightarrow> 'a list"
where
"double_list xs = (xs@xs)"

value "double_list ((1::nat)#2#[]) = (1#2#1#2#[])"

lemma "double_list xs = double xs"
apply(induction xs)
apply(auto simp add: double_list_def)
done

(* x + 0 = 0 + x*)
lemma add_zero [simp] : "add x 0 = x"
apply (induction x)
apply (auto)
done

lemma add_cons : "add x y =  add y x"
apply (induction x)
apply (auto simp add: add_zero)
done


datatype n = Z | S n

primrec add :: "n => n => n" 
where
  "add x Z = x"
| "add x (S y) = add (S x) y"

lemma simple_desired: "\<And>x. add x (S y) = S (add x y)"
  by (induct y, simp_all)

lemma desired: "\<And>x y. add x (S y) = S (add x y)"
  by (rule simple_desired)


type_synonym intlists= "int list"

primrec sumlist :: "intlists \<Rightarrow> int"
where
"sumlist [] = 0"
| "sumlist (x#xs) = x + (sumlist xs)" 

value "sumlist [(1::int), 2 ,3]"

 
definition postsumlist::"intlists \<Rightarrow> int"
where
"postsumlist xs = (sumlist xs > (0 :: int))"

lemma non_empty_postsumlist:  
"postsumlist [(3::int)]"
using postsumlist_def  (auto)

value "Abs_positive_lists [1, (2::int)]"

typedef positive_lists = 
"{(x::intlists) . (postsumlist x)}" 
apply (rule_tac "x = (3::int)#[]" in exI)


primrec first_elem :: "intlists \<Rightarrow> bool"
where
"first_elem [] = False"
| "first_elem (x#xs) = (x > (0::int))"

(*
definition first_element_check ::"intlists \<Rightarrow> int"
where
"first_element_check " 
*)



