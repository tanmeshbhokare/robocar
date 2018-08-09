# robocar
arduino controlled car code

I have installed this code in arduino uno and it worked well.

This is the basic level code for moving the car in forward/backward/left/right direction.

Starting four lines are for assinging the motor pins to arduino board.

r_mtr_n means right side motor in frontside

r_mtr_p means right side motor in backside

l_mtr_n means left side motor in frontside

l_mtr_p means left side motor in backside

Below figure shows the wheel configuration.

![2018-08-09](https://user-images.githubusercontent.com/42235943/43909724-aa83240a-9c18-11e8-9c30-a688e140adc4.png)
 
        
NOTE: The motors  "l_mtr_n" and "r_mtr_n" & "l_mtr_p" and "r_mtr_p" are opposite to each other so for moving forward the configuration
      is as follows

r_mtr_n -> HIGH  (MOVE ANTICLOCK WISE)

r_mtr_p -> LOW   (MOVE COUNTERCLOCK WISE)

l_mtr_p -> LOW   (MOVE COUNTERCLOCK WISE)

l_mtr_n -> HIGH  (MOVE ANTICLOCK WISE)
