# tec-Ride-On-Polar-Bear


![download](https://user-images.githubusercontent.com/58069246/175305212-641e95be-2451-443a-b042-448a0a2a69bd.jpg)

A Matt Strong inspired project, "I always wanted to ride a bear as a kid".

Using "openDog" platform  .... https://github.com/XRobots/openDog

A tec1 controlled robot polar bear or brown bear you can ride on it back, re-charge connector in butt hole, or it sleeps on a wireless charging plate. It makes real sounds, growls and can swipe at people with its soft claws. Internally its a quadruped dressed as a bear. saddle on the back, handle bars thru the head, its growls when you press the horn or pat its butt.

### bear walking gait
What kind of gait Do bears have?
Within quadrupedal animals, a lateral walk, in which the placement of the hindfoot is followed by the placement of the ipsilateral forefoot, is the gait used at slow speeds by the majority of species, including bears (Hildebrand, 1976).

Do bears run or gallop?
Initial analysis of the video data shows that bears walk with an average speed of 1.7 m/s, use a running walk with an average speed of 2.6 m/s and canter with an average speed of 2.9 m/s.

How do bears walk?
Bears frequently move in an overstep walk, with the rear foot falling in front of where the front foot registered. The broadest part of the palm pad is on the outside and the shortest toe, which may not register, is on the inside. Bears toe-in and walk with most of their weight on the outside of their foot.

## convert gait-patterns-in-quadruped to maths formula
It is not possible to convert gait patterns in quadruped animals to a single mathematical formula as gait patterns vary depending on the animal and its environment. However, researchers have used mathematical models to analyze and understand gait patterns in quadruped animals. These models typically include equations for the dynamics of the animal's movement and may incorporate variables such as limb kinematics, muscle forces, and ground reaction forces.

## what about just the sequence
The gait sequence of a quadruped animal can be described mathematically by the order in which its limbs touch the ground. For example, the gait sequence for a trotting quadruped can be represented as " diagonal pair" (front left and hind right legs move together, followed by front right and hind left legs) or "lope" (left hind and left front legs move together followed by the right hind and right front legs) .

Another way to represent it mathematically would be by using a state transition matrix, where each state represents a specific limb in contact with the ground, and the matrix describes the probabilities of transitioning from one state to another.

Additionally, various mathematical models have been proposed to describe the gait patterns of quadruped animals, such as the spring-mass model, the dynamic model, and the optimization-based model. These models can be used to analyze the kinematics and kinetics of the animal's movement, and can be represented mathematically using a variety of equations and variables such as limb kinematics, muscle forces, and ground reaction forces.

## state transition matrix 
"Given a state transition matrix for a quadruped animal's gait sequence, where each state represents a specific limb in contact with the ground, determine the probability of transitioning from one state to another after a certain number of steps."

show the maths

To determine the probability of transitioning from one state to another after a certain number of steps, we can use the transition matrix to calculate the probability. The transition matrix is a square matrix of size NxN, where N is the number of states. Each element in the matrix represents the probability of transitioning from one state to another.

## For example, 
if we have a 4x4 transition matrix, and we want to calculate the probability of transitioning from state 1 to state 3 after 2 steps, we can use the following equation:
`P(state1 to state3 after 2 steps) = P(state1 to state2) * P(state2 to state3)`
 Where P(state1 to state2) is the element in the transition matrix at row 1 and column 2, and P(state2 to state3) is the element in the transition matrix at row 2 and column 3.
In this case, the probability of transitioning from state 1 to state 3 after two steps is the product of the two elements in the transition matrix: P(state1 to state2) * P(state2 to state3).

convet to c code
```
// Declare and initialize transition matrix
double transition_matrix[4][4] = {
    {0.2, 0.3, 0.3, 0.2},
    {0.3, 0.2, 0.2, 0.3},
    {0.2, 0.3, 0.3, 0.2},
    {0.3, 0.2, 0.2, 0.3}
};

// Function to calculate probability of transitioning from one state to another
double transition_probability(int start, int end, int steps)
{
    // Initialize probability to 1
    double probability = 1;

    // Calculate the probability of transitioning from start to end in given number of steps
    for (int i = 0; i < steps; i++) {
        probability *= transition_matrix[start][end];
    }

    return probability;
}

int main()
{
    // Calculate the probability of transitioning from state 1 to state 3 after two steps
    double probability = transition_probability(1, 3, 2);

    printf("Probability of transitioning from state 1 to state 3 after two steps: %f\n", probability);

    return 0;
}
``

## kinematic data
Given the kinematic data of a quadruped animal's hind limb during a trot gait, use the spring-mass model equations to calculate the forces acting on the limb and estimate the animal's muscle activity.


show the maths

First, we need to calculate the net force acting on the limb. The net force can be calculated as the sum of the forces due to gravity and elasticity:
`Fnet = mg + kx` where m is the mass of the limb, g is the gravitational acceleration, k is the spring constant, and x is the displacement of the limb.
Next, we need to calculate the muscle activity. Muscle activity can be estimated using the following equation:
`M = Fnet/Fmax` where M is the muscle activity, Fnet is the net force acting on the limb, and Fmax is the maximum force that the muscle can generate.
Finally, we need to calculate the forces due to gravity and elasticity. For gravity, the force is equal to the mass of the limb multiplied by the gravitational acceleration: `Fgravity = mg`
For elasticity, the force is equal to the spring constant multiplied by the displacement of the limb:
`Felasticity = kx`
Using these equations, we can calculate the net force acting on the limb, the forces due to gravity and elasticity, and the muscle activity.

convert to c code

```
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
```


- https://www.youtube.com/watch?v=Av78oZwA7XI

![0017775 010](https://user-images.githubusercontent.com/58069246/176603738-633d58c0-cbba-4f99-a9bf-87bfdf801edf.png)
![download](https://user-images.githubusercontent.com/58069246/176603780-7af42b5a-cfed-4d63-9ab8-2c6d0be07c0d.png)
![500px-Gait_graphs_v2](https://user-images.githubusercontent.com/58069246/176603837-7b493146-8ba2-4f5a-a848-6320a5770b29.png)

### geometry of bear
![download](https://user-images.githubusercontent.com/58069246/176604357-7b9b98fa-b29e-4f79-91fa-74ece6f6b285.jpg)
![download](https://user-images.githubusercontent.com/58069246/176604388-a2873fc8-f459-4a15-9548-3a2a98c681b5.jpg)
![download](https://user-images.githubusercontent.com/58069246/176604464-9d215021-7df4-4470-a0dd-b84f3b08c43d.jpg)
![download](https://user-images.githubusercontent.com/58069246/176604490-669c8369-2ab5-4e71-a225-86e1c60b50fc.jpg)
![images](https://user-images.githubusercontent.com/58069246/176604521-fe5017a7-cb02-4555-9617-72e5278e9fb0.jpg)
![download](https://user-images.githubusercontent.com/58069246/176604607-cccf69b3-8cd4-4426-bf51-6eaf2ba881f3.jpg)









### Ref
- https://en.wikipedia.org/wiki/Gait
- https://www.shopmascot.com/Realistic-Grizzly-Bear-Mascot-Costume?
- 
