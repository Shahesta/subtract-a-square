
import math 
print(" subtract a sequare :)")
print(" 1 or 2 players? ")
m=int(input())
turn=0
winner =" "
if(m==2):
    
    print("Enter the number of coins -->")
    number=int(input())
    while(turn==0):
         print("p1 turn")
         x=int(input())
         if((x<=number)and(math.sqrt(x)-math.floor(math.sqrt(x))==0)):
              number=number-x
              winner="congratulations ,player1 is the winner"
              turn=turn+1
               
         else:
             print("please try again!")
         
    
    while(number>0):
        if(turn%2==0):
            print("number of coins=",number)
            print("p1 turn")
            x=int(input())
            if((x<=number)and(math.sqrt(x)-math.floor(math.sqrt(x))==0)):
                number=number-x
                winner="congratulations ,player1 is the winner"
                turn=turn+1

            else:
                print("please try again: ")
                
        else:
            print("number of coins=",number)
            print("p2 turn")
            x=int(input())
            if((x<=number)and(math.sqrt(x)-math.floor(math.sqrt(x))==0)):
                number=number-x
                winner="congratulations ,player2 is the winner"
                turn=turn+1
            elif(x==1):
                number=number-x
                winner="congratulations,player2 is the winner"
                turn=turn+1
            else:
                print("please,try again: ")
   
                
    print(winner)
    exit(0)

    
    
                    
    
                
            

                
            
