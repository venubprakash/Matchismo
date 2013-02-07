//
//  PlayingCard.h
//  Matchismo
//
//  Created by Venu Boorugu on 1/30/13.
//  Copyright (c) 2013 VP Innovations. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
