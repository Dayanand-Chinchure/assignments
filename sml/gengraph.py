import numpy as np
import sys

def gc(sv,cv,pv,vl,graph):

    if sv in graph[cv]:
        vl.append(cv)
        return True

    
    vl.append(cv)
    for i in range(0,len(graph[cv])):
        tcv = graph[cv][i]
        if gc(sv,tcv,cv,vl,graph):
            return True
        
    vl.remove(cv)
    return False
        
    


def getcycle(graph):
    #get starting vertex
    cv=0
    #go in bfs fashion
    #maintain visited list and prev vertex
    vl=[]
    pv=-1
    return gc(sv,cv,pv,vl,graph) 


def gengraph(lines):
    graph=[]
    for i in range(0,len(lines)):
        adjsides=[]
        line=lines[i]
        for j in range(0,len(lines)):
            side=lines[j]
            if i!=j:
                if   (line[0][0]==side[0][0] and line[0][1]==side[0][1]) or (line[0][0]==side[1][0] and line[0][1]==side[1][1]):
                    adjsides.append(j)
                elif (line[1][0]==side[0][0] and line[1][1]==side[0][1]) or (line[1][0]==side[1][0] and line[1][1]==side[1][1]):
                    adjsides.append(j)
                
        graph.append(np.array(adjsides))

    graph = np.array(graph)
    return graph
                     
def formtuple(l):
    return [(l[0],l[1]),(l[2],l[3])]

def main():
    fname = sys.argv[1]
    fh    = open(fname,"r")
    lines = np.array(map((lambda x:formtuple(map(int,x.split(' ')))),fh.read().strip().split("\n")))
    print lines
    graph = gengraph(lines)
    print graph
    
main()
