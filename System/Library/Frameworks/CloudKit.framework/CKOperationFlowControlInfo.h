/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSDate;

@interface CKOperationFlowControlInfo : NSObject {

	NSError* _lastError;
	NSDate* _flowControlEndDate;

}

@property (nonatomic,retain) NSError * lastError;                      //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) NSDate * flowControlEndDate;              //@synthesize flowControlEndDate=_flowControlEndDate - In the implementation block
+(id)flowControlInfoWithEndDate:(id)arg1 error:(id)arg2 ;
-(NSError *)lastError;
-(void)setFlowControlEndDate:(NSDate *)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
-(NSDate *)flowControlEndDate;
@end

