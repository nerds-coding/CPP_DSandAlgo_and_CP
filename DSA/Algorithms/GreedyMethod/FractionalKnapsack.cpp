#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

// It is similar like 0/1 knapsack problem 
// but in this case we can take the fractional value also to maximize the profit


// thus we sort the proft by per item weight (profit per kg)

struct Item
{
    float weight;
    float profit;
};



bool compare(Item a, Item b)
{
    return (a.profit / a.weight) > (b.profit / b.weight);
}

void knapsack(int item, int sack_weight, Item arr[])
{
    float profit = 0;

    sort(arr, arr + item, compare);

    for (int i = 0; i < item; i++)
    {
        if (sack_weight >= arr[i].weight){// if sack have more weight than given item weight we simply add
            profit += arr[i].profit;
            sack_weight -= arr[i].weight;
        }else if(sack_weight>0){ // it there is chance to add only the fractional weight we will add that specific fractional weight
            profit+= (arr[i].profit/sack_weight);
            sack_weight = 0;
        }
    }

    cout<<"Total Profit = "<<profit<<endl;
}

int main()
{

    struct Item ksack[7];

    ksack[0].weight = 1;
    ksack[0].profit = 6;

    ksack[1].weight = 2;
    ksack[1].profit = 10;

    ksack[2].weight = 4;
    ksack[2].profit = 18;

    ksack[3].weight = 1;
    ksack[3].profit = 3;

    ksack[4].weight = 5;
    ksack[4].profit = 15;

    ksack[5].weight = 3;
    ksack[5].profit = 5;

    ksack[6].weight = 7;
    ksack[6].profit = 7;

    knapsack(7, 15, ksack);

    return 0;
}