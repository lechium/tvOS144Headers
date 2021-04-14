/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion, NSMutableArray;

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized> {

	_UIStatusBarDisplayItemPlacement* _placement;
	_UIStatusBarRegion* _region;
	NSMutableArray* _relations;

}

@property (nonatomic,retain) NSMutableArray * relations;                                          //@synthesize relations=_relations - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacement * placement;                      //@synthesize placement=_placement - In the implementation block
@property (nonatomic,__weak,readonly) _UIStatusBarRegion * region;                                //@synthesize region=_region - In the implementation block
@property (getter=areRelationsFulfilled,nonatomic,readonly) BOOL relationsFulfilled; 
@property (nonatomic,readonly) BOOL canBeEnabled; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long priority; 
+(id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2 ;
-(id)description;
-(long long)priority;
-(BOOL)isEnabled;
-(_UIStatusBarRegion *)region;
-(NSMutableArray *)relations;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(void)setRelations:(NSMutableArray *)arg1 ;
-(BOOL)canBeEnabled;
-(BOOL)areRelationsFulfilled;
@end

