/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTokenizedTextResultColumn.h>

@class NSArray;

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn

@property (nonatomic,copy) NSArray * tokenRows; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTokenRows:(id)arg1 ;
-(long long)addTokenRowWithTokens:(id)arg1 ;
-(void)sortTokenRows;
-(id)_mutableTokenRows;
-(void)setTokenRows:(NSArray *)arg1 ;
-(void)setTokenRowWithTokens:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeTokenRowAtIndex:(long long)arg1 ;
@end

