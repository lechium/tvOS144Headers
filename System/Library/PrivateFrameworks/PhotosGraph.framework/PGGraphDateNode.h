/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString, PGGraphCalendarUnitNode, PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphOptimizedNode {

	NSString* _name;

}

@property (readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) PGGraphCalendarUnitNode * dayNode; 
@property (readonly) PGGraphCalendarUnitNode * monthNode; 
@property (readonly) PGGraphCalendarUnitNode * yearNode; 
@property (readonly) PGGraphCalendarUnitNode * weekOfYearNode; 
@property (readonly) PGGraphCalendarUnitNode * weekOfMonthNode; 
@property (nonatomic,readonly) PGGraphSeasonNode * seasonNode; 
@property (readonly) long long day; 
@property (readonly) long long month; 
@property (readonly) long long year; 
+(id)filter;
+(id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3 ;
+(id)seasonOfDate;
+(id)yearOfDate;
+(id)momentOfDate;
-(NSString *)name;
-(id)description;
-(id)init;
-(unsigned short)domain;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)associatedNodesForRemoval;
-(id)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)localDate;
-(PGGraphCalendarUnitNode *)yearNode;
-(PGGraphCalendarUnitNode *)monthNode;
-(PGGraphCalendarUnitNode *)dayNode;
-(PGGraphCalendarUnitNode *)weekOfYearNode;
-(PGGraphCalendarUnitNode *)weekOfMonthNode;
-(void)enumerateHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphSeasonNode *)seasonNode;
-(id)sameWeekDateNodes;
-(id)lastWeekDateNodes;
@end
