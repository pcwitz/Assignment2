//
//  Fruit.m
//  Fruit
//
//  Created by Build User on 1/28/14.
//  Copyright (c) 2014 Pitt. All rights reserved.
//

#import "Fruit.h"

@implementation Fruit

- initWithName:(NSString *)inName withColor:(NSString *)inColor withShape:(NSString *)inShape{
    self = super.init;
    if (self) {
        _name = inName;
        _color = inColor;
        _shape = inShape;
    }

    return self;
}

@end
