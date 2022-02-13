class Area:
    pi=3.14
    def __init__(self,radius,length,breath):
            self.r=radius
            self.l=length
            self.b=breath
    def Circlearea(self):
            print("Area of circle is :- ",Area.pi*self.r*self.r)
    def Squarearea(self):
            print("Area of Square is :- ",self.l*self.l)
    def Rectanglearea(self):
            print("Area of Rectangle is :- ",self.l*self.b)

ob=Area(10,12,15)
ob.Circlearea()
ob.Squarearea()
ob.Rectanglearea()

ob2=Area(100,25,30)
ob2.Circlearea()
ob2.Squarearea()
ob2.Rectanglearea()
    
