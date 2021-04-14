/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet, NSString;

@interface PPTopicQuery : NSObject <NSCopying, NSSecureCoding> {

	BOOL _scoreWithBiases;
	BOOL _scoreWithStrictFiltering;
	BOOL _excludeWithoutSentiment;
	BOOL _scoreWithCalibration;
	BOOL _orderByIdentifier;
	BOOL _removeNearDuplicates;
	unsigned long long _limit;
	NSDate* _fromDate;
	NSDate* _toDate;
	NSDate* _scoringDate;
	NSSet* _matchingSourceBundleIds;
	NSSet* _excludingSourceBundleIds;
	NSSet* _matchingGroupIds;
	NSSet* _matchingDocumentIds;
	unsigned long long _deviceFilter;
	double _decayRate;
	NSSet* _matchingTopicIds;
	NSString* _matchingContactHandle;
	unsigned long long _minimumComponentCount;
	NSSet* _matchingAlgorithms;
	NSSet* _excludingAlgorithms;
	NSString* _matchingTopicTrie;

}

@property (assign,nonatomic) BOOL scoreWithCalibration;                             //@synthesize scoreWithCalibration=_scoreWithCalibration - In the implementation block
@property (assign,nonatomic) unsigned long long minimumComponentCount;              //@synthesize minimumComponentCount=_minimumComponentCount - In the implementation block
@property (nonatomic,retain) NSSet * matchingAlgorithms;                            //@synthesize matchingAlgorithms=_matchingAlgorithms - In the implementation block
@property (nonatomic,retain) NSSet * excludingAlgorithms;                           //@synthesize excludingAlgorithms=_excludingAlgorithms - In the implementation block
@property (nonatomic,retain) NSString * matchingTopicTrie;                          //@synthesize matchingTopicTrie=_matchingTopicTrie - In the implementation block
@property (assign,nonatomic) BOOL orderByIdentifier;                                //@synthesize orderByIdentifier=_orderByIdentifier - In the implementation block
@property (assign,nonatomic) BOOL removeNearDuplicates;                             //@synthesize removeNearDuplicates=_removeNearDuplicates - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) NSDate * fromDate;                                     //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                                       //@synthesize toDate=_toDate - In the implementation block
@property (nonatomic,retain) NSDate * scoringDate;                                  //@synthesize scoringDate=_scoringDate - In the implementation block
@property (nonatomic,retain) NSSet * matchingSourceBundleIds;                       //@synthesize matchingSourceBundleIds=_matchingSourceBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * excludingSourceBundleIds;                      //@synthesize excludingSourceBundleIds=_excludingSourceBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * matchingGroupIds;                              //@synthesize matchingGroupIds=_matchingGroupIds - In the implementation block
@property (nonatomic,retain) NSSet * matchingDocumentIds;                           //@synthesize matchingDocumentIds=_matchingDocumentIds - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFilter;                       //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (assign,nonatomic) BOOL overrideDecayRate; 
@property (assign,nonatomic) double decayRate;                                      //@synthesize decayRate=_decayRate - In the implementation block
@property (assign,nonatomic) BOOL scoreWithBiases;                                  //@synthesize scoreWithBiases=_scoreWithBiases - In the implementation block
@property (nonatomic,retain) NSSet * matchingTopicIds;                              //@synthesize matchingTopicIds=_matchingTopicIds - In the implementation block
@property (assign,nonatomic) BOOL scoreWithStrictFiltering;                         //@synthesize scoreWithStrictFiltering=_scoreWithStrictFiltering - In the implementation block
@property (assign,nonatomic) BOOL excludeWithoutSentiment;                          //@synthesize excludeWithoutSentiment=_excludeWithoutSentiment - In the implementation block
@property (nonatomic,retain) NSString * matchingContactHandle;                      //@synthesize matchingContactHandle=_matchingContactHandle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_algorithmsDescription:(id)arg1 ;
+(id)queryForCSSearchableItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)toDate;
-(double)decayRate;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)setDeviceFilter:(unsigned long long)arg1 ;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(void)setDecayRate:(double)arg1 ;
-(id)customizedDescription;
-(NSDate *)scoringDate;
-(void)setScoringDate:(NSDate *)arg1 ;
-(NSSet *)matchingSourceBundleIds;
-(void)setMatchingSourceBundleIds:(NSSet *)arg1 ;
-(NSSet *)excludingSourceBundleIds;
-(void)setExcludingSourceBundleIds:(NSSet *)arg1 ;
-(unsigned long long)deviceFilter;
-(NSSet *)matchingAlgorithms;
-(void)setMatchingAlgorithms:(NSSet *)arg1 ;
-(NSSet *)excludingAlgorithms;
-(void)setExcludingAlgorithms:(NSSet *)arg1 ;
-(NSString *)matchingContactHandle;
-(void)setMatchingContactHandle:(NSString *)arg1 ;
-(BOOL)overrideDecayRate;
-(void)setOverrideDecayRate:(BOOL)arg1 ;
-(BOOL)isEqualToTopicQuery:(id)arg1 ;
-(NSSet *)matchingGroupIds;
-(void)setMatchingGroupIds:(NSSet *)arg1 ;
-(NSSet *)matchingDocumentIds;
-(void)setMatchingDocumentIds:(NSSet *)arg1 ;
-(BOOL)scoreWithBiases;
-(void)setScoreWithBiases:(BOOL)arg1 ;
-(NSSet *)matchingTopicIds;
-(void)setMatchingTopicIds:(NSSet *)arg1 ;
-(BOOL)scoreWithStrictFiltering;
-(void)setScoreWithStrictFiltering:(BOOL)arg1 ;
-(BOOL)excludeWithoutSentiment;
-(void)setExcludeWithoutSentiment:(BOOL)arg1 ;
-(BOOL)scoreWithCalibration;
-(void)setScoreWithCalibration:(BOOL)arg1 ;
-(unsigned long long)minimumComponentCount;
-(void)setMinimumComponentCount:(unsigned long long)arg1 ;
-(NSString *)matchingTopicTrie;
-(void)setMatchingTopicTrie:(NSString *)arg1 ;
-(BOOL)orderByIdentifier;
-(void)setOrderByIdentifier:(BOOL)arg1 ;
-(BOOL)removeNearDuplicates;
-(void)setRemoveNearDuplicates:(BOOL)arg1 ;
@end

