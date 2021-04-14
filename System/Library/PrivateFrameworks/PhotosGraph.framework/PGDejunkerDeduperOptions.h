/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface PGDejunkerDeduperOptions : NSObject {

	BOOL _doIdenticalDeduping;
	BOOL _useFaceprintsForIdenticalDeduping;
	BOOL _doSemanticalDeduping;
	BOOL _doNotSemanticallyDedupePeople;
	BOOL _doNotSemanticallyDedupePersons;
	BOOL _allowAdaptiveForSemanticalDeduping;
	BOOL _useOnlyScenesForDeduping;
	BOOL _useAllPersonsForDeduping;
	BOOL _useFaceQualityForElection;
	BOOL _doNotDedupeVideos;
	BOOL _doNotDedupeInterestingPortraitsAndLivePictures;
	BOOL _onlyDedupeContiguousItems;
	BOOL _doDejunk;
	BOOL _returnDedupedJunkIfOnlyJunk;
	BOOL _doFinalPass;
	double _identicalDedupingTimeInterval;
	double _identicalDedupingTimeIntervalForPeople;
	double _identicalDedupingMaximumTimeGroupExtension;
	unsigned long long _maximumNumberOfItemsPerIdenticalCluster;
	double _identicalDedupingThreshold;
	double _identicalDedupingThresholdForPeople;
	double _identicalDedupingThresholdForBestItems;
	double _identicalDedupingFaceprintDistance;
	double _semanticalDedupingTimeInterval;
	double _semanticalDedupingTimeIntervalForPeople;
	double _semanticalDedupingTimeIntervalForPersons;
	double _semanticalDedupingMaximumTimeGroupExtension;
	unsigned long long _maximumNumberOfItemsPerSemanticalCluster;
	double _semanticalDedupingThreshold;
	double _semanticalDedupingThresholdForPeople;
	double _semanticalDedupingThresholdForPersons;
	double _finalPassTimeInterval;
	double _finalPassMaximumTimeGroupExtension;
	double _finalPassDedupingThreshold;
	NSSet* _identifiersOfRequiredItems;

}

@property (assign,nonatomic) BOOL doIdenticalDeduping;                                                 //@synthesize doIdenticalDeduping=_doIdenticalDeduping - In the implementation block
@property (assign,nonatomic) double identicalDedupingTimeInterval;                                     //@synthesize identicalDedupingTimeInterval=_identicalDedupingTimeInterval - In the implementation block
@property (assign,nonatomic) double identicalDedupingTimeIntervalForPeople;                            //@synthesize identicalDedupingTimeIntervalForPeople=_identicalDedupingTimeIntervalForPeople - In the implementation block
@property (assign,nonatomic) double identicalDedupingMaximumTimeGroupExtension;                        //@synthesize identicalDedupingMaximumTimeGroupExtension=_identicalDedupingMaximumTimeGroupExtension - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItemsPerIdenticalCluster;               //@synthesize maximumNumberOfItemsPerIdenticalCluster=_maximumNumberOfItemsPerIdenticalCluster - In the implementation block
@property (assign,nonatomic) double identicalDedupingThreshold;                                        //@synthesize identicalDedupingThreshold=_identicalDedupingThreshold - In the implementation block
@property (assign,nonatomic) double identicalDedupingThresholdForPeople;                               //@synthesize identicalDedupingThresholdForPeople=_identicalDedupingThresholdForPeople - In the implementation block
@property (assign,nonatomic) double identicalDedupingThresholdForBestItems;                            //@synthesize identicalDedupingThresholdForBestItems=_identicalDedupingThresholdForBestItems - In the implementation block
@property (assign,nonatomic) BOOL useFaceprintsForIdenticalDeduping;                                   //@synthesize useFaceprintsForIdenticalDeduping=_useFaceprintsForIdenticalDeduping - In the implementation block
@property (assign,nonatomic) double identicalDedupingFaceprintDistance;                                //@synthesize identicalDedupingFaceprintDistance=_identicalDedupingFaceprintDistance - In the implementation block
@property (assign,nonatomic) BOOL doSemanticalDeduping;                                                //@synthesize doSemanticalDeduping=_doSemanticalDeduping - In the implementation block
@property (assign,nonatomic) double semanticalDedupingTimeInterval;                                    //@synthesize semanticalDedupingTimeInterval=_semanticalDedupingTimeInterval - In the implementation block
@property (assign,nonatomic) double semanticalDedupingTimeIntervalForPeople;                           //@synthesize semanticalDedupingTimeIntervalForPeople=_semanticalDedupingTimeIntervalForPeople - In the implementation block
@property (assign,nonatomic) double semanticalDedupingTimeIntervalForPersons;                          //@synthesize semanticalDedupingTimeIntervalForPersons=_semanticalDedupingTimeIntervalForPersons - In the implementation block
@property (assign,nonatomic) double semanticalDedupingMaximumTimeGroupExtension;                       //@synthesize semanticalDedupingMaximumTimeGroupExtension=_semanticalDedupingMaximumTimeGroupExtension - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItemsPerSemanticalCluster;              //@synthesize maximumNumberOfItemsPerSemanticalCluster=_maximumNumberOfItemsPerSemanticalCluster - In the implementation block
@property (assign,nonatomic) double semanticalDedupingThreshold;                                       //@synthesize semanticalDedupingThreshold=_semanticalDedupingThreshold - In the implementation block
@property (assign,nonatomic) double semanticalDedupingThresholdForPeople;                              //@synthesize semanticalDedupingThresholdForPeople=_semanticalDedupingThresholdForPeople - In the implementation block
@property (assign,nonatomic) double semanticalDedupingThresholdForPersons;                             //@synthesize semanticalDedupingThresholdForPersons=_semanticalDedupingThresholdForPersons - In the implementation block
@property (assign,nonatomic) BOOL dontSemanticallyDedupePeople;                                        //@synthesize doNotSemanticallyDedupePeople=_doNotSemanticallyDedupePeople - In the implementation block
@property (assign,nonatomic) BOOL dontSemanticallyDedupePersons;                                       //@synthesize doNotSemanticallyDedupePersons=_doNotSemanticallyDedupePersons - In the implementation block
@property (assign,nonatomic) BOOL allowAdaptiveForSemanticalDeduping;                                  //@synthesize allowAdaptiveForSemanticalDeduping=_allowAdaptiveForSemanticalDeduping - In the implementation block
@property (assign,nonatomic) BOOL useOnlyScenesForDeduping;                                            //@synthesize useOnlyScenesForDeduping=_useOnlyScenesForDeduping - In the implementation block
@property (assign,nonatomic) BOOL useAllPersonsForDeduping;                                            //@synthesize useAllPersonsForDeduping=_useAllPersonsForDeduping - In the implementation block
@property (assign,nonatomic) BOOL useFaceQualityForElection;                                           //@synthesize useFaceQualityForElection=_useFaceQualityForElection - In the implementation block
@property (assign,nonatomic) BOOL doNotDedupeVideos;                                                   //@synthesize doNotDedupeVideos=_doNotDedupeVideos - In the implementation block
@property (assign,nonatomic) BOOL doNotDedupeInterestingPortraitsAndLivePictures;                      //@synthesize doNotDedupeInterestingPortraitsAndLivePictures=_doNotDedupeInterestingPortraitsAndLivePictures - In the implementation block
@property (assign,nonatomic) BOOL onlyDedupeContiguousItems;                                           //@synthesize onlyDedupeContiguousItems=_onlyDedupeContiguousItems - In the implementation block
@property (assign,nonatomic) BOOL doDejunk;                                                            //@synthesize doDejunk=_doDejunk - In the implementation block
@property (assign,nonatomic) BOOL returnDedupedJunkIfOnlyJunk;                                         //@synthesize returnDedupedJunkIfOnlyJunk=_returnDedupedJunkIfOnlyJunk - In the implementation block
@property (assign,nonatomic) BOOL doFinalPass;                                                         //@synthesize doFinalPass=_doFinalPass - In the implementation block
@property (assign,nonatomic) double finalPassTimeInterval;                                             //@synthesize finalPassTimeInterval=_finalPassTimeInterval - In the implementation block
@property (assign,nonatomic) double finalPassMaximumTimeGroupExtension;                                //@synthesize finalPassMaximumTimeGroupExtension=_finalPassMaximumTimeGroupExtension - In the implementation block
@property (assign,nonatomic) double finalPassDedupingThreshold;                                        //@synthesize finalPassDedupingThreshold=_finalPassDedupingThreshold - In the implementation block
@property (nonatomic,retain) NSSet * identifiersOfRequiredItems;                                       //@synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems - In the implementation block
-(id)description;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSSet *)identifiersOfRequiredItems;
-(void)setIdentifiersOfRequiredItems:(NSSet *)arg1 ;
-(id)dictionaryRepresentationRestrictingToGlobalOptions:(BOOL)arg1 ;
-(BOOL)doIdenticalDeduping;
-(void)setDoIdenticalDeduping:(BOOL)arg1 ;
-(double)identicalDedupingTimeInterval;
-(void)setIdenticalDedupingTimeInterval:(double)arg1 ;
-(double)identicalDedupingTimeIntervalForPeople;
-(void)setIdenticalDedupingTimeIntervalForPeople:(double)arg1 ;
-(double)identicalDedupingMaximumTimeGroupExtension;
-(void)setIdenticalDedupingMaximumTimeGroupExtension:(double)arg1 ;
-(unsigned long long)maximumNumberOfItemsPerIdenticalCluster;
-(void)setMaximumNumberOfItemsPerIdenticalCluster:(unsigned long long)arg1 ;
-(double)identicalDedupingThreshold;
-(void)setIdenticalDedupingThreshold:(double)arg1 ;
-(double)identicalDedupingThresholdForPeople;
-(void)setIdenticalDedupingThresholdForPeople:(double)arg1 ;
-(double)identicalDedupingThresholdForBestItems;
-(void)setIdenticalDedupingThresholdForBestItems:(double)arg1 ;
-(BOOL)useFaceprintsForIdenticalDeduping;
-(void)setUseFaceprintsForIdenticalDeduping:(BOOL)arg1 ;
-(double)identicalDedupingFaceprintDistance;
-(void)setIdenticalDedupingFaceprintDistance:(double)arg1 ;
-(BOOL)doSemanticalDeduping;
-(void)setDoSemanticalDeduping:(BOOL)arg1 ;
-(double)semanticalDedupingTimeInterval;
-(void)setSemanticalDedupingTimeInterval:(double)arg1 ;
-(double)semanticalDedupingTimeIntervalForPeople;
-(void)setSemanticalDedupingTimeIntervalForPeople:(double)arg1 ;
-(double)semanticalDedupingTimeIntervalForPersons;
-(void)setSemanticalDedupingTimeIntervalForPersons:(double)arg1 ;
-(double)semanticalDedupingMaximumTimeGroupExtension;
-(void)setSemanticalDedupingMaximumTimeGroupExtension:(double)arg1 ;
-(unsigned long long)maximumNumberOfItemsPerSemanticalCluster;
-(void)setMaximumNumberOfItemsPerSemanticalCluster:(unsigned long long)arg1 ;
-(double)semanticalDedupingThreshold;
-(void)setSemanticalDedupingThreshold:(double)arg1 ;
-(double)semanticalDedupingThresholdForPeople;
-(void)setSemanticalDedupingThresholdForPeople:(double)arg1 ;
-(double)semanticalDedupingThresholdForPersons;
-(void)setSemanticalDedupingThresholdForPersons:(double)arg1 ;
-(BOOL)dontSemanticallyDedupePeople;
-(void)setDontSemanticallyDedupePeople:(BOOL)arg1 ;
-(BOOL)dontSemanticallyDedupePersons;
-(void)setDontSemanticallyDedupePersons:(BOOL)arg1 ;
-(BOOL)allowAdaptiveForSemanticalDeduping;
-(void)setAllowAdaptiveForSemanticalDeduping:(BOOL)arg1 ;
-(BOOL)useOnlyScenesForDeduping;
-(void)setUseOnlyScenesForDeduping:(BOOL)arg1 ;
-(BOOL)useAllPersonsForDeduping;
-(void)setUseAllPersonsForDeduping:(BOOL)arg1 ;
-(BOOL)useFaceQualityForElection;
-(void)setUseFaceQualityForElection:(BOOL)arg1 ;
-(BOOL)doNotDedupeVideos;
-(void)setDoNotDedupeVideos:(BOOL)arg1 ;
-(BOOL)doNotDedupeInterestingPortraitsAndLivePictures;
-(void)setDoNotDedupeInterestingPortraitsAndLivePictures:(BOOL)arg1 ;
-(BOOL)onlyDedupeContiguousItems;
-(void)setOnlyDedupeContiguousItems:(BOOL)arg1 ;
-(BOOL)doDejunk;
-(void)setDoDejunk:(BOOL)arg1 ;
-(BOOL)returnDedupedJunkIfOnlyJunk;
-(void)setReturnDedupedJunkIfOnlyJunk:(BOOL)arg1 ;
-(BOOL)doFinalPass;
-(void)setDoFinalPass:(BOOL)arg1 ;
-(double)finalPassTimeInterval;
-(void)setFinalPassTimeInterval:(double)arg1 ;
-(double)finalPassMaximumTimeGroupExtension;
-(void)setFinalPassMaximumTimeGroupExtension:(double)arg1 ;
-(double)finalPassDedupingThreshold;
-(void)setFinalPassDedupingThreshold:(double)arg1 ;
@end

