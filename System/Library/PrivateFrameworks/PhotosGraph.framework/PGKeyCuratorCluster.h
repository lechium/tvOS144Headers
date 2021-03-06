/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLSInvestigationItem;
@class NSArray;

@interface PGKeyCuratorCluster : NSObject {

	NSArray* _subclusters;
	id<CLSInvestigationItem> _keyItem;
	double _score;

}

@property (readonly) NSArray * subclusters;                         //@synthesize subclusters=_subclusters - In the implementation block
@property (readonly) id<CLSInvestigationItem> keyItem;              //@synthesize keyItem=_keyItem - In the implementation block
@property (readonly) double score;                                  //@synthesize score=_score - In the implementation block
-(double)score;
-(id<CLSInvestigationItem>)keyItem;
-(NSArray *)subclusters;
-(id)initWithSubclusters:(id)arg1 keyItem:(id)arg2 score:(double)arg3 ;
@end

