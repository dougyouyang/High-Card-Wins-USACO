//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int b[100005], e[100005];

int main()
{
    int n, c, pob, poe, score=0;
    int i;
    
    cin >> n;
    pob=2*n, poe=2*n;
    for(i=0;i<n;i++){
        cin >> c;
        e[c-1]=1;
    }
    for(i=0;i<2*n;i++){
        if(e[i]==0){
            b[i]=1;
        }
    }
    
    while(pob>=0 && poe>=0){
        if(b[pob]==0){
            pob--;
            continue;
        }
        if(e[poe]==0){
            poe--;
            continue;
        }
        if(pob>poe){
            score++, pob--, poe--;
        }
        else if(poe>pob){
            poe--;
        }
    }
    
    cout << score << endl;
    
    return 0;
}
