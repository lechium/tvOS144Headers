/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class _CDInteractionStore, CNContactStore, NSUserDefaults, _PSRuleRankingMLModel;

@interface _PSRuleOverlapFeedback : NSObject {

	_CDInteractionStore* _interactionStore;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	CNContactStore* _contactStore;
	NSUserDefaults* _ruleOverlapFeedbackDefaults;
	_PSRuleRankingMLModel* _ruleRankingModel;

}

@property (nonatomic,retain) _CDInteractionStore * interactionStore;                    //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                   //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                             //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSUserDefaults * ruleOverlapFeedbackDefaults;              //@synthesize ruleOverlapFeedbackDefaults=_ruleOverlapFeedbackDefaults - In the implementation block
@property (retain) _PSRuleRankingMLModel * ruleRankingModel;                            //@synthesize ruleRankingModel=_ruleRankingModel - In the implementation block
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(void)writeRecordObjcWithData:(id)arg1 ;
-(NSUserDefaults *)ruleOverlapFeedbackDefaults;
-(void)setRuleOverlapFeedbackDefaults:(NSUserDefaults *)arg1 ;
-(_PSRuleRankingMLModel *)ruleRankingModel;
-(void)setRuleRankingModel:(_PSRuleRankingMLModel *)arg1 ;
@end

