/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject {

	NSMutableArray* _inDocumentWordsStack;
	NSMutableDictionary* _leftContextToWordMap;

}

@property (nonatomic,retain) NSMutableArray * inDocumentWordsStack;                   //@synthesize inDocumentWordsStack=_inDocumentWordsStack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftContextToWordMap;              //@synthesize leftContextToWordMap=_leftContextToWordMap - In the implementation block
-(id)description;
-(id)init;
-(void)pushWordToDocument:(id)arg1 ;
-(void)addToContextMap:(id)arg1 ;
-(void)removeFromContextMap:(id)arg1 ;
-(id)wordsForContext:(id)arg1 ;
-(void)insertWord:(id)arg1 atIndex:(long long)arg2 ;
-(id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3 ;
-(int)deleteWordsUptoContext:(id)arg1 ;
-(unsigned long long)wordsCount;
-(id)lastWord;
-(NSMutableArray *)inDocumentWordsStack;
-(void)setInDocumentWordsStack:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)leftContextToWordMap;
-(void)setLeftContextToWordMap:(NSMutableDictionary *)arg1 ;
@end

