//
//  ChartModel.h
//  chartee
//
//  Created by zzy on 5/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Chart;

@interface ChartModel:NSObject

-(void)drawSerie:(id)chart serie:(NSMutableDictionary *)serie;
-(void)setValuesForYAxis:(id)chart serie:(NSDictionary *)serie;
-(void)setLabel:(id)chart label:(NSMutableArray *)label forSerie:(NSMutableDictionary *) serie;
-(void)drawTips:(id)chart serie:(NSMutableDictionary *)serie;

@end
