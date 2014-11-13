//
//  Grid.h
//  GameOfLife
//
//  Created by Compu on 11/12/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface evolveStep : NSObject

@interface Grid : CCSprite

@interface countNeighbors : NSObject

@interface updateCreatures : NSObject





@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(int)countNeighbors;
-(int)updateCreatures;

@end


