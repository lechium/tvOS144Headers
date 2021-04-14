/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSDictionary, NSSet, NSIndexSet;

@interface PGPotentialFeatureVectorBasedMemory : PGPotentialMemory {

	BOOL _isBirthday;
	NSDictionary* _matchingKeywords;
	NSDictionary* _referenceKeywords;
	NSDictionary* _momentKeywords;
	NSSet* _personNodes;
	NSIndexSet* _sortedCriteria;
	double _matchingScore;
	double _contentScore;
	double _neighborScore;

}

@property (retain) NSDictionary * matchingKeywords;               //@synthesize matchingKeywords=_matchingKeywords - In the implementation block
@property (retain) NSDictionary * referenceKeywords;              //@synthesize referenceKeywords=_referenceKeywords - In the implementation block
@property (retain) NSDictionary * momentKeywords;                 //@synthesize momentKeywords=_momentKeywords - In the implementation block
@property (retain) NSSet * personNodes;                           //@synthesize personNodes=_personNodes - In the implementation block
@property (assign) BOOL isBirthday;                               //@synthesize isBirthday=_isBirthday - In the implementation block
@property (retain) NSIndexSet * sortedCriteria;                   //@synthesize sortedCriteria=_sortedCriteria - In the implementation block
@property (assign) double matchingScore;                          //@synthesize matchingScore=_matchingScore - In the implementation block
@property (assign) double contentScore;                           //@synthesize contentScore=_contentScore - In the implementation block
@property (assign) double neighborScore;                          //@synthesize neighborScore=_neighborScore - In the implementation block
-(NSDictionary *)referenceKeywords;
-(void)setReferenceKeywords:(NSDictionary *)arg1 ;
-(BOOL)isBirthday;
-(void)setContentScore:(double)arg1 ;
-(double)contentScore;
-(double)matchingScore;
-(double)neighborScore;
-(NSSet *)personNodes;
-(void)setMatchingScore:(double)arg1 ;
-(NSDictionary *)matchingKeywords;
-(void)setMatchingKeywords:(NSDictionary *)arg1 ;
-(void)setNeighborScore:(double)arg1 ;
-(void)setPersonNodes:(NSSet *)arg1 ;
-(void)setIsBirthday:(BOOL)arg1 ;
-(NSDictionary *)momentKeywords;
-(void)setMomentKeywords:(NSDictionary *)arg1 ;
-(NSIndexSet *)sortedCriteria;
-(void)setSortedCriteria:(NSIndexSet *)arg1 ;
@end

