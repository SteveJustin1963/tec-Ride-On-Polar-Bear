 
float Fnet, M, Fgravity, Felasticity;

float m, g, k, x;

/*Calculate net force*/
Fnet = m*g + k*x;

/*Calculate muscle activity*/
M = Fnet/Fmax;

/*Calculate forces due to gravity and elasticity*/
Fgravity = m*g;
Felasticity = k*x;

 

/*Print results*/
printf("Net Force: %f\n", Fnet);
printf("Gravitational Force: %f\n", Fgravity);
printf("Elastic Force: %f\n", Felasticity);
printf("Muscle Activity: %f\n", M);

return 0;
}
 

