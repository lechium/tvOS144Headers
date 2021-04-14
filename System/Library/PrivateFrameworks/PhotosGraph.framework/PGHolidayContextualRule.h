/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGContextualRule.h>

@class PGGraph, PGGraphHolidayNode, NSString;

@interface PGHolidayContextualRule : NSObject <PGContextualRule> {

	PGGraph* _graph;
	PGGraphHolidayNode* _holidayNode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGraph:(id)arg1 ;
-(BOOL)canProvideContextualKeyAssetsWithOptions:(id)arg1 ;
-(void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)highlightNodeMatchingYearHighlight:(id)arg1 withOptions:(id)arg2 ;
@end

