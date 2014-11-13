//
//  Grid.h
//  GameOfLife
//
//  Created by Compu on 11/12/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@end
@interface countNeighbors : NSObject
@end
@interface updateCreatures : NSObject


@end
@interface evolveStep

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(int)countNeighbors;
-(int)updateCreatures;

@end


