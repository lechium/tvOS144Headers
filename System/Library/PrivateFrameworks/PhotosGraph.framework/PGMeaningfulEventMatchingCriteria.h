/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class PGGraphMomentNode;

@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria {

	BOOL _interestingForMeaningInference;
	PGGraphMomentNode* _momentNode;

}

@property (assign,nonatomic) BOOL interestingForMeaningInference;              //@synthesize interestingForMeaningInference=_interestingForMeaningInference - In the implementation block
@property (nonatomic,readonly) PGGraphMomentNode * momentNode;                 //@synthesize momentNode=_momentNode - In the implementation block
-(id)debugDescription;
-(id)initWithMoment:(id)arg1 ;
-(id)matchingResultWithCriteria:(id)arg1 ;
-(double)matchingScoreWithCriteria:(id)arg1 failed:(BOOL*)arg2 isReliable:(BOOL*)arg3 ;
-(void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 requiresStrictMatching:(BOOL)arg3 ;
-(PGGraphMomentNode *)momentNode;
-(BOOL)interestingForMeaningInference;
-(void)setInterestingForMeaningInference:(BOOL)arg1 ;
@end
