/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RETokenBuffer.h>

@protocol RETokenBuffer;
@class REScriptToken, NSString;

@interface REStandardizedTokenBuffer : NSObject <RETokenBuffer> {

	id<RETokenBuffer> _buffer;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmpty;
-(void)next;
-(REScriptToken *)currentToken;
-(id)initWithTokenBuffer:(id)arg1 ;
-(void)_cleanTokens;
@end
