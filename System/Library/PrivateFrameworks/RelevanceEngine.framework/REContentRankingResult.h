/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface REContentRankingResult : NSObject {

	BOOL _valid;
	int _unknownCount;
	double _positivePolarity;
	double _negativePolarity;
	double _unbiasedPositivePolarity;
	double _unbiasedNegativePolarity;

}

@property (assign,nonatomic) BOOL valid;                                   //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) double positivePolarity;                      //@synthesize positivePolarity=_positivePolarity - In the implementation block
@property (assign,nonatomic) double negativePolarity;                      //@synthesize negativePolarity=_negativePolarity - In the implementation block
@property (assign,nonatomic) int unknownCount;                             //@synthesize unknownCount=_unknownCount - In the implementation block
@property (assign,nonatomic) double unbiasedPositivePolarity;              //@synthesize unbiasedPositivePolarity=_unbiasedPositivePolarity - In the implementation block
@property (assign,nonatomic) double unbiasedNegativePolarity;              //@synthesize unbiasedNegativePolarity=_unbiasedNegativePolarity - In the implementation block
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)setPositivePolarity:(double)arg1 ;
-(void)setNegativePolarity:(double)arg1 ;
-(void)setUnknownCount:(int)arg1 ;
-(void)setUnbiasedPositivePolarity:(double)arg1 ;
-(void)setUnbiasedNegativePolarity:(double)arg1 ;
-(double)positivePolarity;
-(double)negativePolarity;
-(int)unknownCount;
-(double)unbiasedPositivePolarity;
-(double)unbiasedNegativePolarity;
@end

