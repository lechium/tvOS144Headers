/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData, NSData;

@interface _AAURLSessionOperation : NSObject {

	NSMutableData* _mutableData;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
+(id)operationWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(NSData *)data;
-(id)completion;
-(void)appendData:(id)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)invokeCompletionWithResponse:(id)arg1 error:(id)arg2 ;
@end

