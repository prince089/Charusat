class Line:
    def __init__(self,t1,t2):
        self.t1=t1
        self.t2=t2
    def distance(self):
        x1,y1=self.t1
        x2,y2=self.t2
        dist=((x2-x1)**2)+((y2-y1)**2)**(1/2)
        print("Distance is :- ",dist)        
    def slop(self):
        x1,y1=self.t1
        x2,y2=self.t2
        slop=(y2-y1)/(x2-x1)
        print("Slop is :- ",slop) 
        
        
              
cod1=(3,2)
cod2=(8,10)
obj1=Line(cod1,cod2)
dist=(obj1.distance())
slop=(obj1.slop())
