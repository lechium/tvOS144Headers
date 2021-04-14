/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SACFMMessageTextParseChunk.h>

@class NSArray;

@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk

@property (assign,nonatomic) long long emojiCount; 
@property (nonatomic,copy) NSArray * inflectedEmojiList; 
+(id)emojiParseChunk;
+(id)emojiParseChunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)emojiCount;
-(void)setEmojiCount:(long long)arg1 ;
-(NSArray *)inflectedEmojiList;
-(void)setInflectedEmojiList:(NSArray *)arg1 ;
@end

