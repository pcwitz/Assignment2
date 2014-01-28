//
//  Fruit.h
//  Fruit
//
//  Created by Build User on 1/28/14.
//  Copyright (c) 2014 Pitt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Fruit : NSObject

- initWithName:(NSString *)inName withColor:(NSString *)inColor withShape:(NSString *)inShape;

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* color;
@property (nonatomic, strong) NSString* shape;

@end
