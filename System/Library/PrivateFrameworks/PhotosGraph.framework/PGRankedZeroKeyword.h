/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject {

	NSDictionary* _zeroKeyword;
	double _score;

}

@property (readonly) NSDictionary * zeroKeyword;              //@synthesize zeroKeyword=_zeroKeyword - In the implementation block
@property (readonly) double score;                            //@synthesize score=_score - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(double)score;
-(id)initWithKeyword:(id)arg1 score:(double)arg2 ;
-(NSDictionary *)zeroKeyword;
@end

