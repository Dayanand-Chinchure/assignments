ctype Tree.a where
      Tip  : Tree.a
      Node : Tree.a -> a -> Tree.a -> Tree.a

dfs.Tip = []
dfs.(Node.l.x.r) = dfs.l ++ [x] ++ dfs.r

dfs2.Tip.a = a
dfs2.(Node.l.x.r).a= dfs2.l.(x::(dfs2.r.a))
