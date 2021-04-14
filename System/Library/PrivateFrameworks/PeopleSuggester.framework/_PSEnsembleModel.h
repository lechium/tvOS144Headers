/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying_DKKnowledgeSaving;
#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _CDInteractionStore, PPTopicStore, PPContactStore, _CDInteractionCache, NSUserDefaults, CNContactStore, NSArray, NSString, _PSRuleMiningModel, _PSKNNModel, _PSHeuristics, _PSInteractionAndContactMonitor, NSSet, _PSContactResolver, NSDictionary;

@interface _PSEnsembleModel : NSObject {

	os_unfair_lock_s _lock;
	BOOL _allowNonSupportedBundleIDs;
	_CDInteractionStore* _interactionStore;
	id<_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
	PPTopicStore* _topicStore;
	PPContactStore* _portraitContactStore;
	_CDInteractionCache* _messageInteractionCache;
	_CDInteractionCache* _shareInteractionCache;
	NSUserDefaults* _peopleSuggesterDefaults;
	CNContactStore* _contactStore;
	NSArray* _defaultContactKeysToFetch;
	NSString* _trialID;
	_PSRuleMiningModel* _ruleMiningModel;
	_PSKNNModel* _knnModel;
	_PSKNNModel* _knnMapsModel;
	_PSKNNModel* _knnZkwModel;
	_PSKNNModel* _knnNameOrContactRankerModel;
	_PSKNNModel* _knnSiriNLContactRankerModel;
	_PSHeuristics* _heuristics;
	_PSInteractionAndContactMonitor* _contactMonitor;
	NSSet* _cachedSupportedBundleIDs;
	_PSContactResolver* _contactResolver;
	NSDictionary* _psConfig;
	NSDictionary* _psConfigForAdaptableModel;

}

@property (nonatomic,retain) _PSRuleMiningModel * ruleMiningModel;                                     //@synthesize ruleMiningModel=_ruleMiningModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnModel;                                                   //@synthesize knnModel=_knnModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnMapsModel;                                               //@synthesize knnMapsModel=_knnMapsModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnZkwModel;                                                //@synthesize knnZkwModel=_knnZkwModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnNameOrContactRankerModel;                                //@synthesize knnNameOrContactRankerModel=_knnNameOrContactRankerModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnSiriNLContactRankerModel;                                //@synthesize knnSiriNLContactRankerModel=_knnSiriNLContactRankerModel - In the implementation block
@property (nonatomic,retain) _PSHeuristics * heuristics;                                               //@synthesize heuristics=_heuristics - In the implementation block
@property (nonatomic,retain) _PSInteractionAndContactMonitor * contactMonitor;                         //@synthesize contactMonitor=_contactMonitor - In the implementation block
@property (nonatomic,retain) NSSet * cachedSupportedBundleIDs;                                         //@synthesize cachedSupportedBundleIDs=_cachedSupportedBundleIDs - In the implementation block
@property (nonatomic,retain) _PSContactResolver * contactResolver;                                     //@synthesize contactResolver=_contactResolver - In the implementation block
@property (assign,nonatomic) BOOL allowNonSupportedBundleIDs;                                          //@synthesize allowNonSupportedBundleIDs=_allowNonSupportedBundleIDs - In the implementation block
@property (retain) NSDictionary * psConfig;                                                            //@synthesize psConfig=_psConfig - In the implementation block
@property (retain) NSDictionary * psConfigForAdaptableModel;                                           //@synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;                                   //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) PPTopicStore * topicStore;                                                //@synthesize topicStore=_topicStore - In the implementation block
@property (nonatomic,retain) PPContactStore * portraitContactStore;                                    //@synthesize portraitContactStore=_portraitContactStore - In the implementation block
@property (nonatomic,retain) _CDInteractionCache * messageInteractionCache;                            //@synthesize messageInteractionCache=_messageInteractionCache - In the implementation block
@property (nonatomic,retain) _CDInteractionCache * shareInteractionCache;                              //@synthesize shareInteractionCache=_shareInteractionCache - In the implementation block
@property (nonatomic,retain) NSUserDefaults * peopleSuggesterDefaults;                                 //@synthesize peopleSuggesterDefaults=_peopleSuggesterDefaults - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * defaultContactKeysToFetch;                                      //@synthesize defaultContactKeysToFetch=_defaultContactKeysToFetch - In the implementation block
@property (nonatomic,retain) NSString * trialID;                                                       //@synthesize trialID=_trialID - In the implementation block
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(_PSHeuristics *)heuristics;
-(void)setHeuristics:(_PSHeuristics *)arg1 ;
-(_PSContactResolver *)contactResolver;
-(void)setContactResolver:(_PSContactResolver *)arg1 ;
-(NSString *)trialID;
-(void)setTrialID:(NSString *)arg1 ;
-(void)setPsConfigForAdaptableModel:(NSDictionary *)arg1 ;
-(NSDictionary *)psConfigForAdaptableModel;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(void)loadDefaultPSConfig;
-(void)loadDefaultAdaptableModelConfig;
-(BOOL)loadPSConfig:(id)arg1 ;
-(_PSRuleMiningModel *)ruleMiningModel;
-(_PSKNNModel *)knnModel;
-(_PSKNNModel *)knnMapsModel;
-(_PSKNNModel *)knnZkwModel;
-(_PSKNNModel *)knnNameOrContactRankerModel;
-(NSUserDefaults *)peopleSuggesterDefaults;
-(void)setAllowNonSupportedBundleIDs:(BOOL)arg1 ;
-(BOOL)allowNonSupportedBundleIDs;
-(id)fetchShareSheetSupportedBundleIDs;
-(void)populateCachesWithSupportedBundleIDs:(id)arg1 ;
-(NSArray *)defaultContactKeysToFetch;
-(NSSet *)cachedSupportedBundleIDs;
-(void)setMessageInteractionCache:(_CDInteractionCache *)arg1 ;
-(void)setShareInteractionCache:(_CDInteractionCache *)arg1 ;
-(void)setCachedSupportedBundleIDs:(NSSet *)arg1 ;
-(_CDInteractionCache *)messageInteractionCache;
-(_CDInteractionCache *)shareInteractionCache;
-(_PSInteractionAndContactMonitor *)contactMonitor;
-(void)setContactMonitor:(_PSInteractionAndContactMonitor *)arg1 ;
-(NSDictionary *)psConfig;
-(void)setRuleMiningModel:(_PSRuleMiningModel *)arg1 ;
-(void)setKnnModel:(_PSKNNModel *)arg1 ;
-(void)setKnnZkwModel:(_PSKNNModel *)arg1 ;
-(void)setKnnNameOrContactRankerModel:(_PSKNNModel *)arg1 ;
-(_PSKNNModel *)knnSiriNLContactRankerModel;
-(void)setKnnSiriNLContactRankerModel:(_PSKNNModel *)arg1 ;
-(id)familyPredictionsWithMaxSuggestions:(unsigned long long)arg1 ;
-(id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactKeysToFetch:(id)arg3 ;
-(PPTopicStore *)topicStore;
-(PPContactStore *)portraitContactStore;
-(id)suggestionsFromSuggestionProxies:(id)arg1 supportedBundleIDs:(id)arg2 contactKeysToFetch:(id)arg3 meContactIdentifier:(id)arg4 maxSuggestions:(unsigned long long)arg5 ;
-(void)addAdaptedModelUsageInfoToSuggestions:(id)arg1 ;
-(void)addSupportedBundleIDs:(id)arg1 ;
-(void)addUTIInfo:(id)arg1 predictionContext:(id)arg2 ;
-(void)updateTrialID:(id)arg1 ;
-(void)setKnnMapsModel:(_PSKNNModel *)arg1 ;
-(id)mapsSuggestionArrayWithArray:(id)arg1 appendingUniqueElementsFromArray:(id)arg2 contactResolver:(id)arg3 meContactId:(id)arg4 ;
-(id)rankedSiriMLCRHandles:(id)arg1 context:(id)arg2 ;
-(id)rankedHandlesFromCandidateHandles:(id)arg1 ;
-(void)populateCaches;
-(id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)mergedSuggestionsWithFamilySuggestions:(id)arg1 shareSheetSuggestions:(id)arg2 maxSuggestions:(unsigned long long)arg3 supportedBundleIds:(id)arg4 ;
-(id)predictWithMapsPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)suggestZKWMessagesSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)rankedGlobalSuggestionsWithPredictionContext:(id)arg1 contactsOnly:(BOOL)arg2 maxSuggestions:(unsigned long long)arg3 ;
-(id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 interactionId:(id)arg3 ;
-(id)rankedNameSuggestionsWithPredictionContext:(id)arg1 name:(id)arg2 ;
-(id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 ;
-(id)appExtensionSuggestionsFromContext:(id)arg1 ;
-(void)setTopicStore:(PPTopicStore *)arg1 ;
-(void)setPortraitContactStore:(PPContactStore *)arg1 ;
-(void)setPeopleSuggesterDefaults:(NSUserDefaults *)arg1 ;
-(void)setDefaultContactKeysToFetch:(NSArray *)arg1 ;
-(void)setPsConfig:(NSDictionary *)arg1 ;
@end

