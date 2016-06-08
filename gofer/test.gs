j= \x -> x*x
g.x=x*2
f.x | x==0 = 1
    | otherwise = x * f.(x-1)
    
fact.x = if x==0 then 1 else x*fact.(x-1)

le.x= if x==[] then 0 else 1 + le.(tail.x)

ll.[]=0
ll.(x::xs)= 1 + ll.xs

a.(x,y)= x*y
h = [x | x <- [1...100]]
list= [1,2,3,4,5]

{- For append
ap.([1],[2]) = [1,2]
ap.([],[2]) = [2]
ap.([1],[])=[1]
-}

ap.([],ys) = ys
ap.((x1::xs),ys) = x1 :: ap.(xs,ys)

reve.[]=[]
reve.xs = reve.(tail.xs) ++ [head.xs]

and1 : Bool->Bool->Bool
and1.True.True=True
and1.True.False=False
and1.False.False=False
and1.False.True=False

and2.x.y  | x && y   = True
	  | otherwise = False

{-m.([],a) = a
 m.((x::xs),a)= m.(xs,x::a)
-}
{-
super.(a,b) = foo
	    where
	    foo.[]=[]
	    foo.(x::xs) = x 'a'::foo.xs
-}

{-
zip.([],ys)=[]
zip.(xs,[])=[]
zip.(x::xs,y::ys) = (x,y)::zip.(xs,ys)
-}

{-
fold-map f (x::xs) = fold-map (\x -> f.x ::) [] xs
-}

