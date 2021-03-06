/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSOptional;

@interface VSFileReadOperation : VSAsyncOperation {

	NSURL* _source;
	VSOptional* _result;

}

@property (nonatomic,retain) VSOptional * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSURL * source;                     //@synthesize source=_source - In the implementation block
-(id)init;
-(NSURL *)source;
-(void)setSource:(NSURL *)arg1 ;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
@end

