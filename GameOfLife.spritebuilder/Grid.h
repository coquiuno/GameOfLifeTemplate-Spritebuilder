//
//  Grid.h
//  GameOfLife
//
//  Created by Compu on 11/12/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"



@interface Grid : CCSprite


@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(void)countNeighbors;
-(void)updateCreatures;
-(void)evolveStep;

@end


