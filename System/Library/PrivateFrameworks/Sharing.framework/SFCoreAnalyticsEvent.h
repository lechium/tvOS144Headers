/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol SFCoreAnalyticsEvent <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * eventPayload; 
@required
+(id)eventName;
-(NSDictionary *)eventPayload;
-(void)submitEvent;

@end

