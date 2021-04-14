/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippet.h>

@class NSData, NSArray;

@interface SACardSnippet : SAUISnippet

@property (nonatomic,copy) NSData * cardData; 
@property (nonatomic,copy) NSData * compactSizeCardData; 
@property (nonatomic,copy) NSArray * contextItems; 
@property (nonatomic,copy) NSArray * referencedCommands; 
@property (nonatomic,copy) NSArray * referencedSnippets; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)cardData;
-(void)setCardData:(NSData *)arg1 ;
-(NSData *)compactSizeCardData;
-(void)setCompactSizeCardData:(NSData *)arg1 ;
-(NSArray *)contextItems;
-(void)setContextItems:(NSArray *)arg1 ;
-(NSArray *)referencedCommands;
-(void)setReferencedCommands:(NSArray *)arg1 ;
-(NSArray *)referencedSnippets;
-(void)setReferencedSnippets:(NSArray *)arg1 ;
@end

