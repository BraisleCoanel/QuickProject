//
//  Controller.cpp
//  QuickProject
//
//  Created by Martinson, Branton on 1/25/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "At this point I've ran " << index + 1 << " times" << endl;
    }
}
