/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying_DKKnowledgeSaving;
@class NSString;

@interface _PSFamilyMLPredictionTask : NSObject {

	id<_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
	NSString* _directory;

}

@property (nonatomic,copy,readonly) NSString * directory;                                              //@synthesize directory=_directory - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(NSString *)directory;
-(void)execute;
-(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)arg1 ;
-(id)contactKeysToFetch;
-(id)contactsInContactStore;
-(id)knowledgeEventUsingPredictions:(id)arg1 familyRelations:(id)arg2 ;
@end

