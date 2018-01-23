# PID Control Project
In this project, I developed PID Control to control vehicle within given trajectory.

# Tuning
There are several methods to tune PID but best method for me is to use trial and error with some intuition. Here is the procedure, I usually follow:

1. Use only P value and set it to a reasonable value. Of course, in many cases it would lead to overshoot eventually but you will get an idea what range of P is reasonable.
2. Add some D value to dampen the effect coming from pure P and lower the P value also. Tune D value until you get smoother control. Too much D would lead to delay in the control and never reach to reference value.
3. Add some I value to fasten the control and conpensate for errors. Usually, I value would be smaller to other variables. Adding I value will lead your control to reach reference value, eventually.

Because I couldn't have much time to tune,  I started with some good initial values that I know to perform well. However, the method I described above can be used for general tuning procedure. Still, you will need to spend some time to find optimal parameters. 

Also, I found it hard to know what is the optimal value for this kind of scenario because control setting and reference is always changing and it is not easy to understand the effect of your tuning. It would be helpful to plot CTE versus PID parameters to see overall effect of your tuning procedure.

I used P = 0.2, I = 0.004 and D = 3.0 as final set of parameters.

# Demo

You can checkout my PID control running on demo track from [here](https://youtu.be/QrZM8JCUr24)
