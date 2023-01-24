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
