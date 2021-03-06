/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSObject, CNUnfairLock;

@interface CNNameStringTokenizer : NSObject {

	CFStringTokenizerRef _tokenizer;
	NSObject*<OS_dispatch_queue> _syncQueue;
	CNUnfairLock* _lock;

}

@property (nonatomic,readonly) CFStringTokenizerRef tokenizer;              //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) CNUnfairLock * lock;                         //@synthesize lock=_lock - In the implementation block
+(id)tokenizeNameString:(id)arg1 usingLocale:(id)arg2 inferredNameOrder:(long long*)arg3 ;
+(void)setInferredNameOrder:(long long*)arg1 toTokenizerNameOrder:(int)arg2 ;
+(id)tokenizeNameString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CNUnfairLock *)lock;
-(id)initWithLocale:(id)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(id)tokenizeNameString:(id)arg1 inferredNameOrder:(long long*)arg2 ;
@end

